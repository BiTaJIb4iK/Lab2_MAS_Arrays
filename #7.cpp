#include <iostream>
#include <string.h>
#include <vector>
#include <random>
#include <unordered_set>

bool findFormulaMatch(std::vector<int>& arr) {
    //#1 nested loops
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i; j < arr.size(); j++) {
            if (arr[i] == arr[j] * 2)
                return true;
        }
    }
    return false;

    //#2 Hashmap 
    std::unordered_set<int> seen;

    for (const int& num : arr) {
        if (seen.find(num * 2) != seen.end() || (num % 2 == 0 && seen.find(num / 2) != seen.end())) {
            return true;
        }
        seen.insert(num);
    }
    return false;
}

int main()
{
    srand(time(0));
    std::vector<int> arr = { 10,2,5,3 };

    std::cout << findFormulaMatch(arr);

    for (int i = 0; i < /*deleteDublicates(arr)*/ arr.size(); i++)
        std::cout << arr[i] << ' ';

}
