#include<iostream>
using namespace std;
int binToDec(int n){
    int pow = 1;
    int temp = n,num = 0;
    while(temp>0){
        num +=pow * (temp%10);
        pow *=2;
        temp /=10;
    }
    return num;
}
int main(){
    int n;
    cin>>n;
    cout<<"Decimal value of "<<n<<" is "<<binToDec(n)<<endl;
}