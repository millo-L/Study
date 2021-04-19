package joystick

func Solution(name string) int {
	answer := 0
	copy_str := ""
	for range name {
		copy_str += "A"
	}

	index := 0
	length := len(name)
	for copy_str != name {
		next_index := 0
		for i := 0; i < length; i++ {
			right := (index + i) % length
			left := (length + index - i) % length

			if copy_str[right] != name[right] {
				next_index = right
			} else if copy_str[left] != name[left] {
				next_index = left
			} else {
				continue
			}

			up := int(name[next_index] - 'A')
			down := int('Z'-name[next_index]) + 1

			if up > down {
				answer += down
			} else {
				answer += up
			}
			answer += i
			copy_str = copy_str[:next_index] + string(name[next_index]) + copy_str[next_index+1:]
			break
		}
		index = next_index
	}

	return answer
}
