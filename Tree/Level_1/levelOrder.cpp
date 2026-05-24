#include<iostream>
#include<queue>
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
void levelOrder(Node* root){
    if(!root) return ;
    queue<Node*> Q;
    Q.push(root);
    while(!Q.empty()){
        Node* curr = Q.front();
        Q.pop();
        cout << curr->data <<" ";
        if(curr->left != NULL){
            Q.push(curr->left);
        }
        if(curr->right != NULL){
            Q.push(curr->right);
        }
    }
    cout << endl;
}
int main(){
    vector<int> arr = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildtree(arr);
    levelOrder(root);
    return 0;
}