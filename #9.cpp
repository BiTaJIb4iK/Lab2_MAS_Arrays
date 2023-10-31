#include <iostream>
#include <string.h>
#include <vector>
#include <random>
#include <unordered_set>

void maxHeight(std::vector<int>& arr) {
    int max = arr.back();

    for (int i = arr.size() - 2; i >= 0; i--) {
        int temp = arr[i];
        arr[i] = max;

        max = std::max(max, temp);
    }

    arr.back() = -1;
}

int main()
{
    srand(time(0));
    std::vector<int> arr = { 17, 18, 5, 4, 6, 1 };

    maxHeight(arr);

    for (int i = 0; i < /*deleteDublicates(arr)*/ arr.size(); i++)
        std::cout << arr[i] << ' ';

}