#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <vector>
#include <cctype>
using namespace std;

class Solution {
public:
    vector<string> findWords(std::vector<std::string>& words) {
        int _count = 0;
        bool _rows_check = true;
        std::vector<std::string> _rows;
        std::vector<std::string> _sol;
/*
.
.
To Upper Conversion

        for(auto &i: words)
            std::transform(i.begin(), i.end(),i.begin(),::toupper);
.
.
.
*/
        _rows.push_back("qwertyuiopQWERTYUIOP");
        _rows.push_back("asdfghjklASDFGHJKL");
        _rows.push_back("zxcvbnmZXCVBNMS");

        for (std::vector<std::string>::iterator i = words.begin(); i != words.end(); ++i)
        {
            for (std::vector<std::string>::iterator j = _rows.begin(); j != _rows.end(); ++j)
            {
                _count=0;
                for(char _word_ch : *i)
                    for (char _rows_char : *j)
                        if(_word_ch == _rows_char)
                            _count+=1;

                if(_count==i->size())
                    _sol.push_back(*i);
            }
        }

        return _sol;
    }

};

/*
.
.
.
Driver Program
int main(int argc, char const *argv[])
{
    Solution obj = Solution();
    std::vector<std::string> words;
    words.push_back("Tomato");
    words.push_back("Alaska");
    words.push_back("Typewriter");
    std::vector<string> _sol;
    _sol = obj.findWords(words);
    for (std::vector<string>::iterator i = _sol.begin(); i != _sol.end(); ++i)
        std::cout << *i <<std::endl;
    

    for (std::vector<string>::iterator i = words.begin(); i != words.end(); ++i)
        for(string::iterator it = i->begin();it< i->end();++it)
            cout<<*it<<" ";

    

    return 0;
}
.
.
.
*/
