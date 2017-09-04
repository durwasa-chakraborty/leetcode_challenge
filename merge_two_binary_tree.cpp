/*Input: 
    Tree 1                     Tree 2                  
          1                         2                             
         / \                       / \                            
        3   2                     1   3                        
       /                           \   \                      
      5                             4   7                  
Output: 
Merged tree:
         3
        / \
       4   5
      / \   \ 
     5   4   7
*/
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* t3 = TreeNode();

class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {

        while(t1->left!=NULL or t2->left!=NULL) {
            int temp_val = t1->val+t2->val;
            ((t3->left == NULL and t3->right == NULL) and !(t3->val))? t3(temp_val) : t3->left(temp_val);
            return mergeTrees(TreeNode* t1->left, TreeNode* t2->left);
        }

        while(t1->right!=NULL or t2->right!=NULL) {
            int temp_val = t1->val + t2->val;
            ((t3->left == NULL and t3->right == NULL)and !(t3->val))? t3(temp_val): t3->right(temp_val);
            return mergeTrees(TreeNode* t1->right, TreeNode* t2->right);
        }

    return t3;

    }
};
