/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    string preOrder(TreeNode * node){
        if (node == nullptr) {
        return "null";
    }

    string s;
    s.append("^"); 
    s.append(to_string(node->val));
    s.append(preOrder(node->left));
    s.append(preOrder(node->right));

    return s;
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
        string s1 = preOrder(root);
        string s2 = preOrder(subRoot);

        return s1.find(s2) != string::npos;

    }
};