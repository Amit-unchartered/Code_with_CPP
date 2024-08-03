#include<bits/stdc++.h>
using namespace std;

void preorder(node){
    if(node == NULL){
        return;
    }
//TC -> O(N)
//SC -> O(N)
    print(node->data);
    preorder(node->left);
    preorder(node->right);
}

void inorder(node){
    if(node==NULL){
        return;
    }
//TC -> O(N)
//SC -> O(N)
    inorder(node->left);
    print(node->data);
    inorder(node->right);
}

void postorder(int node){
    if(node==NULL){
        return;
    }
    //TC -> O(N)
    //SC -> O(N)
    postorder(node->left);
    postorder(node->right);
    print(node->data)
}

int main()
{
    return 0;
}