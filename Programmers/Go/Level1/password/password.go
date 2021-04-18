package password

func Solution(s string, n int) string {
	strs := make([]rune, len(s))
	offset := rune(n)
	for i, v := range s {
		if 'A' <= v && v <= 'Z' {
			strs[i] = ((v + offset - 'A') % 26) + 'A'
		} else if 'a' <= v && v <= 'z' {
			strs[i] = ((v + offset - 'a') % 26) + 'a'
		} else {
			strs[i] = v
		}
	}
	return string(strs)
}
