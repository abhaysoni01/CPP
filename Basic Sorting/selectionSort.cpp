#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void selectionSort(int *arr,int n){
    for(int i=0;i<n;i++){
        int minIdx = i;
        for(int j = i;j<n;j++){
            if(arr[j] < arr[minIdx]){
                minIdx = j;
            }
        }
        swap(arr[minIdx],arr[i]);
    }
    print(arr,n);
}
int main(){
    int arr[] =  {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    int n = sizeof(arr)/sizeof(int);
    selectionSort(arr,n);

}