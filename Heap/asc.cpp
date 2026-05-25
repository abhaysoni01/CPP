#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(20);
    pq.push(4);
    pq.push(25);
    pq.push(69);
    pq.push(96);

    while(!pq.empty()){
        cout << "Top :"<<pq.top() << endl;
        pq.pop();
    }
    return 0;
}
