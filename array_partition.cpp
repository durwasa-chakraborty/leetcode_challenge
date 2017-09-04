#include <iostream>
#include <vector>
#include <algorithm>


class Solution {
public:
    int arrayPairSum(std::vector<int>& nums) {
        int _size = nums.size()/2;
        int _min = 999999;
        if(_size == 1)
            _min = std::min(nums[0],nums[1]);
        else
        {
            for (int i = 0; i < _size; ++i)
                _min = std::min(_min,(nums[i]+nums[i+_size]));
        }

        return _min;
    }
};
