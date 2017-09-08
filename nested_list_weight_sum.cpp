
#include <list>
#include <algorithm>
#include <iostream>

/*
.
.
.
Solution 
class Solution {
private:
    int DFS(std::vector<NestedIntegers>& nested_integers_list, int depth) {
        int _size = (int)nested_integers_list.size();
        int _sol = 0;
        for (int i = 0; i < _size; ++i)
            _sol+=(nested_integers_list[i].isInteger())?
                    nested_integers_list[i]:
                    DFS(nested_integers_list[i],depth+1);

    
    };

public:
    int depthSum(std::vector<NestedIntegers>& v) {
        return DFS(v,1);
    }


};
*/



