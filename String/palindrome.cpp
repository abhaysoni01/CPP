#include<iostream>
#include<cstring>
using namespace std;
void pelindrome(char str[],int n){
    int st =0 ,end = n -1;
    while(st<end){
        if(str[st++] != str[end--]){
            cout<<"not Pelindrome"<<endl;
            return;
        }

    }
    cout<<"Pelindrome"<<endl;
}
int main(){
    char input[50];
    cin.getline(input,50);
    int n = strlen(input);
    pelindrome(input,n);
    cout<<input<<endl;
    return 0;
}