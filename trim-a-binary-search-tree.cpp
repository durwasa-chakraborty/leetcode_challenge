/*Input: 
    Tree 1                                       
          1                                                 
         / \                                              
        0   2                           
Output: 
Merged tree:
         1
        / \
       0   2
   
*/

#include<iostream>
#include<vector>

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode (int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
  TreeNode* trimBST(TreeNode* root, int L, int R) {
    if(root==NULL)
      return NULL;

    else if(L<=root->val and R>=root->val) {
      TreeNode* node = new TreeNode(root->val);
      node->left = trimBST(root->left,L,R);
      node->right = trimBST(root->right,L,R);
      return node;
    }

    else if(root->val<L) {
      return trimBST(root->right,L,R);
    }
    else
      return trimBST(root->left,L,R);
   
  }
};

int main(int argc, char **argv)
{
  TreeNode *root = new TreeNode(2);
  root->left = new TreeNode(1);
  root->right = new TreeNode(3);

  Solution sol = Solution();
  std::cout<<sol.trimBST(root,3,4)->val;
  
}
