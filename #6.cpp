#include <iostream>
#include <string.h>
#include <vector>
#include <random>

int deleteDublicates(std::vector<int>& arr) {
    //Function is called multiple times while being in the loop 
    std::cout << "Calling funtion !\n";

    int current_value = arr[0];
    int current_index = 1;
    int skips = 0;

    for (int i = 1; i < arr.size(); i++) {
        if (current_value != arr[i]) {
            current_value = arr[i];
            if (current_index != i) {
                arr[current_index++] = arr[i];
            }
        }
        else {
            skips++;

        }
    }

    return skips;
}

int main()
{
    srand(time(0));
    std::vector<int> arr = { 0, 0, 1, 1, 1, 2, 2, 3, 3, 4 };

    int k = deleteDublicates(arr);
    for (int i = 0; i < /*deleteDublicates(arr)*/ k; i++)
        std::cout << arr[i] << ' ';

}
