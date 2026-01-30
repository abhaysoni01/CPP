#include<iostream>
using namespace std;
int main(){
    cout<<(~(-1))<<endl;
    int i = 8;
    int num  = -1;
    while(i>=0){
        cout<<( num & 1);
        num >>=1;
        i--;

    }
    return 0;
}