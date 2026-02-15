#include <iostream>
using namespace std;

/*
  Problem: Count the number of unique paths in an n x m grid from the top-left corner to the bottom-right corner, 
  where you can only move right or down.

  Example:
  - For a 2x2 grid, there are 2 possible paths:
    1. Right -> Down
    2. Down -> Right
  - For a 2x3 grid, there are 3 possible paths:
    1. Right -> Right -> Down
    2. Right -> Down -> Right
    3. Down -> Right -> Right

  Approach:
  - Base Case: If the grid is 1x1, or has only 1 row or 1 column, there's only 1 path.
  - Recursive Case: The total paths = paths from moving right + paths from moving down.
*/

int gridPaths(int n, int m)
{
    if (n == 1 || m == 1) return 1; // Base case: only one row or one column
    else
    {
        return gridPaths(n, m - 1) + gridPaths(n - 1, m); // Recursive case: sum of right and down moves
    }
}

int main()
{
    // Example 1: 2x2 grid (Expected: 2 paths)
    cout << "2x2 grid: " << gridPaths(2, 2) << " paths" << endl;

    // Example 2: 2x3 grid (Expected: 3 paths)
    cout << "2x3 grid: " << gridPaths(2, 3) << " paths" << endl;

    // Example 3: 3x3 grid (Expected: 6 paths)
    cout << "3x3 grid: " << gridPaths(3, 3) << " paths" << endl;

    return 0;
}
