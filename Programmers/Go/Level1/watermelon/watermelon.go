// 수박수박수박수박수박수?
package watermelon

import "strings"

func Solution(n int) string {
	str := strings.Repeat("수박", n)
	return strings.Join(strings.Split(str, "")[:n], "")
}
