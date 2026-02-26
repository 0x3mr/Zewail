package main

import (
	"fmt"

	"amr.com/simplemodule/mathutils"
	"amr.com/simplemodule/stringutils"
)

func main() {
	x := 1
	y := 4

	fmt.Printf("We've got %d and %d\n", x, y)
	fmt.Printf("Addition: %f\n", mathutils.Calculate(x, y, 1))
	fmt.Printf("Subtraction: %f\n", mathutils.Calculate(x, y, 0))

	fmt.Printf("\n")
	fmt.Printf("\n")

	first := "awl"
	second := "tany"

	fmt.Println(stringutils.ConcatStrings(first, second))
	fmt.Println(stringutils.ConcatStrings(first, ""))
	fmt.Println(stringutils.ConcatStrings("", second))
	fmt.Println(stringutils.ConcatStrings("", ""))
}