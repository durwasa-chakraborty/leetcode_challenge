#include <stack>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    string reverseWords(string input_string) {
        int front = 0;
        for (int i = 0; i <= input_string.length(); ++i)
        {
            if(i==input_string.length() or input_string[i]==' ') {
                reverse(&input_string[front],&input_string[i]);
                front=i+1;
            }
        }




/*
.
.
.
Very Poor Implementation 

        string str="";
        int _count=0;
        string output_string="";
        int count = input_string.size();
        for (int i = 0; i <= count; ++i)
        {
            if(input_string[i]!=' ')
                str+=input_string[i];
            
            if(i==count or input_string[i]==' ') {
                output_string=output_string+reverse_word(str)+" ";
                str="";
            }
        }

        output_string[count+1] = '\0';
    
        return output_string;
    }
    string reverse_word(string str) {
        std::stack<char> c;
        std::string _str="";
        for (int i=0;i <str.size();++i)
            c.push(str[i]);
        while(!c.empty()) {
            _str+=c.top();
            c.pop();
        }
        return _str;
    }

.
.
.
*/
        return input_string;
    }
};

int main(int argc, char const *argv[])
{
    Solution obj = Solution();
    std::cout<<obj.reverseWords("The Trick maze contest!")<<std::endl;
    return 0;
}