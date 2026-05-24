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
Node* LCA(Node* root,int n1,int n2){
    if(root == NULL){
        return NULL;
    }
    if(root->data == n1 || root->data == n2){
        return root;
    }
    Node* leftLCA = LCA(root->left,n1,n2);
    Node* rightLCA = LCA(root->right,n1,n2);
    if(leftLCA != NULL && rightLCA != NULL){
        return root;
    }
    return leftLCA == NULL?rightLCA:leftLCA;
}
int dist(Node* root,int n){
    if(root == NULL){
        return -1;
    }
    if(root->data == n){
        return 0;
    }
    int left = dist(root->left,n);
    if(left != -1){
        return left + 1;
    }
    int right = dist(root->right,n);
    if(right != -1){
        return right + 1;
    }
    return -1;
}
int minDist(Node* root,int n1,int n2){
    Node* lda = LCA(root,n1,n2);
    cout << lda->data<<endl;
    int dist1 = dist(lda,n1);
    int dist2 = dist(lda,n2);
    return dist1 + dist2 + 1;
}

int main(){
    vector<int> arr = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildtree(arr);
    printLevelOrder(root);
    // cout << height(root);
    // cout << "Max diameter of Tree : "<<diameterOftree(root)<<endl;
    // kthLevel(root,2);
    cout << minDist(root,4,6);

    return 0;
}