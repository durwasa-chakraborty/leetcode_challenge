
#include <iostream>
#include <vector>
#include <algorithm>


/*

    Input: [1,4,3,2]

    Output: 4
    Explanation: n is 2, and the maximum sum of pairs is 4 = min(1, 2) + min(3, 4).

*/

class Solution {
public:
    int arrayPairSum(std::vector<int>& nums) {        
        std::sort(nums.begin(), nums.end());
        int _max = 0;
        for (std::vector<int>::iterator i = nums.begin(); i != nums.end(); i+=2)
            _max += std::min(*i,*(i+1));

    return _max;
    }
};
/*
.
.
. Array Implementation 

        for (int i = 0; i < nums.size(); i+=2)
            _max += std::min(nums[i],nums[i+1]);
*/

/*
.
.
. Driver Program 


int main(int argc, char const *argv[])
{
    Solution obj = Solution();
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    std::cout<<obj.arrayPairSum(v)<<std::endl;
    return 0;
}
*/

