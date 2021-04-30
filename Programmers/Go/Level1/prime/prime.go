// 소수 만들기
package prime

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

func Solution(nums []int) int {
	answer := 0
	length := len(nums)

	for i := 0; i < length-2; i++ {
		for j := i + 1; j < length-1; j++ {
			for k := j + 1; k < length; k++ {
				if isPrime(nums[i] + nums[j] + nums[k]) {
					answer++
				}
			}
		}
	}

	return answer
}
