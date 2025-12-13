#include<iostream>
using namespace std;
int  square(int a,int b){
    return a*a + b*b + 2*a*b;
}
int main(){
    int a, b;
    cin>>a>>b;
    cout<<"(a + b)sqaure is: "<<square(a,b)<<endl;
    return 0;

}