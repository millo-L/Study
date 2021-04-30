// 시저 암호
package password

func Solution(s string, n int) string {
	str := []rune(s)
	offset := rune(n)
	for i, value := range str {
		if 'A' <= value && value <= 'Z' {
			str[i] = ((value + offset - 'A') % 26) + 'A'
		} else if 'a' <= value && value <= 'z' {
			str[i] = ((value + offset - 'a') % 26) + 'a'
		} else {
			str[i] = value
		}
	}
	return string(str)
}
