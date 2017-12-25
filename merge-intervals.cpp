#include <stdlib.h>
#include <vector>
#include <iostream>

struct Interval {
  int start;
  int end;
  Interval() : start(0),end(0){};
  Interval(int s,int e) : start(s), end(e){};

};

class Solution {

public :
  std::vector<Interval> merge(std::vector<Interval>& intervals) {
    std::vector<Interval> answer ;
    std::sort(intervals.begin(),intervals.end(),[](Interval a, Interval b)
	      {return a.start < b.start;});
    
    for (Interval interval : intervals) {
      if((answer.empty()) or answer.back().end < interval.start)
	answer.push_back(interval);
      else
	answer.back().end = std::max(answer.back().end,interval.end);
    }
  
    return answer;
  }
};


int main(int argc,char**argv)
{
  std::vector<Interval> intervals;
  intervals.push_back(Interval());
  intervals.push_back(Interval(1,3));
  intervals.push_back(Interval(2,6));
  intervals.push_back(Interval(8,10));
  intervals.push_back(Interval(15,18));


  Solution  sol = Solution();
  std::vector<Interval> answer = sol.merge(intervals);

  for(Interval ans : answer)
    std::cout<<ans.start<<" "<<ans.end<<"\n";
  
}
  
