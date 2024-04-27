//Convert an Array Into a 2D Array With Conditions

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    vector<int> nums = {1,3,4,1,2,3,1};

    vector<vector<int>> result{ {nums[0]} }; 
        nums.erase(nums.begin());

        for( int i = 0 ; i < nums.size(); i++ ){
           for ( int j = 0; j < result.size(); j++ ){

                int currentNumber = nums[i];
                vector<int> currentArray = result[j];
                bool doesNotNumberAlreadyExistOnCurrentArray = count(result[j].begin(), result[j].end(), currentNumber) == 0;

                if( doesNotNumberAlreadyExistOnCurrentArray ){
                    result[j].push_back(currentNumber);
                    break;
                } else if( j == (result.size() - 1) ){
                    result.push_back({currentNumber});
                    break;
                }
               // verifica se algum dos arrays de result ja tem o valor de nums[i], se não, adiciona o numero nele, se sim, verifica se já passou por todos os arrays dentro de result, se sim cria um novo array com o elemento
           }
        }

        //print result
        for( vector vec: result ){
            cout << "[";
            for( int item: vec){
                cout << item << ',';
            }
            cout <<"]\n";
        }

}