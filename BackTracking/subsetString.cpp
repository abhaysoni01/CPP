#include<iostream>
using namespace std;
void substring(string str,string subset){
    if(str.size() == 0){
        cout <<"'"<< subset << "' ";
        return;
    }
    char ch = str[0];

    substring(str.substr(1,str.size() - 1) , subset + ch);

    substring(str.substr(1,str.size() - 1) , subset);
}
int main(){
    string str = "abc";
    substring(str,"");
    return 0;
}