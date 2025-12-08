#include<iostream>
using namespace std;
// A
// BC
// DEF
// GHIJ
// KLMNO
int main(){
    int n ;
    cin>>n;
    char ch = 'A';
    for(int i =1;i<=n;i++){
        for(int j =1;j<=i;j++){
            cout<<ch++;
        }
        cout<<endl;
    }
}