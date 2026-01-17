#include<iostream>
using namespace std;
void transpose(int arr[][4],int n,int m){
    int temp[m][n] = {{0}};
    // for(int i = 0;i<n;i++){
    //     for(int j = i;j<m;j++){
    //         swap(arr[i][j],arr[j][i]);
    //     }
    // }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            temp[j][i] = arr[i][j];
        }
    }

    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            cout<<temp[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main(){
    int arr[4][4] = {{10,20,30,40},
                     {15,25,35,45},
                     {27,29,37,48},
                     {32,33,39,50}};
    int arr2[3][4] = {{10,20,30,40},
                     {15,25,35,45},
                     {27,29,37,48}};
    transpose(arr2,3,4);
    transpose(arr,4,4);

    return 0;
}