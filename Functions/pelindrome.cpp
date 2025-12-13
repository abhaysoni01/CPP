#include<iostream>
using namespace std;
bool pelindrome(int n){
    int temp = n;
    int reverse = 0;
    while(temp != 0){
        reverse = reverse * 10 + temp%10;
        temp /=10;
    }
    return n == reverse;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(pelindrome(n)){
        cout<<"Number is Pelindrome."<<endl;
    }
    else{
        cout<<"Not Pelindrome"<<endl;
    }
    return 0;
}