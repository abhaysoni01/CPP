#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int n1 = 0,n2 =1,n3 =0;
    for(int i =0 ;i<num;i++){
        cout<<n1<<" ";
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;

    }
}