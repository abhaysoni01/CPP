#include<iostream>
using namespace std;

void decOrder(int n){
    cout<<n<<" ";           
    if(n == 1) return ;
    decOrder(n-1);
}
int main(){
    decOrder(6);
    return 0;
}
