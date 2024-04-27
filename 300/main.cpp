#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> nums = {0,1,0,3,2,3};
    int result = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        int a = nums[i];
        int sum_param = 1;
        vector<int> new_sequence = { a };
        for (int j = i + sum_param; j < nums.size(); j++)
        {
            int b = nums[j];

            if( b > new_sequence.back() ) new_sequence.push_back(b);

            if(j == nums.size() - 1){
                j = i + sum_param;
                sum_param++;
                if( new_sequence.size() > result ) result = new_sequence.size();
                new_sequence = { a };
            }
        }
    }

    cout << result;
    
}