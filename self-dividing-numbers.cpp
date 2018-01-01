#include <iostream>
#include <vector>

#define pb push_back

class Solution {
public:
  std::vector<int> selfDividingNumbers(int left, int right) {

    std::vector<int> ans;
    for(int i=left;i<=right;i++) {
      if(isSelfDividingNumber(i))
	 ans.pb(i);
    }
    return ans;
  }

  bool isSelfDividingNumber(int num) {
    bool flag = false;
    int _num = num;
    while(num) {
      if(num%10 == 0){
	flag = false;
	break;
      }
      else if(_num%(num%10)==0)
	flag=true;
      else{
	flag=false;
	break;
      }
      num/=10;
    }
    return flag;
  }
};

int main(int argc, char**argv)
{
  Solution sol = Solution();
  std::vector<int> ans = sol.selfDividingNumbers(1,198);
  for(int a : ans)
    std::cout<<a<<std::endl;
}

  
