#include<iostream>
using namespace std;
int friendPair(int n){
    // Base Case;
    if(n == 1 || n == 2){
        return n;
    }
    // sum of pairs
    return friendPair( n - 1 ) + (n - 1) * friendPair(n-2); 
}
int main(){
    cout<<"total no of to pair 5 people: "<<friendPair(5) << endl;
    return 0;
}