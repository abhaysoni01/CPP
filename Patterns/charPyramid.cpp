#include<iostream>
using namespace std;
// A
// BC
// CDE
// DEFG
// EFGHI
// FGHIJK
int main(){
    int n ;
    cin>>n;
    for(int i =65;i<=65+n;i++){
        for(int j =i;j<=i+i-65;j++){
            cout<<(char)j;
        }
        cout<<endl;
    }
}