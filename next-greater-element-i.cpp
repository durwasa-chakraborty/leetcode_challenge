#include <iostream>
#include <vector>
#include <algorithm>

#define pb push_back

using namespace std;

class Solution {
public:
  vector<int> nextGreaterElement(vector<int> &findNums, vector<int> &nums)
  {
    vector<int> ans;

    int limit = nums.size();

    for(int i = 0 ; i < findNums.size() ; i+=1) {
      for(int j = 0 ; j < nums.size() ; j+=1) {
	if(findNums[i] == nums[j]) {
	  int __temp__ = nums[j];
	  bool flag = false;
	  for(int k = j ; k < limit ; k+=1) {
	    if(nums[k]>__temp__){
	      __temp__ = nums[k];
	      break;
	    }
	  }
	  (__temp__ == nums[j])? ans.pb(-1):ans.pb(__temp__);
	}
      }
    }
    return ans;
  }

};

int main(int argc, char**argv)
{
  vector<int> findNums= {1,3,5,2,4};
  vector<int> nums = {6,5,4,3,2,1,7};
  Solution sol = Solution();
  vector <int> ans = sol.nextGreaterElement(findNums,nums);
  for(int x : ans)
    std::cout<<x<<std::endl;
 

}
