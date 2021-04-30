package stringsort

import "testing"

func TestStringsort(t *testing.T) {
	input1 := [][]string{{"sun", "bed", "car"}, {"abce", "abcd", "cdx"}}
	input2 := []int{1, 2}
	expect := [][]string{{"car", "bed", "sun"}, {"abcd", "abce", "cdx"}}

	for i := range input1 {
		result := Solution(input1[i], input2[i])
		for j := range result {
			if result[j] != expect[i][j] {
				t.Errorf("Test%d: Wrong result", i+1)
				t.Error("expect:", expect[i])
				t.Error("result:", result)
				break
			}
		}
	}
}
