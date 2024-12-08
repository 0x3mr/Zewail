#ifndef UTIL_
#define UTIL_

#include <vector>
#include <algorithm>
using namespace std;

template<typename T>
int findKey(vector<T> vec, T key)
{
    auto it = find(vec.begin(), vec.end(), key);
    // If element is found
    if (it != vec.end())
    {
        // calculating the index of the key
        int index = it - vec.begin();
        return index;
    }
    // If the element is not found
    return -1;
}

template<typename T>
bool removeKey(vector<T>& vec, T key)
{
    auto it = find(vec.begin(), vec.end(), key);
    if (it != vec.end())
    {
        vec.erase(it);
        return true;
    }
    return false;
}

template<typename T>
void removeRow(vector<vector<T>>& vec, int index)
{
    vec.erase(vec.begin() + index);
}

template<typename T>
void removeColumn(vector<vector<T>>& vec, int index)
{
    for (auto row = vec.begin(); row != vec.end(); row++)
    {
        row->erase(row->begin() + index);
    }
}

#endif // !UTIL_
