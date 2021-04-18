package password

import "testing"

func TestPassword(t *testing.T) {
	result := Solution("AB", 1)

	if result != "BC" {
		t.Errorf("Test1: Wrong result")
		t.Errorf("expect: BC")
		t.Error("result:", result)
	}

	result = Solution("z", 1)

	if result != "a" {
		t.Errorf("Test2: Wrong result")
		t.Errorf("expect: a")
		t.Error("result:", result)
	}

	result = Solution("a B z", 4)

	if result != "e F d" {
		t.Errorf("Test3: Wrong result")
		t.Errorf("expect: e F d")
		t.Error("result:", result)
	}
}
