#include<iostream>
using namespace std;
int main(){
    int num,sum =0 ,digit;
    cin>>num;
    int temp = num;
    while(temp> 0){
        digit = temp% 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    if(sum == num){
        cout<<"Armstrong Number"<<endl;
    }
    else{
        cout<<"Not an Armstrong Number"<<endl;
    }
    


}