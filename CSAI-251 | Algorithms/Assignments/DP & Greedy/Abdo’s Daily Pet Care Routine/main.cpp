#include <iostream>
#include <vector>
#include <algorithm>

void sortWithRespectToStart(std::vector<int> &start, std::vector<int> &end, int size)
{
    std::vector<std::pair<int, int>> pairs(size);

    for (int i = 0; i < size; i++) pairs[i] = {start[i], end[i]};

    std::sort(pairs.begin(), pairs.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) { return a.second < b.second; });

    for (int i = 0; i < size; i++)
    {
        start[i] = pairs[i].first;
        end[i] = pairs[i].second;
    }
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> start(n), end(n);
    for (int i = 0; i < n; i++) std::cin >> start[i];
    for (int i = 0; i < n; i++) std::cin >> end[i];

    // we now have to sort the 'end' array with respect to 'start'
    
    // this part was challenging to make more than solving the problem itself  >:(
    sortWithRespectToStart(start, end, n);

    int c = 0;
    int endI = -1;
    for (int i = 0; i < n; i++) {
        if (start[i] >= endI)
        {
            c++;
            endI = end[i];
        }
    }

    std::cout << c << std::endl;

    return 0;
}