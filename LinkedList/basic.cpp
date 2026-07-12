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
    ~Node(){
        if(next != NULL){
            delete next;
            next = NULL;
        }
    }
};
class List{
    Node* head;
    Node* tail;
    public:

    List(){
        head = tail = NULL;
    }

    bool empty(){
        return head == NULL;
    }

    void insert_in_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }

    void insert_at_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    int front(){
        if(!head) return -1;
        return head->data;
    }

    int back(){
        if(!head) return -1;
        return tail->data;
    }

    void delete_front(){
        if(head == NULL){
            return ;
        }
        Node* curr = head;
        head = head->next;
        curr->next = NULL;
        delete curr;
        if(head == NULL){
            tail = nullptr;
        }
    }

    void delete_back(){
        if(head == NULL){
            return;
        }
        else if(head == tail){
            Node* temp = head;
            head = tail = NULL;
            delete temp;
            return;
        }
        Node* temp = head;
        while(temp->next->next != nullptr){
            temp = temp->next;
        }
        Node* del = temp->next;
        temp->next = NULL;
        tail = temp;
        delete del;
    }

    void print(){
        Node* temp = head;
        while(temp){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void insert_in_middle(int val){
        int n = 0;
        Node* temp = head;
        while(temp != nullptr){
            n++;
            temp = temp->next;
        }
        int mid = n/2;
        Node* prev = NULL;
        temp = head;
        for(int i = 0;i < mid;i++){
            prev = temp;
            temp = temp->next;
        }
        Node* newNode = new Node(val);
        newNode->next = prev->next;
        prev->next = newNode;
    }
    void reverse(){
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;
        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }
    void removeKth(int k){
        int n = 0;
        Node* temp = head;
        while(temp){
            n++;
            temp = temp->next;
        }
        if(k < 0 || k>n){
            cout << "Invalid Index." << endl;
            return;
        }
        int idx = n - k;
        if(idx == 0){
            delete_front();
            return;
        }
        temp = head;
        for(int i = 1;i<idx;i++){
            temp = temp->next;
        }
        
        Node* del = temp->next;
        temp->next = del->next;
        if(del == tail){
            tail = temp;
        }
        del->next = NULL;
        delete del;    
    }
    ~List(){
        if(head != nullptr){
            delete head;
            head = nullptr;
        }
    }

};

int main(){
    List li,li2;
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        int temp;
        cin >> temp;
        li.insert_in_front(temp);
        li2.insert_at_back(temp);
    }
    li.print();
    li2.print();
    // while(!li.empty()){
    //     cout << li.front() << endl;
    //     li.delete_front();
    // }
    // while(!li2.empty()){
    //     cout << li2.back() << endl;
    //     li2.delete_back();
    // }
    // int num;
    // cin >> num;
    // li.insert_in_middle(num);
    // li.print();
    cout << endl;
    // li.reverse();
    // li.print();
    int k ;
    cin >> k;
    li.removeKth(k);
    li.print();
    return 0;
}