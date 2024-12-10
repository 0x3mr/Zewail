import unittest

def reverse_list(input_list):
    return input_list[::-1]

class TestReverseList(unittest.TestCase):
    def test_reverse_list(self):
        self.assertEqual(reverse_list([11, 2, 5, 4, 0]), [5, 4, 3, 2, 1])
        self.assertEqual(reverse_list([]), [])
        self.assertEqual(reverse_list([42]), [42])

if __name__ == "__main__":
    unittest.main(argv=[''], exit=False)