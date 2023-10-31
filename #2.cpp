
#include <iostream>
#include <string.h>
#include <vector>
#include <random>

int numberLength(int x) {
    int count = 0;
    while (x) {
        count++;
        x /= 10;
    }
    return count;
}

int getEvenDigitCount(std::vector<int>& arr) {
    int count = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (numberLength(arr[i]) % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main()
{
    srand(time(0));
    std::vector<int> arr;

    for (int i = 0; i < 100000; i++)
        arr.push_back(rand() % 500 + 1);

    std::cout << getEvenDigitCount(arr);
}
