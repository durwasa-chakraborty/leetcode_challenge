#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
  int maxAreaOfIsland(vector<vector<int>>& grid) {
    int column = 0;
    int row = 0;
    int neighbours = 0;
    int count = 0;


    for(vector<vector<int>>::iterator itr = grid.begin();
	itr!=grid.end();
	itr++) {
      for(vector<int>::iterator itr_row = itr->begin();
	  (itr_row)!=itr->end();
	  (itr_row)++) {
	if((*itr_row)==1) {
	  count+=1;
	  if(row!=0 and grid[row-1][column]==1)
	    neighbours+=1;
	  if(column!=0 and grid[row][column-1]==1)
	    neighbours+=1;
	  if((row!=0 and column!=0) and
	     ((grid[row-1][column]==0) and
	      (grid[row][column-1]==0))) {
	    neighbours=0;
	  }
	}
	count = std::max(count,neighbours);
	column+=1;
      }
      column=0;
      row+=1;
    }
    return count;
  }
  
};


