package findprime

type Set []int

func (s *Set) has(value int) bool {
	for _, item := range *s {
		if item == value {
			return true
		}
	}
	return false
}

func (s *Set) push(value int) {
	if (*s).has(value) {
		return
	}
	*s = append(*s, value)
}

func permutations(arr []int) [][]int {
	var helper func([]int, int)
	res := [][]int{}

	helper = func(arr []int, n int) {
		if n == 1 {
			tmp := make([]int, len(arr))
			copy(tmp, arr)
			res = append(res, tmp)
		} else {
			for i := 0; i < n; i++ {
				helper(arr, n-1)
				if n%2 == 1 {
					arr[i], arr[n-1] = arr[n-1], arr[i]
				} else {
					arr[0], arr[n-1] = arr[n-1], arr[0]
				}
			}
		}
	}
	helper(arr, len(arr))
	return res
}

func isPrime(num int) bool {
	if num < 2 {
		return false
	}

	for i := 2; i*i <= num; i++ {
		if num%i == 0 {
			return false
		}
	}

	return true
}

func Solution(numbers string) int {
	var s Set
	num := make([]int, len(numbers))
	for i, c := range numbers {
		num[i] = int(c - '0')
	}

	num_array := permutations(num)
	for i := range num_array {
		temp := 0
		for j := range num_array[i] {
			temp = temp*10 + num_array[i][j]
			s.push(temp)
		}
	}

	answer := 0
	for _, value := range s {
		if isPrime(value) {
			answer++
		}
	}

	return answer
}
