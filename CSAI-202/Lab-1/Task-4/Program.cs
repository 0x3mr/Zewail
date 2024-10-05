using System;

class Program
{
    static void Main()
    {
        Console.WriteLine("Armstrong Number Checker");
        Console.WriteLine("------------------------");

        int[] testNumbers = { 153, 370, 371, 407, 123, 1634 };

        foreach (int number in testNumbers)
        {
            Console.Write($"Is {number} an Armstrong number? ");
            bool isArmstrong = IsArmstrong(number);
            Console.WriteLine(isArmstrong ? "Yes" : "No");
        }

        while (true)
        {
            string input = ValidateInput("Enter a number to check (or 'q' to quit): ");
            if (input.ToLower() == "q") break;

            int number = int.Parse(input);
            bool isArmstrong = IsArmstrong(number);
            Console.WriteLine(isArmstrong ? "This number is Armstrong!" : "Nope.");
        }
    }

    static bool IsArmstrong(int number)
    {
        string num = number.ToString();
        int sum = 0;
        for (int i = 0; i < num.Length; i++)
        {
            int digit = num[i] - '0';
            sum += (int)Math.Pow(digit, num.Length);
        }
        return number == sum;
    }

    static string ValidateInput(string prompt)
    {
        string input;
        while (true)
        {
            Console.Write(prompt);
            input = Console.ReadLine();
            if (input.ToLower() == "q") return input;
            if (int.TryParse(input, out int result) && result >= 0)
                return input;
            else
                Console.WriteLine("Invalid input. Enter a positive integer.");
        }
    }
}
