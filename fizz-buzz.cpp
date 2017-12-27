#include <stack>
#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
  std::vector<std::string>fizzBuzz(int n) {
    std::vector<std::string> ans;
    for(int i = 1; i <= n ; i++) {
      if((i%3 == 0) and (i%5 != 0))
	ans.push_back("Fizz");
      else if((i%3 != 0) and (i%5 == 0))
	ans.push_back("Buzz");
      else if((i%3 == 0) and (i%5 == 0))
	ans.push_back("FizzBuzz");
      else
	ans.push_back(std::to_string(i));

    }

    return ans;
    

  }

};

int main(int argc, char**argv)
{
  Solution sol = Solution();
  std::vector<std::string> ans_it = sol.fizzBuzz(15);

  for(std::vector<std::string>::iterator itr = ans_it.begin();
      itr!=ans_it.end();
      ++itr)
    std::cout<<*itr<<" "<<std::endl;

}
