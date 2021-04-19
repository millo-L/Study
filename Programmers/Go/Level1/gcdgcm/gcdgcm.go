package gcdgcm

func gcdFunc(a, b int) int {
	for a > 0 {
		a, b = b%a, a
	}
	return b
}

func Solution(n int, m int) []int {
	gcd := gcdFunc(n, m)
	gcm := n * m / gcd

	return []int{gcd, gcm}
}
