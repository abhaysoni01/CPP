#include<iostream>
using namespace std;

int partition(int arr[],int si ,int ei){
    int j = si;
    int i = si - 1;
    while(j < ei){
        if(arr[j] <= arr[ei]){
            i++;
            swap(arr[j],arr[i]);
        }
        j++;
    }
    swap(arr[i + 1],arr[ei]);
    return i + 1;
}
void quickSort(int arr[],int si, int ei){
    if(si >= ei){
        return;
    }
    int pivotIdx = partition(arr,si,ei);
    quickSort(arr,si,pivotIdx - 1);
    quickSort(arr,pivotIdx + 1,ei);
}
int main(){
    int arr[] = {3,2,5,7,6,4};
    int n = sizeof(arr)/sizeof(int);
    quickSort(arr,0,n-1);
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}