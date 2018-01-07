#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  bool canWinNim(int n) {
    return ((n%4==0))?false:true;

  }
};

int main(int argc, char **argv)
{
  Solution sol = Solution();
  std::cout<<sol.canWinNim(4);
}
