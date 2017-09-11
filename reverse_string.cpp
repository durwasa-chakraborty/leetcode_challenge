#include <algorithm>
#include <string>
#include <iostream>


class Solution {
public:
    string reverseString(string s) {
        std::reverse(std::begin(s),std::end(s));
        return s;
    }
};

/*
.
.
.
Driver Program
int main(int argc, char const *argv[])
{
    std::string s = "durwasa chakraborty";
    std::reverse(std::begin(s),std::end(s));
    std::cout<<s<<std::endl;
    return 0;
}
.
.
.
*/