#include <iostream>
#include <string>
#include <vector>

std::string longestCommonPrefix(std::vector<std::string> strs) {
        std::string result = "";
        
        if( strs.size() == 1 ) return strs[0];

        int current_word_index = strs.size();
        int current_char_index = 0;
        
        while( current_word_index > 0 && current_char_index < strs[0].size() ){

            if (strs[current_word_index-1] == "") break;

            if ( current_word_index == 1 ){
                result+= strs[current_word_index][current_char_index];
                current_char_index++;
                current_word_index = strs.size();
            }

            if ( current_word_index != 1 && strs[current_word_index-1][current_char_index] != strs[current_word_index - 2][current_char_index] ){
                break;
            }

            current_word_index--;

        }

        return result;
}

int main() {

    std::vector<std::string> test {"flower","flow","flight"};
    std::vector<std::string> test2 {""};
    std::vector<std::string> test3 {"flower","flower","flower","flower"};
    // longestCommonPrefix(test);
    std::string result = longestCommonPrefix(test3);

    return 0;
}

