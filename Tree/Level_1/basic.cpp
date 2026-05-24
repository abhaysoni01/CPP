#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};
static int i = -1;
Node* buildtree(vector<int>& arr){
    i++;
    if(arr[i] == -1){
        return NULL;
    }
    Node* curr = new Node(arr[i]);
    curr->left = buildtree(arr);
    curr->right = buildtree(arr);
    return curr;
}
void preorder(Node* root){
    if(!root) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root){
    if(!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void postorder(Node* root){
    if(!root) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
int main(){
    vector<int> arr = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildtree(arr);
    preorder(root);    
    cout << endl;
    postorder(root);
    cout << endl;
    inorder(root);
    return 0;
}