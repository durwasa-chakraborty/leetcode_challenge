#include<iostream>
#include<vector>


struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int x) : val(x),left(NULL),right(NULL){};
};
class Solution {
public:
  TreeNode* invertTree(TreeNode *root) {
    if(root == NULL)
      return root;
    else {
      TreeNode* tmp = root;
      tmp->left = invertTree(root->left);
      tmp->right = invertTree(root->right);
      std::swap(tmp->left, tmp->right);
    }
    return root;
  }


};

int main(int argc, char**argv)
{
  TreeNode* root = new TreeNode(4);
  root->left =  new TreeNode(2);
  root->right  = new TreeNode(5);
  root->left->left = new TreeNode(5);

  Solution sol = Solution();
  std::cout<<sol.invertTree(root)->val<<std::endl;
}
