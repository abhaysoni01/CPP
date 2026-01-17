#include<iostream>
using namespace std;
//  -------
//  --     |
//  |------|
void spiral(int arr[][4],int n,int m){
    int scol = 0,srow =0;
    int ecol = m-1,erow = n-1;
    while(srow <= erow && scol <= ecol){
        for(int j = scol;j<=ecol;j++){
            cout<<arr[srow][j]<<" ";
        }
        for(int i = srow +1;i<=erow;i++){
            cout<<arr[i][ecol]<<" ";
        }
        for(int j = ecol-1;j>=scol;j--){
            if(scol == ecol) break;
            cout<<arr[erow][j]<<" ";
        }
        for(int i = erow-1;i>srow;i--){
            if(srow == erow) break;
            cout<<arr[i][scol]<<" ";
        }
        srow++;scol++;
        erow--;ecol--;

    }
}
int main(){
    int arr[4][4] = {{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12},
                     {13,14,15,16}};
    spiral(arr,4,4);
}