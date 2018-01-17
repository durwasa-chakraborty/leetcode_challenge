#include <iostream>
#include <vector>
#include <stack>
#include <queue>

struct TreeNode {
  TreeNode* left;
  TreeNode* right ;
  int val;
  TreeNode(int x) : val(x),left(NULL),right(NULL){};
};

class Solution {
public:
  TreeNode* invertTree(TreeNode* root) {
    std::queue<TreeNode*> q;
    if(root==NULL)
      return root;
    else {
      q.push(root);
      while(!q.empty()) {
	int s = q.size();
	for(int i = 0 ; i < s ; i++) {
	  TreeNode* tmp = q.front();
	  if(tmp->left!=NULL)
	    q.push(tmp->left);
	  if(tmp->right!=NULL)
	    q.push(tmp->right);
	  std::swap(tmp->left,tmp->right);
	  q.pop();
	}
      }
      return root;
    }
  }
};

int main(int argc, char**argv)
{
  TreeNode *root = new TreeNode(4);
  root->left = new TreeNode(2);
  root->right = new TreeNode(7);
  root->left->left = new TreeNode(1);
  root->left->right = new TreeNode(3);
  root->right->left = new TreeNode(6);
  root->right->right = new TreeNode(9);


}
