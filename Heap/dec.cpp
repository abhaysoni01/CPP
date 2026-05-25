#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(50);

    while(!pq.empty()){
        cout << "Top : "<<pq.top() <<"\n";
        pq.pop();
    }
    return 0;
}