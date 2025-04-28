#include <iostream>
#include <queue>

int main() {
    int n, x, o, t = 0;
    std::cin >> n >> x;
    std::priority_queue<int> maxHeap;
    std::vector<int> amr(n);
    for (int i = 0; i < n; i++) std::cin >> amr[i];
    for (int i = 0; i < n; i++)
    {
        std::cin >> o;
        for (int j = 0; j < amr[i]; j++) maxHeap.push(o);
    }
    while (x)
    {
        t += maxHeap.top();
        maxHeap.pop();
        x--;
    }
    std::cout << t << std::endl;
    return 0;
}