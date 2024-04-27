#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    vector<int> nums = {2,3,3,2,2,4,2,3,4};
    int numberOfOpperations = 0;

     // Checks for non-repeating numbers
        for (int i = 0; i < nums.size(); i++) {
            int currentNumber = nums[i];
            int occurencies = count(nums.begin(), nums.end(), currentNumber);
            if (occurencies == 1)
                return -1;
        }

    for (int i = 0; nums.size() > 0; i++) {

        int currentNumber = nums[i];
        int occurencies = count(nums.begin(), nums.end(), currentNumber);

        if (occurencies % 2 == 0) {
            nums.erase(nums.begin() + i);
            nums.erase(std::find(nums.begin(), nums.end(), currentNumber));
            numberOfOpperations++;
        } else {
            nums.erase(nums.begin() + i);
            nums.erase(std::find(nums.begin(), nums.end(), currentNumber));
            nums.erase(std::find(nums.begin(), nums.end(), currentNumber));
            numberOfOpperations++;
        }
    }

    cout << numberOfOpperations;

}