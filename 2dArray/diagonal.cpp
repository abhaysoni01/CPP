#include<iostream>
using namespace std;
int diagonalSum(int arr[][4],int n){
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += arr[i][i];
        if(i != n - i-1) sum +=arr[i][n-1-i];
    }
    return sum;
}

int main(){
    int arr[4][4] = {{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12},
                     {13,14,15,16}};
    cout<<"Sum of both diagonal elements is "<<diagonalSum(arr,4)<<endl;
    return 0;
}