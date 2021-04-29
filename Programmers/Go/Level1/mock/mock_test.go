package mock

import "testing"

func TestMock(t *testing.T) {
	input := [][]int{{1, 2, 3, 4, 5}, {1, 3, 2, 4, 2}}
	expect := [][]int{{1}, {1, 2, 3}}

	for i := range input {
		result := Solution(input[i])
		for j := range result {
			if result[j] != expect[i][j] {
				t.Errorf("Test%d: Wrong result", i+1)
				t.Error("expect:", expect[i])
				t.Error("result:", result)
			}
		}
	}
}
