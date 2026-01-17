#include<iostream>
#include<string>
using namespace std;

int main(){
    char str[10] = "naji";
    char str2[] = {'a','b','c','d','e'};
    char str3[] = {'a','b','c','d','e','\0'};
    char str4[] = "Hyuga";

    cout<<str<<endl;
    cout<<str3<<endl;
    cout<<str2<<endl;
    cout<<str4<<endl;
    
    cout<<"Geting input for char"<<endl;
    char input[50];
    cin.getline(input,50);
    cout<<input<<endl;

    return 0;    


}