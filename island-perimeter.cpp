#include <iostream>
#include <vector>

#define pb push_back
#define CHECK cout<<"------------------------"

using namespace std;
class Solution {
public:
  int islandPerimeter(vector<vector<int>>& grid)
  {
    int column=0;
    int row = 0;
    int neighbours = 0;
    int count=0;

    // Continuous occurrence of 1 along rows
    for(vector<vector<int>>::iterator itr=grid.begin();
	itr!=grid.end();
	itr++)
      {
	for(vector<int>::iterator itr_row = itr->begin();
	    (itr_row)!=itr->end();
	    (itr_row)++)
	  {
	    if((*itr_row)==1)
	      {
		count+=1;
		if(row!=0 and grid[row-1][column]==1)
		  neighbours+=1;
		if(column!=0  and grid[row][column-1]==1)
		  neighbours+=1;
	      }
	    column+=1;
	  }
	column=0;
	row+=1;
      }
    return count*4 - neighbours*2;
    
  }
};




int main(int argc, char **argv){
  Solution sol = Solution();
  vector<int> row;
  vector<vector<int>> grid;
  // construct rows
  row.pb(0);
  row.pb(1);
  row.pb(0);
  row.pb(0);
  grid.pb(row);
  row.clear();
  // construct row 2
  row.pb(1);
  row.pb(1);
  row.pb(1);
  row.pb(0);
  grid.pb(row);
  row.clear();
  //construct row 3
  row.pb(0);
  row.pb(1);
  row.pb(0);
  row.pb(0);
  grid.pb(row);
  row.clear();
  // construct row 4
  row.pb(1);
  row.pb(1);
  row.pb(0);
  row.pb(0);
  grid.pb(row);
  row.clear();
  
  std::cout<<sol.islandPerimeter(grid)<<std::endl;
  // for(vector<int> row: grid)
  //   for(int column : row)
  //     std::cout<< " " <<column << " ";
}
