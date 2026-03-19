#include<iostream>
using namespace std;
int pow(long long x,int m){
    long long ans = 1;
    if(m == 0) return 1;
    while(m > 0){
        int lastBit = m & 1;
        if(lastBit){
            ans = ans * x;
        }
        x = x * x;
        m = m >> 1;
    }
    return ans;
}
int main(){
    int n , x;
    cout << "enter the val of x ans n in pow(x,n) :";
    cin >> x >> n;
    cout << "Power of "<< n <<endl;
    cout << pow(x,n);
    return 0;
}