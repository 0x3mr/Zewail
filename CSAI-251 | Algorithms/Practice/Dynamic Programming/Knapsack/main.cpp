#include <iostream>
#include <vector>
using namespace std;

int maxValue(int a, int b) { return ((a < b) ? b : a); }

int main() {
    vector<int> profit = {0, 1, 2, 5, 6};
    vector<int> weight = {0, 2, 3, 4, 5};

    int max = 8, num = 4;

    vector<vector<int>> k(num + 1, vector<int>(max + 1));

    for (int i = 0; i <= num; i++)
    {
        for (int w = 0; w <= max; w++)
        {
            if (i == 0 || w == 0)
            {
                k[i][w] = 0;
            }
            else if (weight[i] <= w)
            {
                k[i][w] = maxValue(profit[i] + k[i - 1][w - weight[i]], k[i - 1][w]);
            }
            else
            {
                k[i][w] = k[i - 1][w];
            }
        }
    }
    
    // cout << k[num][max] << endl;

    int i = num, j = max;
    while (i > 0 && j > 0)
    {
        if (k[i][j] == k[i - 1][j])
        {
            cout << i << " = 0" << endl;
            i--;
        }
        else
        {
            cout << i << " = 1" << endl;
            i--;
            j = j - weight[i];
        }
    }

    return 0;
}