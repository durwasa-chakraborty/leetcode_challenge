#include<iostream>
#include<vector>
#define pb push_back

class Solution {
public:
  int calPoints(vector<std::string>& ops){
    int ans;

    return ans;
  }
};
/*
  ["5","-2","4","C","D","9","+","+"]
 */
int main(int argc, char **argv)
{
  vector<std::string> ops;
  ops.pb("5");
  ops.pb("-2");
  ops.pb("4");
  ops.pb("C");
  ops.pb("D");
  ops.pb("9");
  ops.pb("+");
  ops.pb("+");
  Solution sol = Solution();
  std::cout<<sol.calPoints(ops)<<std::endl;
  return 0;
}
