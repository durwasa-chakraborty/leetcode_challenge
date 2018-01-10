#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  int findMaxConsecutiveOnes(vector<int>& nums) {
    int max = 0;
    int count = 0;
    for (int n : nums) {
      if(n == 1) {
	count +=1;
	max = std::max(max,count);
      }
      else {
	count = 0;
      }
    }
    return max;
  }
};

int main(int argc, char **argv)
{

  vector<int> nums = {1,1,1,0,1,1,0};
  Solution sol = Solution();
  std::cout<<sol.findMaxConsecutiveOnes(nums);
}
