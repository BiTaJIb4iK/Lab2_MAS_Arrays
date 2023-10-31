#include <iostream>
#include <string.h>
#include <vector>

int getMaxCombo(std::vector<bool>& arr) {
    int max = 0;
    int current = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i]) {
            current++;
            max = std::max(max, current);
        }
        else {
            current = 0;
        }
    }

    return max;
}

int main()
{
    std::vector<bool> arr = { 1,1,0,1,1,1,0,1,0,1 };
    std::cout << getMaxCombo(arr);
}
