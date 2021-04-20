package camouflage

import "testing"

func TestCamouflage(t *testing.T) {
	input := [][][]string{{{"yellowhat", "headgear"}, {"bluesunglasses", "eyewear"}, {"green_turban", "headgear"}}, {{"crowmask", "face"}, {"bluesunglasses", "face"}, {"smoky_makeup", "face"}}}
	expect := []int{5, 3}

	for i := range input {
		result := Solution(input[i])
		if result != expect[i] {
			t.Errorf("Test%d: Wrong result", i+1)
			t.Error("expect:", expect[i])
			t.Error("result:", result)
		}
	}
}
