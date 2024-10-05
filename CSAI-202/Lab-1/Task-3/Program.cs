using System;

class Program
{
    static void Main()
    {
        int element, i, k = 0, j = 0, N = validateInput("Number of elements in array X: ");

        if (N == 0) { return; }
        
        int[] arrayX = new int[N];
        int[] arrayY = new int[N];

        for (i = 0; i < N; i++) {
            element = validateInput($"Enter the element {i+1}: ");
            arrayX[i] = element;
        }

        for (i = 0; i < N; i++) {
            if (j >= N) { break; }
            arrayY[i] = arrayX[j];
            j += 3;
            k++;
        }

        for (i = 0; i < N; i++) {
            if (!Array.Exists(arrayY, element => element == arrayX[i])) {
                arrayY[k] = arrayX[i];
                if (k < N) { k++; }
            }
        }

        Console.WriteLine("Array X elements:");
        for (i = 0; i < N; i++)
        {
            Console.Write(arrayX[i] + " ");
        }
        Console.WriteLine();

        Console.WriteLine("Array Y elements:");
        for (i = 0; i < N; i++)
        {
            Console.Write(arrayY[i] + " ");
        }
        Console.WriteLine();
    }

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
