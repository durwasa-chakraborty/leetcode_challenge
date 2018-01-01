#include <iostream>
#include <vector>

#define pb push_back

using namespace std;
class Solution {
public:
  vector<vector<int> >matrixReshape(std::vector<std::vector<int>>& nums,
					      int r,
					      int c) {
    std::vector<int> linearVector;
    int count=0;

    for(std::vector<vector<int>>::iterator itr = nums.begin();
	itr!=nums.end();
	itr++) {
      for(std::vector<int>::iterator itr_internal = (*itr).begin();
	  itr_internal!=(*itr).end();
	  itr_internal++) {
	linearVector.pb(*itr_internal);
	count++;
      }
    }

    std::vector<vector<int>> accumulator;
    std::vector<int> primaryAccumulator;
    if(r*c == count) {
      for(int i = 0 ; i < r ; i++) {
	for(int j = 0 ; j < c; j++) {
	  primaryAccumulator.pb(linearVector[(i*r)+(j)]);
	}
	accumulator.pb(primaryAccumulator);
	primaryAccumulator.clear();
      }
      return accumulator;
      
    } else {
      return nums;
    }
  }
};

int main(int argc, char **argv)
{
  vector<int> a;
  a.push_back(1);
  a.push_back(2);
  vector<vector<int> > nums;
  vector<int> b;
  b.push_back(3);
  b.push_back(4);
  nums.push_back(a);
  nums.push_back(b);
  Solution sol = Solution();
  vector<vector<int>> ans = sol.matrixReshape(nums,4,1);
  for(vector<int> r : ans){
    for(int c : r)
      std::cout<<c<<" ";
    std::cout<<endl;
  }
  return 0;
}
