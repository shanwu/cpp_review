#include <algorithm> // that's the library which make you able to apply reverse() function
#include <iostream>

class Solution 
{
public:
    static std::string reverseString(std::string s)
    {
        std::reverse(s.begin(), s.end());
        return s;
    }
};

int main(int argc, char** argv) {
    if(argc != 2)
    {
        std::cout << "Please enter string value" << std::endl;
        return -1;
    }
    
    std::cout<< "origin: "<< argv[1] <<" --> "<<Solution::reverseString(argv[1])<< std::endl;
    return 0;
}
