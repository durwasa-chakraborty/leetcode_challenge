#include <iostream>
#include <vector>
#include <queue>

struct TreeNode {
  TreeNode *left;
  TreeNode *right;
  int val;
  TreeNode(int x): val(x),left(NULL),right(NULL){};
};

class Solution {
public:
  int maxDepth(TreeNode *root) {
    std::queue<TreeNode*> q;
    int count = 0;
    if(root==NULL)
      return 0;
    else {
      q.push(root);
      while(!q.empty())
	{
	  int s = q.size();
	  for(int i = 0 ; i < s; i+=1) {
	    TreeNode *tmp = q.front();
	    if(tmp->left!=NULL)
	      q.push(tmp->left);
	    if(tmp->right!=NULL)
	      q.push(tmp->right);
	    q.pop();
	  }
	  
	  count+=1;
	}
      return count;
    }
  }
};

int main(int argc, char**argv)
{
  TreeNode *root = new TreeNode(3);
  root->right = new TreeNode(1);
  root->right->right = new TreeNode(2);
  root->right->right->right = new TreeNode(4);

  Solution sol = Solution();
  std::cout<<sol.maxDepth(root)<<std::endl;

}
