#include <iostream>
#include <vector>
#include <string>

bool isValid(std::string s) {
    std::vector<char> aux_stack = {}; 

    for(int i = 0; i < s.size(); i++ ){
        char current = s[i];
        if(current == '(' || current == '{' || current == '['){
            aux_stack.push_back(current);
        }
        else if( current == ')' && aux_stack.back() != '(' ) return false;
        else if( current == ']' && aux_stack.back() != '[' ) return false;
        else if( current == '}' && aux_stack.back() != '{' ) return false;
        else{
            aux_stack.pop_back();
        }
    }
    
    if(aux_stack.size() > 0) return false;

    return true;
}

int main() {
    isValid("]");
    return 0;

}