#include <iostream>
#include <vector>
#define pb push_back
#define is_less_than_or_equal_to <=
#define is_greater_than_or_equal_to >=
#define is_less_than <
#define is_greater_than >

class Solution {
public:
  bool hasAlternativeBits(int n) {
    if(n is_less_than_or_equal_to 2)
      return true;
    else {
      std::string bin = convertIntoBinary(n);
      bool flag = false;
      char _init;
      int count = 0 ;
      for(char &c : bin) {
	if (count == 0) {
	  _init = bin[0];
	  count+=1;
	  continue;
	}
	if (abs(c-_init)==1) {
	  flag = true;
	  _init = c;
	}
	else {
	  flag = false;
	  break;
	}
      }
      return flag;
    }
  }

  std::string convertIntoBinary(int n) {
    std::string str;
    while(n) {
      str+=(n%2 == 1)?"1":"0";
      n/=2;
    }
    return str;
  }
  
};

int main(int argc, char**argv)
{
  Solution sol = Solution();
  std::cout<<sol.hasAlternativeBits(5);
  std::cout<<sol.hasAlternativeBits(10); 
  std::cout<<sol.hasAlternativeBits(9);
  std::cout<<sol.hasAlternativeBits(8);
  std::cout<<sol.hasAlternativeBits(1);
  std::cout<<sol.hasAlternativeBits(2);

}
