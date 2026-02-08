#include<iostream>
using namespace std;
int tilling(int n){
    // Base Case
    if(n == 0 || n == 1){
        return 1;
    }
     return tilling(n - 1) + tilling(n - 2);
}
int main(){
    cout<<"Number of ways to Place 5 tiles: "<<tilling(5) << endl;
    
    return 0;
}