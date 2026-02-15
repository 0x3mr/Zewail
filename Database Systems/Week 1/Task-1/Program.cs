using System;

class CalorieCalculator
{
    static void Main()
    {
        const int APPLE_CALORIES = 75;
        const int MEAT_CALORIES = 45;
        const int EGG_CALORIES = 128;
        
        int usersExceedingNeeds = 0;
        int totalCaloriesAllUsers = 0;

        for (int i = 1; i <= 3; i++)
        {
            Console.WriteLine($"\nUser {i}:");

            double weight = validateInput("➥ Enter your weight in kg: ");

            double dailyCalorieNeeds = 0.9 * weight * 24;

            int apples = validateInput("➥ Enter the number of apples eaten: ");
            int meatPortions = validateInput("➥ Enter the number of meat portions eaten: ");
            int eggs = validateInput("➥ Enter the number of eggs eaten: ");

            int totalCalories = (apples * APPLE_CALORIES) + (meatPortions * MEAT_CALORIES) + (eggs * EGG_CALORIES);

            if (totalCalories > dailyCalorieNeeds) { usersExceedingNeeds++; }

            totalCaloriesAllUsers += totalCalories;

            Console.WriteLine($"➠ Daily calorie needs: {dailyCalorieNeeds:F2}");
            Console.WriteLine($"➠ Total calories consumed: {totalCalories}");
        }

        Console.WriteLine($"\nSummary:\n- Number of users exceeding daily calorie needs: {usersExceedingNeeds}");
        Console.WriteLine($"- Total calories consumed by all users: {totalCaloriesAllUsers}\n");
    }

    // This function was made to ensure the given input is an integer AND a positive number
    static int validateInput(string prompt)
    {
        int result;
        while (true)
        {
            Console.Write(prompt);
            if (int.TryParse(Console.ReadLine(), out result))
            {
                if (result >= 0) { return result; }
                Console.WriteLine("Please enter a positive number!");
            }
            else
            {
                Console.WriteLine("Invalid input. Please enter a valid integer.");
            }
        }
    }
}
