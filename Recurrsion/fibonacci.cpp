#include<iostream>
#include<vector>
using namespace std;
int fibo(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return fibo(n-1) + fibo(n-2);
}

int main(){
    cout<<"5th fibonacci element: "<<fibo(5)<<endl;
    cout<<"10th fibonacci element: "<<fibo(10)<<endl;

    return 0;
}