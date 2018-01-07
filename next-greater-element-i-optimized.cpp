#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
public:
  vector<int> nextGreaterElement(vector<int> &findNums, vector<int> nums)
  {
    vector<int> ans;
    stack<int> s;
    unordered_map<int,int> map;

    for(vector<int>::iterator itr = nums.begin();
	itr!= nums.end();
	itr++) {
      while(s.size() and s.top()<(*itr)) {
	map[s.top()] = (*itr);
	s.pop();
      }
      s.push(*itr);
    }

    for(vector<int>::iterator itr = findNums.begin();
	itr!=findNums.end();
	itr++) {
      if(map.count(*itr))
	ans.push_back(map[*itr]);
      else
	ans.push_back(-1);
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

