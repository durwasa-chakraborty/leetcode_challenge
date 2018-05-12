#include <vector>
#include <queue>
#include <string>
#include <iostream>
#include <sstream>
#include <iterator>

class Solution {
public:
  bool rotateString(std::string a, std::string b) {
    int _len = a.length();
    bool flag = false;
    for (int i = 0 ; i < b.length(); i++) {
      std::string temp = a.substr(i, _len) + a.substr(0, i);
      if(temp.compare(b)==0) {
        flag = true;
        break;
      }
    }
    return flag;
  }
};

int main (int argc, char **argv)
{
  Solution sol = Solution();
  std::cout<<sol.rotateString("", "")<<std::endl;
}

