import unittest

def calculate_discount(price, discount_percentage):
    if price < 0:
        raise ValueError("Price can't be negative")
    if discount_percentage < 0 or discount_percentage > 100:
        raise ValueError("Discount percentage must be between 0-100")
    
    return price * (1 - discount_percentage / 100)

class TestCalculateDiscount(unittest.TestCase):
    def test_calculate_discount(self):
        self.assertAlmostEqual(calculate_discount(100, 10), 90)
        self.assertAlmostEqual(calculate_discount(50, 20), 40)
        self.assertAlmostEqual(calculate_discount(0, 50), 0)
        self.assertAlmostEqual(calculate_discount(100, 0), 100)
        
        with self.assertRaises(ValueError):
            calculate_discount(100, -10)
        with self.assertRaises(ValueError):
            calculate_discount(100, 110)
        with self.assertRaises(ValueError):
            calculate_discount(-100, 10)

if __name__ == "__main__":
    unittest.main(argv=[''], exit=False)