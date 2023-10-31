#include <iostream>
#include <string.h>
#include <vector>
#include <random>

void sortAndPower2(std::vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        arr[i] = arr[i] * arr[i];
    }

    std::sort(arr.begin(), arr.end());
}

int main()
{
    srand(time(0));
    std::vector<int> arr = { -4, -1, 0, 3, 10 };

    sortAndPower2(arr);

    for (int i = 0; i < arr.size(); i++)
        std::cout << arr[i] << ' ';

}