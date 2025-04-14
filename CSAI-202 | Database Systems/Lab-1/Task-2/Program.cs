using System;

class Program
{
    static void Main()
    {
        int N = validateInput("Enter the number of laboratories: ");

        int labsWithMoreBrownRats = 0;
        int labWithFewestMaleRats = 0;
        int minMaleRats = 0;

        for (int i = 1; i <= N; i++)
        {
            Console.WriteLine($"\nLaboratory {i}:");

            int whiteRats = validateInput("Enter the number of white rats: ");
            int brownRats = validateInput("Enter the number of brown rats: ");

            int totalRats = whiteRats + brownRats;
            int maleRats = 0;

            for (int j = 1; j <= totalRats; j++)
            {
                int age = validateInput($"Enter the age of rat {j}: ");
                char gender = validateGender($"Enter the gender of rat {j} (M/F): ");

                if (gender == 'M') { maleRats++; }
            }

            if (brownRats > whiteRats) { labsWithMoreBrownRats++; }

            if (maleRats < minMaleRats)
            {
                minMaleRats = maleRats;
                labWithFewestMaleRats = i;
            }
        }

        if (N > 0)
        {
            Console.WriteLine($"\nSummary\n- Number of laboratories with more brown rats than white rats: {labsWithMoreBrownRats}");
            Console.WriteLine($"- Laboratory {labWithFewestMaleRats} has the fewest male rats with {minMaleRats} male rats.\n");
        }
        else
        {
            Console.WriteLine("You do not have any labs!");
        }
    }

    static int validateInput(string prompt)
    {
        int result;
        while (true)
        {
            Console.Write(prompt);
            if (int.TryParse(Console.ReadLine(), out result))
            {
                if (result >= 0)
                {
                    return result;
                }
                Console.WriteLine("Please enter a non-negative number!");
            }
            else
            {
                Console.WriteLine("Invalid input. Please enter a valid integer.");
            }
        }
    }

    static char validateGender(string prompt)
    {
        char result;
        while (true)
        {
            Console.Write(prompt);
            if (char.TryParse(Console.ReadLine().ToUpper(), out result))
            {
                if (result == 'M' || result == 'F')
                {
                    return result;
                }
            }
            Console.WriteLine("Invalid input. Please enter 'M' for male or 'F' for female.");
        }
    }
}
