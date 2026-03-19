#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void printBit(int num){
    int i = 8;
    string s;
    while(i>=0){
        int a = num & 1;
        s.push_back(a + '0');
        num >>=1;
        i--;
    }
    reverse(s.begin(),s.end());
    cout << s << endl;
}
int main(){
    cout<<(~(-1))<<endl;
    int i = 8;
    int num  = ~4;
    cout << num <<" in bit form : ";;
    printBit(num);
    printBit((~0 << 3));
    printBit((-1 >> 3));
    
    return 0;
}