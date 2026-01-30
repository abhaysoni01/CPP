#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void countingSort(int *arr,int n){
    int freq[1000]={0},maxVal = INT32_MIN,minVal = INT32_MAX;
    for(int i =0;i<n;i++){
        freq[arr[i]]++;
        minVal = min(minVal,arr[i]);
        maxVal = max(maxVal,arr[i]);
    }
    for(int i = minVal,j=0;i<=maxVal;i++){
        while(freq[i]>0){
            arr[j++] = i;
            freq[i]--;
        }
    }
    print(arr,n);
}
int main(){
    int arr[] =  {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    int n = sizeof(arr)/sizeof(int);
    countingSort(arr,n);

}