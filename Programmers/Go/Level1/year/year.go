package year

func Solution(a int, b int) string {
	day := []string{"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"}
	days := []int{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
	sum := 0

	for i := 0; i < a-1; i++ {
		sum += days[i]
	}

	sum += b + 4

	return day[sum%7]
}
