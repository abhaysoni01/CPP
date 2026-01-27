#include<iostream>
#include<vector>
using namespace std;
int pow(int x,int n){
    if(n == 0){
        return 1;
    }
    int halfSquear = pow(x,n/2);
    int multiplySquear = halfSquear * halfSquear;
    if(n%2 != 0 ){
        multiplySquear = x * halfSquear * halfSquear;
    }
    return multiplySquear;

}
int pow2(int x,int n){
    if(n == 0){
        return 1;
    }
    
    return x*pow2(x,n-1);

}

int main(){
    cout<<"pow(2,5): "<<pow(2,5)<<endl;
    cout<<"pow(3,5): "<<pow(3,5)<<endl;
    cout<<"pow(2,5): "<<pow2(2,5)<<endl;
    cout<<"pow(3,5): "<<pow2(3,5)<<endl;

    return 0;
}