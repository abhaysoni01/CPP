#include<iostream>
using namespace std;
int decToBin(int n){
    int pow = 1;
    int temp = n,num = 0;
    while(temp>0){
        num +=pow * (temp%2);
        pow = pow * 10;
        temp = temp/2;
    }
    return num;
}
int main(){
    int n;
    cin>>n;
    cout<<"binary value of "<<n<<" is "<<decToBin(n)<<endl;
}