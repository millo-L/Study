package strangestring

import "unicode"

func Solution(s string) string {
	strs := []rune(s)
	index := 0
	for i, value := range strs {
		if unicode.IsSpace(value) {
			index = i + 1
		} else if (i-index)%2 == 0 {
			strs[i] = unicode.ToUpper(strs[i])
		} else {
			strs[i] = unicode.ToLower(strs[i])
		}
	}

	return string(strs)
}
