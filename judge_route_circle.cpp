#include <iostream>
#include <vector>

class Solution
{
public:
    bool judgeCircle(std::string moves) {
        int x_axis = 0,y_axis=0;
        for (const char &ch: moves) {
            if (ch=='L')
                x_axis+=1;
            else if(ch=='R')
                x_axis-=1;
            else if(ch=='U')
                y_axis+=1;
            else if(ch=='D')
                y_axis-=1;
        }
        return (x_axis==0 and y_axis==0)?true:false;
    }

};

int main(int argc, char const *argv[])
{
    Solution sol = Solution();
    std::vector<int> v;
    std::cout<<sol.judgeCircle("LL")<<std::endl;
    return 0;
}
