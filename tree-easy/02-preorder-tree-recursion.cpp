vector <int>v;
vector<int> preOrder(TreeNode<int> * root){
    if(root==nullptr){
        return v;
    }
    v.push_back(root->data);
    preOrder(root-> left);
    preOrder(root-> right);
    return v;
}


class Solution {
public:
    vector<int> ans;
    vector<int> preorderTraversal(TreeNode* root) {
        if(root != NULL){
            ans.push_back(root-> val);
            preorderTraversal(root->left);
            preorderTraversal(root->right);
        }
        return ans;
    }
};