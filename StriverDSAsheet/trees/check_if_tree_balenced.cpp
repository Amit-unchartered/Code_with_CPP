class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        return dfsHeight(root) != -1;
    }
    int dfsHeight(Node* root){
        if(root == NULL) return 0;

        int lh = dfsHeight(root->left);
        if(lh==-1) return -1;
        int rh = dfsHeight(root->right);
        if(rh==-1) return -1;

        if(abs(lh-rh)>1) return -1;

        return 1+max(lh,rh);
    }
};
//TC-->O(N)
//SC-->O(N)
