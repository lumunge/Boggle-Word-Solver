#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
#include<fstream>

using std::string;

class Utilities{
    public:
        string rTrim(string str){
            size_t end = str.find_last_not_of(" \n\r\t\f\v");
            return (end == string::npos) ? "" : str.substr(0, end + 1);
        }

        string toUpper(string str){
            std::transform(str.begin(), str.end(), str.begin(), ::toupper);
            return str;
        }
                    
};