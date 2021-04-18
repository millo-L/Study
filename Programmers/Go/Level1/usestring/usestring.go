package usestring

func Solution(s string) bool {
	length := len(s)

	if !(length == 4 || length == 6) {
		return false
	}

	for _, value := range s {
		if value < '0' || '9' < value {
			return false
		}
	}

	return true
}
