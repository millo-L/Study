package binary

import "testing"

func TestBinary(t *testing.T) {
	input := []string{"110010101001", "01110", "1111111"}
	expect := [][]int{{3, 8}, {3, 3}, {4, 1}}

	for i := range input {
		result := Solution(input[i])

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
