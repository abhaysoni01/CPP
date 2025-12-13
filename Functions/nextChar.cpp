#include<iostream>
using namespace std;
char nextChar(char c){
    if(c == 'z') return 'a';
    return ++c;
}
int main(){
    char a;
    cin>>a;
    cout<<"Next char after "<<a<<" is: "<<nextChar(a);
    return 0;

}