#include <iostream>
#include <vector>
#include <stdlib.h> // atoi
class Solution {
public:
    static std::vector<int> selfDividingNumbers(int left, int right)
    {
        std::vector<int> result;
        for(int i = left; i <= right; i++) {
            int j = i;
            bool is_div = true;
            do {
                int div = j % 10;
                if(div == 0 || i%div!=0)
                {
                    is_div = false;
                    break;    
                }
                j = j / 10;

            } while (j > 0);
            
            if(is_div) {
                result.push_back(i);
            }
        }    
        return result;
    }
};

int main(int argc, char** argv) {
    if(argc < 3)
    {
        std::cout << "Please input a number" << std::endl;
        return -1;
    }
    std::string left_num = argv[1];
    std::string right_num = argv[2];    
    std::vector<int> result = Solution::selfDividingNumbers(atoi(left_num.c_str()),atoi(right_num.c_str()));
    std::vector<int>::iterator iter;
    for(iter = result.begin(); iter!=result.end();iter++) {
        std::cout << " [ "<<(*iter) << " ] ";
    }
    std::cout << std::endl; 
    return 0;
}
