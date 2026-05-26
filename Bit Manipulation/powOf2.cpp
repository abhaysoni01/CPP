#include<iostream>
using namespace std;
bool isPow(int n){
    return !(n & (n-1));
}
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << n << " Is power on 2: "<<isPow(n)<<endl;
    return 0;
}