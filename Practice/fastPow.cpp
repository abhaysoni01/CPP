#include<iostream> 
using namespace std;
long long expo(long long num, int pow){
    long long x = num;
    long long ans = 1;
    while(pow > 0){
        int last = pow & 1;
        if(last){
            ans = ans * x;
        }
        x = x*x;
        pow = pow >> 1;
    }
    return ans;
}
int main(){
    int num,pow;
    cout << "Enter the numder ans the power: ";
    cin >> num >> pow;
    cout << "Ans: "<<expo(num,pow)<<endl;
    return 0;
}