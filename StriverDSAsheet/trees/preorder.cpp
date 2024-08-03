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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        preorder(root, result);
        return result;
    }

private:
    void preorder(TreeNode* node, vector<int>&result){
        if(node==NULL){
            return;
        }

        result.push_back(node->val);
        preorder(node->left, result);
        preorder(node->right, result);
    }
};

//iterative preorder
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;
        if(root==NULL){
            return preorder;
        }
        stack<TreeNode*> st;
        st.push(root);

        while(!st.empty()){
            root = st.top;
            st.pop();

            preorder.push_back(root->val);

            if(root->left != NULL){
                st.push(root->left);
            }
            if(root->right != NULL){
                st.push(root->right);
            }
        }
        return preorder;
    }
};
//TC --> O(N)
//SC --> O(Height of tree)