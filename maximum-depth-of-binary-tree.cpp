#include <iostream>
#include <vector>
#include <stack>

struct TreeNode {
  TreeNode *left;
  TreeNode *right;
  int val;
  TreeNode(int x) : val(x),left(NULL),right(NULL){};
};

class Solution {
public:
  int maxDepth(TreeNode *root)
  {
    if(root==NULL)
      return 0;
    else {
      return std::max(maxDepth(root->left),maxDepth(root->right))+1;

    }
  }
};

int main(int argc, char**argv)
{
  TreeNode *root = new TreeNode(1);
  root->right = new TreeNode(3);
  root->right->right = new TreeNode(4);
  root->right->right->right = new TreeNode(5);
  Solution sol = Solution();
  std::cout<<sol.maxDepth(root)<<std::endl;
  

}

  
