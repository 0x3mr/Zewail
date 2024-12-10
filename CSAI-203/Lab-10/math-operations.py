import unittest

class MathOperations:
    @staticmethod
    def is_prime(n):
        if n <= 1:
            return False
        
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True
    
    @staticmethod
    def factorial(n):
        if n < 0:
            raise ValueError("Factorial is not defined for negative numbers")
        
        if n <= 1:
            return 1
        
        result = 1

        for i in range(2, n + 1):
            result *= i
        return result

class TestMathOperations(unittest.TestCase):
    def test_is_prime(self):
        self.assertTrue(MathOperations.is_prime(2))
        self.assertTrue(MathOperations.is_prime(3))
        self.assertTrue(MathOperations.is_prime(17))
        
        self.assertFalse(MathOperations.is_prime(4))
        self.assertFalse(MathOperations.is_prime(15))
        self.assertFalse(MathOperations.is_prime(100))
        
        self.assertFalse(MathOperations.is_prime(0))
        self.assertFalse(MathOperations.is_prime(1))
        self.assertFalse(MathOperations.is_prime(-5))
    
    def test_factorial(self):
        self.assertEqual(MathOperations.factorial(0), 1)
        self.assertEqual(MathOperations.factorial(1), 1)
        self.assertEqual(MathOperations.factorial(5), 120)
        self.assertEqual(MathOperations.factorial(6), 720)
        
        with self.assertRaises(ValueError):
            MathOperations.factorial(-1)
        with self.assertRaises(ValueError):
            MathOperations.factorial(-10)

if __name__ == "__main__":
    unittest.main(argv=[''], exit=False)