#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> bank = {"011001","000000","010100","001000"};
    std::vector<std::string> valid_rows = {};
    std::vector<int> devices_count = {};
    int result;

    for (int i = 0; i < bank.size(); i++)
    {
        if(bank[i].find('1') != -1){
            valid_rows.push_back(bank[i]);
        }
    }

    for (int j = 0; j < valid_rows.size(); j++)
    {
        int numberOfDevicesOnRow = 0;
        for (int k = 0; k < valid_rows[j].size(); k++)
        {
            if( valid_rows[j][k] == '1') numberOfDevicesOnRow++;
        }
        devices_count.push_back(numberOfDevicesOnRow);
    }
    
    for (int l = 0; l < devices_count.size(); l++)
    {
        if(l+1 < devices_count.size() ) result += devices_count[l] * devices_count[l+1];
    }

    return 0;
}