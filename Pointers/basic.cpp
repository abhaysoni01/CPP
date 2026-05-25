#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int *ptr = &a;
    cout<<ptr<<endl;
    cout<<&a<<endl;
     int &b = a; // reference of a
     b = 23;
     cout << a << endl;
     return 0;
}