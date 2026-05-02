#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

class queue{
    Node* head = NULL;
    Node* tail = NULL;
    public:
    void push(int val){
        Node* currNode = new Node(val);
        if(head == NULL){
            head = tail = currNode;
        }
        else{
            tail->next = currNode;
            tail = currNode;
        }
    }
    void pop(){
        if(!empty()){
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
    bool empty(){
        return head == NULL;
    }
    int front(){
        return head->data;
    }

};
int main(){
    queue q1;
    q1.push(1);
    q1.push(2);
    cout << q1.front() << endl;
    q1.pop();
    cout << q1.front() << endl;
    return 0;
}
