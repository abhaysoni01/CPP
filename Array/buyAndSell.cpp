#include<iostream>
using namespace std;
int main(){
    int prices[] = {7,1,5,3,6,4};
    int n = sizeof(prices)/sizeof(int);
    int bestBuy[n] = {0};
    int profit[n] ;
    bestBuy[0] = INT32_MAX;
    for(int i=1;i<n;i++){
        bestBuy[i] = min(prices[i-1],bestBuy[i-1]);
        profit[i] = prices[i]-bestBuy[i-1];

    }
    for(int i=0;i<n;i++){
        cout<<bestBuy[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<profit[i]<<" ";
    }
    cout<<endl;
}