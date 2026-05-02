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
Node* buildTree(vector<int> arr){
    i++;
    if(arr[i] == -1){
        return NULL;
    }
    Node* curr = new Node(arr[i]);
    curr->left = buildTree(arr);
    curr->right = buildTree(arr);
    return curr;
}
void preOrder(Node* root){
    if(!root) return;
     cout << root->data << " ";
     preOrder(root->left);
     preOrder(root->right);
}

pair<int,int> diameterOfTree(Node* root){
    if(root == NULL){
        return make_pair(0,0);
    }
    pair<int,int> leftInfo = diameterOfTree(root->left); // (diameter,height)
    pair<int,int> rightInfo = diameterOfTree(root->right);
    int currDia = leftInfo.second + rightInfo.second + 1;
    int finalDia = max(currDia,max(leftInfo.first,rightInfo.first));
    int finalHt = max(rightInfo.second,rightInfo.second) + 1;

    return make_pair(finalDia,finalHt);
}
int main(){
    vector<int> arr = {1,2,3,-1,-1,4,-1,-1,5,6,-1,-1,7,-1,-1};
    Node* root = buildTree(arr);
    preOrder(root);
    pair<int,int> ans = diameterOfTree(root);
    cout << "\nMax Diameter :"<<ans.first << "\nMax Height: "<< ans.second<<endl;
    return 0;
}