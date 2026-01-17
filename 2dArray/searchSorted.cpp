#include<iostream>
using namespace std;
void search(int arr[][4],int n,int m,int key){
    int i = 0,j = m-1;
    while( j>=0 && i <n){
        if(arr[i][j] == key){
            cout<<"element found at: "<<i<<","<<j<<endl;
            return;
        }
        else if(arr[i][j] < key) i++;
        else j--;
    }
    cout<<"element not found"<<endl;
}


int main(){
    int arr[4][4] = {{10,20,30,40},
                     {15,25,35,45},
                     {27,29,37,48},
                     {32,33,39,50}};
    search(arr,4,4,32);
    return 0;
}