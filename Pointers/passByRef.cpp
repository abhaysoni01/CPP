#include<iostream>
using namespace std;
void change(int *para){
    *para = 20;
    cout<<"In funation() "<<*para<<endl;
}
int main(){
    int a = 10;
    change(&a);
    cout<<"In Main() "<<a<<endl;
}