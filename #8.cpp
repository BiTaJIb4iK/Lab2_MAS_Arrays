#include <iostream>
#include <string.h>
#include <vector>
#include <random>
#include <unordered_set>

bool check(std::vector<int>& arr) {
    if (arr.size() < 3)
        return false;

    int l = 0, r = arr.size() - 1;

    while (arr[l] < arr[l + 1] && l < arr.size() - 1)
        l++;
    while (arr[r - 1] < arr[r] && r > 1)
        r--;

    return r - l == 2;
}

int main()
{
    srand(time(0));
    std::vector<int> arr = { 0, 1, 4, 3, 4, 2, 1 };

    std::cout << check(arr);

    for (int i = 0; i < /*deleteDublicates(arr)*/ arr.size(); i++)
        std::cout << arr[i] << ' ';

}
