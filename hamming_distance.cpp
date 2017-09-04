#include <iostream>
#include <vector>

class Solution {
public:
    int hammingDistance(int x, int y) { 

        int count=0;

        while((x || y) !=0) {
            int x_bit = x%2, y_bit = y%2;
            if(x_bit^y_bit)
                count+=1;
            x/=2,y/=2;
        }
        return count;
        
    }

};

int main(int argc, char const *argv[])
{
    Solution sol = Solution();
    int x = 4,y=10;
    std::cout<<sol.hammingDistance(x,y)<<std::endl;

    return 0;
}