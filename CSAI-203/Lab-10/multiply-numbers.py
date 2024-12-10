import unittest

def multiply_numbers(a, b):
    return a * b

class TestMultiplyNumbers(unittest.TestCase):
    def test_multiply_numbers(self):
        self.assertEqual(multiply_numbers(3, 4), 12)
        self.assertEqual(multiply_numbers(5, 0), 0)
        self.assertEqual(multiply_numbers(0, 5), 0)
        self.assertEqual(multiply_numbers(-3, 4), -12)
        self.assertEqual(multiply_numbers(-3, -4), 12)

if __name__ == "__main__":
    unittest.main(argv=[''], exit=False)