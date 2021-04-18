package findKim

import "fmt"

func Solution(seoul []string) string {
	index := 0

	for i, value := range seoul {
		if value == "Kim" {
			index = i
			break
		}
	}

	return fmt.Sprintf("김서방은 %d에 있다", index)
}
