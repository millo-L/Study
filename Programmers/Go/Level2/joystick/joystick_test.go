package joystick

import "testing"

func TestJoystick(t *testing.T) {
	input := []string{"JEROEN", "JAN"}
	expect := []int{56, 23}

	for i := range input {
		result := Solution(input[i])
		if result != expect[i] {
			t.Errorf("Test%d: Wrong result", i+1)
			t.Error("expect:", expect[i])
			t.Error("result:", result)
		}
	}
}
