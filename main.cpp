#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <functional>
#include <utility> 
#include "../../../../../APSTEC/c++/json-develop/single_include/nlohmann/json.hpp"
 

std::string pig_it(std::string str)
{
    std::string temp;
    std::string res;
   // char * i = &str[0]; 

    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] == '!' || str[i] == '?' || str[i] == ',' || str[i] == ':' || str[i] == ' ' || i == str.size() - 1)
        {
            res += str[i];
        }
        else
        {
            temp += str[i];
            continue;
        }

        for (int j = 1; j < temp.size(); ++j)
        {
            res += temp[j];
        }
        res += temp[0]; 
        res += "ay ";
        temp.clear();
        // if ()
        // {
            // if (i == str.size() - 1)
            // {
            //      temp += str[i];
            // }
           
            
            // continue;
        // }
        // temp += str[i];
    }
    // if (res.size() > 0)
    // {
    //     res.pop_back();
    // }
    return res;
//     std::string temp;
//     std::string res;
//    // char * i = &str[0]; 

//     for (int i = 0; i < str.size(); ++i)
//     {
//         if (str[i] == '!' || str[i] == '?' || str[i] == ',' || str[i] == ':')
//         {
//             res += str[i];
//             continue;
//         }
//         if (str[i] == ' ' || i == str.size() - 1)
//         {
//             if (i == str.size() - 1)
//             {
//                  temp += str[i];
//             }
           
//             for (int j = 1; j < temp.size(); ++j)
//             {
//                 res += temp[j];
//             }
//             res += temp[0];
//             res += "ay ";
//             temp.clear();
//             continue;
//         }
//         temp += str[i];
//     }
//     if (res.size() > 0)
//     {
//         res.pop_back();
//     }
//     return res;
}

int main()
{
    std:: string str = "Pig latin, is cool";
   
    std::cout << pig_it(str);
    
}
