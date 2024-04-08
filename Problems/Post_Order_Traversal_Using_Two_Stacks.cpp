#include <iostream>
#include<stack>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
void post_order_iterative(TreeNode* root){
    if (!root){
        return ;
    }
    stack<TreeNode* >s1,s2;
    s1.push(root);
    TreeNode* node;
    while(!s1.empty()){
        node=s1.top();
        s1.pop();
        s2.push(node);
        
        if(node->left!=nullptr){
            s1.push(node->left);
            
        }
        if(node->right!=nullptr){
            s1.push(node->right);
        }
    }
    TreeNode* nod;
    while(!s2.empty()){
        nod=s2.top();
        s2.pop();
        cout<<nod->val<<" ";
    }
    
}
int main(){
    TreeNode* root;
    root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    root->left->right->left = new TreeNode(8);
    root->right->left->right = new TreeNode(9);
    post_order_iterative(root);
} 