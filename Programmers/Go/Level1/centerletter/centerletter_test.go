package centerletter

import "testing"

func TestCenterletter(t *testing.T) {
	result := Solution("abcde")

	if result != "c" {
		t.Errorf("Test1: Wrong result")
		t.Errorf("expect: c")
		t.Errorf("result: " + result)
	}

	result = Solution("qwer")

	if result != "we" {
		t.Errorf("Test2: Wrong result")
		t.Errorf("expect: qwer")
		t.Errorf("result: " + result)
	}
}
