#include <stack>
#include <iostream>
#include <string>

using namespace std;
class Solution {
public:
    string reverseWords(string input_string) {
        

        

        return ;
    }
    string reverse_word(string str) {
        std::stack<char> c;
        std::string _str;
        for (int i=0;i <str.size();++i)
            c.push(str[i]);
        while(!c.empty()) {
            _str+=c.top();
            c.pop();
        }
        return _str;
    }
};

int main(int argc, char const *argv[])
{
    Solution obj = Solution();
    std::cout<<obj.reverseWords("The Trick Question!")<<std::endl;
    return 0;
}