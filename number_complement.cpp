#include <iostream>

class Solution {
public:
    int findComplement(int num) {
        int _xor = 2;
        int _original_num = num;
        while(num>>=1) 
            _xor<<=1;

        return _original_num^(_xor-1);
    }
};



/*
.
.
.

The Driver Program

int main(int argc, char const *argv[])
{
    Solution obj = Solution();
    std::cout<<obj.findComplement(1)<<std::endl;
    return 0;
}
.
.
.
*/
