#include <iostream>
#include <vector>

int main() {
    int n, max = -1;
    std::cin >> n;
    std::vector<int> arr(n), dep(n), array(25, 0);
    for (int i = 0; i < n; i++) std::cin >> arr[i];
    for (int i = 0; i < n; i++) std::cin >> dep[i];
    for (int i = 0; i < n; i++)
    {
        for (int selector = arr[i]; selector < dep[i]; selector++)
        {
            array[selector]++;
        }
    }
    for (int i = 0; i < 25; i++) if (array[i] > max) max = array[i];
    std::cout << max << std::endl;
    return 0;
}

// This code checks for 4 out 5 test cases only
