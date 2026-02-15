#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> amr(n), l, r;
    for (int i = 0; i < n; i++) std::cin >> amr[i];
    for (int i = 1; i < n; i++) {
        if (amr[i] < amr[0] && amr[i] != amr[0]) l.push_back(amr[i]);
        else if (amr[i] > amr[0] && amr[i] != amr[0]) r.push_back(amr[i]);
    }
    for (int i = 0; i < l.size(); i++) std::cout << l[i] << ((i + 1 == l.size()) ? "" : " ");
    std::cout << ((l.size() > 0) ? " " : "") << amr[0] << ((r.size() > 0) ? " " : "");
    for (int i = 0; i < r.size(); i++) std::cout << r[i] << ((i + 1 == r.size()) ? "" : " ");
    std::cout << std::endl;
    return 0;
}
