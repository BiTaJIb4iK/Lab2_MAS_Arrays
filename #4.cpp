
#include <iostream>
#include <string.h>
#include <vector>
#include <random>

std::vector<int> doubleZeroes(std::vector<int>& arr) {
    std::vector<int> ret;

    for (int i = 0; i < arr.size(); i++) {
        ret.push_back(arr[i]);
        if (arr[i] == 0)
            ret.push_back(0);
    }

    return ret;
}

int main()
{
    srand(time(0));
    std::vector<int> arr = { -4, -1, 0, 3, 10 };

    auto a = doubleZeroes(arr);

    for (int i = 0; i < a.size(); i++)
        std::cout << a[i] << ' ';

}
