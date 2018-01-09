#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
  int singleNumber(std::vector<int>& nums) {
    unordered_map<int,bool> map;
    int ans;
    for(vector<int>::iterator itr = nums.begin();
	itr!=nums.end();
	itr+=1) {
      if(map[(*itr)]){
	map[(*itr)] = false;
	continue;
      }
      map[(*itr)] = true;
    }

    for(unordered_map<int,bool>::iterator itr = map.begin();
	itr!=map.end();
	itr++) {
      if(itr->second) {
	ans = itr->first;
	break;
      }

    }

    return ans;
  }
};

  int main(int argc, char**argv)
  {
    vector<int> nums = {1,1,5,5,90,3,90};
    Solution sol = Solution();
    std::cout<<sol.singleNumber(nums);

  }
