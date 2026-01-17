#include<iostream>
using namespace std;
int main(){
    string name = "Neji Hyuga";
    cout<<name<<endl;
    getline(cin,name);
    cout<<"Length: "<<name.length()<<endl;
    cout<<"atIdx1: "<<name.at(1)<<endl;
    cout<<"Find (M) :"<<name.find("M")<<endl;
    cout<<"Substr (1,2) : "<<name.substr(1,2)<<endl;
    return 0;
}