#include<iostream>
#include<map>
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
void topView(Node* root){
    queue<pair<Node*,int>> Q; //(Node,Horizonal dis)
    map<int,int> mp; //(Horizontal dis, node->data)

    Q.push(make_pair(root,0));
    while(!Q.empty()){
        pair<Node*,int> front = Q.front();
        Q.pop();
        Node* currNode = front.first;
        int currHD = front.second;
        if(!mp.count(currHD)){
            mp[currHD] = currNode->data;
        }
        if(currNode->left != NULL){
            Q.push(make_pair(currNode->left,currHD - 1));
        }
        if(currNode->right != NULL){
            Q.push(make_pair(currNode->right,currHD + 1));
        }
    }
    for(auto m:mp){
        cout <<"Horizantal distance: "<< m.first <<"  Node value: "<<m.second<<endl;
    }
}
int main(){
    vector<int> arr = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildtree(arr);
    printLevelOrder(root);
    // cout << height(root);
    // cout << "Max diameter of Tree : "<<diameterOftree(root)<<endl;
    topView(root);

    return 0;
}