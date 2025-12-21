#include<iostream>
using namespace std;
int binarySearch(int *arr,int n,int key){
    int l = 0,r = n-1;
    while(l<=r){
        int mid = (l + r)/2;
        if(arr[mid] == key) return mid;
        else if(arr[mid] > key) r = mid -1;
        else l = mid + 1;
    }
    return -1;
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    cout<<"Element is at index :"<<binarySearch(arr,n,1);
    return 0;
    
}