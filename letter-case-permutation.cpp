#include <vector>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

class Solution {
  void backtrack(std::string &s, int i, std::vector<std::string> &result) {
    if (i == s.size()) {
      result.push_back(s);
      return;
    }
    backtrack(s,i+1,result);

    if(isalpha(s[i])) {
      std::cout<<s<<" check"<<std::endl;
      s[i] ^= (1 << 5);
      backtrack(s,i+1,result);
    }
  }

public:
  std::vector<std::string> letterCasePermutation(std::string s) {
    std::vector<std::string> result;
    backtrack(s,0,result);
    return result;

  }
};

int main(int argc, char **argv) {
  Solution sol = Solution();
  std::vector<std::string> vec;
  vec = sol.letterCasePermutation("abc");

  // for(std::string s : vec)
  //   std::cout<<s<<std::endl;
}
