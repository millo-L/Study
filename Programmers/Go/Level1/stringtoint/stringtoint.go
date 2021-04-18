package stringtoint

import "strconv"

func Solution(s string) int {
	/*
		num, err := strconv.Atoi(s)
		if err == nil {
			return num
		}
	*/

	num, _ := strconv.Atoi(s)
	return num
}
