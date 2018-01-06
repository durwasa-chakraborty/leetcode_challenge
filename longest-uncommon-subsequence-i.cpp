#include <iostream>
#include <stack>

class Solution {
public:
  int findLUSlength(std::string a, std::string b) {
    return (a==b)?-1:std::max(a.length(),b.length());
  }
};



int main(int argc, char*argv[])
{
  Solution sol = Solution();
  std::cout<<sol.findLUSlength("aefawfawfawfaw","aefawfeawfwafwaef");
}
