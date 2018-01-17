#include <vector>
#include <map>

class Solution {
public:
    std::vector<int> anagramMappings(std::vector<int>& A, std::vector<int>& B) {
        // create result vector
        std::vector<int> result;
        // declare an ordered map which will serve as the value - index mapping of vector B 
        std::map<int,int> buffer_map;
        std::vector<int>::const_iterator iterator;
        int i=0;
        // go through vector B w/ const_iterator
        for(iterator =B.begin(); iterator !=B.end(); iterator++) {
            buffer_map[(*iterator)] = i;
            i++;
        }
        
        // go through vector A to get the result
        for(iterator = A.begin(); iterator != A.end(); iterator++) {
            result.push_back(buffer_map[(*iterator)]);
        }
        return result;
    }
};

int main() {
    // add more tests
    return 0;
}
