/* disappointed ! how could you miss the fact that you had to check the
   empty() parenthesis ...

 */

#include <stack>
#include <iostream>
#include <vector>
#include <algorithm>


class Solution {
public:
  bool isValid(std::string s) {
    bool flag = true;
    std::stack<char> paren;
    for(char &c : s) {
      switch(c) {
      case '(' : paren.push(c); break;
      case '{' : paren.push(c); break;
      case '[' : paren.push(c); break;
      case ')' :
	if(paren.empty() or paren.top()!='(')
	  return false;
	else paren.pop();
	break;
      case '}' : 
	if(paren.empty() or paren.top()!='{')
	  return false;
	else paren.pop();
	break;
      case ']' :
	if(paren.empty() or paren.top()!='[')
	  return false;
	else paren.pop();
	break;
	
      }

    }
    return paren.empty();
  }

};

int main(int argc, char *argv[])
{
  Solution sol = Solution();
  std::cout<<sol.isValid("({[]})")<<std::endl;
}
