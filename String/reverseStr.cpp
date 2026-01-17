#include<iostream>
#include<cstring>
using namespace std;
void reverse(char str[],int n){
    int st =0 ,end = n-1;
    while(st<end){
        swap(str[st++],str[end--]);
    }
}
int main(){
    char input[50];
    cin.getline(input,50);
    int n = strlen(input);
    reverse(input,n);
    cout<<input<<endl;
    return 0;
}