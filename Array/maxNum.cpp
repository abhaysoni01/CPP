#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int maxi = INT16_MIN;
    cout<<maxi<<endl;
    for(int i= 0;i<n;i++){
        if(arr[i] > maxi) maxi = arr[i];
    }
    cout<<"Max element in array is: "<<maxi<<endl;
    return 0;
}