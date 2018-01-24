#include <iostream>
#include <algorithm> // std::sort
#include <vector> // std::vector

// Basically, sort the vector first and always select the number w/ odd index
class Solution {
public:
    static int arrayPairSum(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        std::vector<int>::iterator itr;

        int result = 0;
        int i = 0;
        for(itr=nums.begin();itr!=nums.end();itr++) {
            if(i%2 == 0) {
                result += (*itr);
            }
            
            i++;
        }
        return result;             
    }
};

int main() {
    std::vector<int> test_vector;
    test_vector.push_back(1);
    test_vector.push_back(2);
    test_vector.push_back(3);
    test_vector.push_back(4);
    std::cout<< "partition sum: " << Solution::arrayPairSum(test_vector) << std::endl;
    return 0;
}
