#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main(){
    char str[] = {'a','b','c','d','\0'};
    char str2[10];
    // cin >> str2;
    string temp;
    getline(cin,temp,'.');
    cout << temp << endl;
    cin.getline(str2,10);
    cout << str2 << endl;
    cout << str << endl;
    strcpy(str2,str);
    cout << strcmp(str,str2) << endl;
    return 0;
}