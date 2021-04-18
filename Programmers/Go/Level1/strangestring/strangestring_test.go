package strangestring

import "testing"

func TestStrangstring(t *testing.T) {
	result := Solution("try hello world")

	if result != "TrY HeLlO WoRlD" {
		t.Errorf("Test1: Wrong result")
		t.Errorf("expect: TrY HeLlO WoRlD")
		t.Error("result:", result)
	}
}
