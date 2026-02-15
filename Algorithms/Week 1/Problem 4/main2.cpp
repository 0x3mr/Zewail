#include <iostream>
#include <vector>

int main() {
    std::string test, s = "False";
    getline(std::cin, test);

    std::string temp = "";
    std::vector<int> amr;
    for (int i = 0; i < test.length(); i++)
    {
        if (test[i] >= 'a' && test[i] <= 'z') temp += test[i];
        else
        {
            if (temp.length() > 0) amr.push_back(std::stoi(temp));
            temp = "";
        }
    }

    int i = 0, j = amr.size() - 1;
    while (amr[i] == amr[j]) {
        i += 3;
        j -= 3;

        std::cout << amr[i] << " " << amr[j] << std::endl;
        if (amr.size() % 2 == 0)
        {
            std::cout << "even:" << std::endl;
            int half = amr.size() / 2;
            if (i + 1 >= half && j <= half)
            {
                s = "True";
                break;
            }
        }

        if (i == j)
        {
            s = "True";
            break;
        }
    }
    std::cout << s << std::endl;
    return 0;
}

// i do not remember but this is probably broken code, idk what i was doing