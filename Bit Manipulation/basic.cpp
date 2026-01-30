#include<iostream>
using namespace std;
int main(){
    int x1 = 0,x2 = 1;
    cout<<"OR | operations: "<<endl;
    cout<<"0 | 0 => "<<(x1 | x1)<<endl;
    cout<<"0 | 1 => "<<(x1 | x2)<<endl;
    cout<<"1 | 0 => "<<(x2 | x1)<<endl;
    cout<<"1 | 1 => "<<(x2 | x2)<<endl;
    cout<<endl;
    cout<<"AND | operations: "<<endl;
    cout<<"0 & 0 => "<<(x1 & x1)<<endl;
    cout<<"0 & 1 => "<<(x1 & x2)<<endl;
    cout<<"1 & 0 => "<<(x2 & x1)<<endl;
    cout<<"1 & 1 => "<<(x2 & x2)<<endl;
    cout<<endl;
    cout<<"XOR | operations: "<<endl;
    cout<<"0 ^ 0 => "<<(x1 ^ x1)<<endl;
    cout<<"0 ^ 1 => "<<(x1 ^ x2)<<endl;
    cout<<"1 ^ 0 => "<<(x2 ^ x1)<<endl;
    cout<<"1 ^ 1 => "<<(x2 ^ x2)<<endl;
    return 0;

}