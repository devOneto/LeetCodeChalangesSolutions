#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> nums = {0,1,0,3,2,3};

    std::vector<int> dp(nums.size(), 1);

    for (int i = 1; i < nums.size(); ++i) {
        for (int j = 0; j < i; ++j) {
            if (nums[i] > nums[j]) {
                dp[i] = std::max(dp[i], dp[j] + 1);
            }
        }
    }

    return std::max_element(dp.begin(), dp.end());

}