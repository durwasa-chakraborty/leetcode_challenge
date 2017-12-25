#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;	

class Solution {
public:
    int distributeCandies(std::vector<int> &candies) {
    unordered_set <int> kinds;

    for (std::vector<int>::iterator i = candies.begin(); i != candies.end(); ++i)
        kinds.insert(*i);
    return (candies.size()/2,kinds.size());  

    }
}

