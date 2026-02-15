#include <iostream>
#include <vector>

int aSquareMatrix(int y, int x, const std::vector<std::vector<int>> &matrix, int n, int m)
{
    bool broke = false;
    char scheme = matrix[y][x];
    int size = 0, maxY = y + 2, maxX = x + 2;

    if (maxX > m || maxY > n) return size;

    while (broke == false && maxX <= m && maxY <= n)
    {
        // std::cout << maxY << " " << maxX << std::endl;
        // std::cout << "-----------------------------------------" << std::endl;
        for (int i = y; i < maxY; i++)
        {
            // std::cout << "first:" << std::endl;
            for (int j = x; j < maxX; j++)
            {
                // std::cout << "y-" << i << " x-" << j << std::endl;
                if (matrix[i][j] != scheme)
                {
                    // std::cout << "cancelled: y-" << i << " x-" << j << std::endl;
                    broke = true;
                }
                if (broke) break;
            }
            // std::cout << std::endl;
        }
        // std::cout << ((broke == true) ? "" : "==========================") << std::endl;

        if (broke == false)
        {
            size = maxY - y;

            maxY++;
            maxX++;
        }

        if (size == n || size == m) break;
    }

    return size;
}

int main() {
    int n, m, mSize = -1, yIndex, xIndex;
    std::cin >> n >> m;

    // int matrix[n][m];
    std::vector<std::vector<int>> matrix(n, std::vector<int>(m));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            std::cin >> matrix[i][j];

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < m - 1; j++)
        {
            // std::cout << "[BEFORE]\nY: " << i << " X: " << j << " | size: " << std::endl;
            int size = aSquareMatrix(i, j, matrix, n, m);

            if (size >= 2)
            {
                if (size > mSize)
                {
                    mSize = size;
                    yIndex = i;
                    xIndex = j;
                }
                // std::cout << "\n\n[AFTER]\nY: " << i << " X: " << j << " | size: " << size << std::endl;
                // std::cout << "Y: " << i << " X: " << j << " | size: " << size << std::endl;
            }
        }
    }

    if (mSize == -1) std::cout << -1 << std::endl;
    else std::cout << (yIndex + 1) << " " << (xIndex + 1) << " " << mSize << std::endl;

    return 0;
}