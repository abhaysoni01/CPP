#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char input[50];
    cin.getline(input,50);
    char chr[50];
    strcpy(chr,input);
    cout<<chr<<endl;
    cout<<strcmp(chr,input)<<endl;
    strcat(chr,input);
    cout<<chr<<endl;
    return 0;
}