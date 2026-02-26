package mathutils

import (
	"math"
)

type Operation int

const (
	subtract Operation = iota
	addition
)

func Calculate(one int, two int, operation Operation) float64 {
	if operation == subtract {
		return math.Abs(float64(one) - float64(two))
	} else if operation == addition {
		return float64(one) + float64(two)
	}
	return 0.0
}