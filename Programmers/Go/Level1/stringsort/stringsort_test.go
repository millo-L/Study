package stringsort

import "testing"

func TestStringsort(t *testing.T) {
	result := Solution([]string{"sun", "bed", "car"}, 1)

	if len(result) != 3 || result[0] != "car" || result[2] != "sun" {
		t.Errorf("Test1: Wrong result")
		t.Errorf("expect: [car bed sun]")
		t.Error("result:", result)
	}

	result = Solution([]string{"abce", "abcd", "cdx"}, 2)

	if len(result) != 3 || result[0] != "abcd" || result[2] != "cdx" {
		t.Errorf("Test2: Wrong result")
		t.Errorf("expect: [abcd abce cdx]")
		t.Error("result:", result)
	}
}
