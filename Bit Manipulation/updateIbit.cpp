#include<iostream>
using namespace std;

int updateBit(int num, int pos, int val){
    // Clear ith bit
    int digit = num & ~(1 << pos);
    // Set bit;
    digit = digit | (val << pos);
    return digit;
}
int main(){
    int num;
    int pos;
    int val;
    cin >> num  >> pos >> val;
    
    cout << updateBit(num,pos,val) << endl;

    return 0;
}