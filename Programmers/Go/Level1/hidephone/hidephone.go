package hidephone

func Solution(phone_number string) string {
	phone := []rune(phone_number)
	length := len(phone)

	for i := 0; i < length-4; i++ {
		phone[i] = '*'
	}

	return string(phone)
}
