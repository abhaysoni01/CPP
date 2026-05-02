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
void printLevelOrder(Node* root){
    if(!root) return ;
    queue<Node*> Q;
    Q.push(root);
    Q.push(NULL);
    while(!Q.empty()){
        Node* curr = Q.front();
        Q.pop();
        if(curr == NULL){
            cout << endl;
            if(Q.empty()){
                break;
            }
            Q.push(NULL);
        }
        else{
        cout << curr->data <<" ";
        if(curr->left != NULL){
            Q.push(curr->left);
        }
        if(curr->right != NULL){
            Q.push(curr->right);
        }
    }
    }
    cout << endl;
}
void helper(Node* root,vector<int>& ans,int k,int level){
    if( root == NULL){
        return;
    }
    if(level == k){
        ans.push_back(root->data);
    }
    helper(root->left,ans,k,level+1);
    helper(root->right,ans,k,level+1);
}
void kthLevel(Node* root,int k){
    vector<int> ans;
    helper(root,ans,k,0);
    for(int i : ans){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    vector<int> arr = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildtree(arr);
    printLevelOrder(root);
    // cout << height(root);
    // cout << "Max diameter of Tree : "<<diameterOftree(root)<<endl;
    kthLevel(root,2);

    return 0;
}