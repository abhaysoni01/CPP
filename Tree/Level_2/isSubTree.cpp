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
int height(Node* root){
    if(root == NULL){
        return 0;
    }
    return max(height(root->left),height(root->right)) + 1;
}
int diameterOftree(Node* root){
    if(root == NULL){
        return 0;
    }
    int currDia = height(root->left) + height(root->right) +1;
    int leftDia = diameterOftree(root->left);
    int rightDia = diameterOftree(root->right);

    return max(currDia,max(leftDia,rightDia));
}
bool isIdentical(Node* root1,Node* root2){
    if(root1 == NULL && root2 == NULL){
        return true;
    }
    if(root1 == NULL || root2 == NULL){
        return false;
    }
    if(root1->data != root2->data){
        return false;
    }
    return isIdentical(root1->left,root2->left) && isIdentical(root1->right,root2->right);
}
bool isSubTree(Node* root1,Node* root2){
    if(root1 == NULL  && root2 == NULL){
        return true;
    }
    if(root1 == NULL || root2 == NULL){
        return false;
    }
    if(root1->data == root2->data){
        if(isIdentical(root1,root2)){
            return true;
        }
    }
    bool isLeft = isSubTree(root1->left,root2);
    if(!isLeft){
        return isSubTree(root1->right,root2);
    }
    return true;
}
int main(){
    vector<int> arr = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildtree(arr);
    printLevelOrder(root);
    Node* root2 = new Node(3);
    root2->right = new Node(6);
    // root2->left = new Node(89);
    // cout << height(root);
    cout << "Is Identical : "<< isSubTree(root,root2) <<endl;
    // cout << "Max diameter of Tree : "<<diameterOftree(root)<<endl;
    return 0;
}