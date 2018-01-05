#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <queue>
#include <iomanip>
#define CHECK std::cout<<"--------"


using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL){}
};

class Solution {
public:
  vector<double> averageOfLevels(TreeNode *root) {
    vector<double> ans;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
      double val = 0;
      int __size = q.size();
      for(int i = 0 ; i < __size ; i+=1) {
	TreeNode* __temp__ = q.front();
	if(__temp__->left)
	  q.push(__temp__->left);
	if(__temp__->right)
	  q.push(__temp__->right);
	val += __temp__->val;
	q.pop();
      }
      CHECK<<val<<" "<<__size<<endl;
      double n = (val/__size);
      ans.push_back(val/__size);
    }

    return ans;
  }

};

int main(int argc, char**argv)
{
  TreeNode* root = new TreeNode(9);
  root->left = new TreeNode(3);
  root->right = new TreeNode(20);
  root->left->left = new TreeNode(2);
  root->right->left = new TreeNode(10);
  root->right->right = new TreeNode(23);
  Solution sol = Solution();
  vector<double> ans = sol.averageOfLevels(root);
  for(double elem : ans)
    std::cout<<std::fixed<<std::setprecision(2)<<elem<<std::endl;

}

  
