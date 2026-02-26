package stringutils

func ConcatStrings(one string, two string) string {
	var value string

	if (len(one) == 0 && len(two) != 0) {
		value = two
	} else if (len(one) != 0 && len(two) == 0) {
		value = one
	} else if (len(one) != 0 && len(two) != 0) {
		value = one + two
	} else {
		value = "Both strings are empty!"
	}

	return value
}