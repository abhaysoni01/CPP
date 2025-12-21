#include<iostream>
using namespace std;
void multipleOfTwo(int *arr,int n){
    for(int i =0;i<n;i++){
        arr[i] *= 2;
    }
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    multipleOfTwo(arr,n);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}