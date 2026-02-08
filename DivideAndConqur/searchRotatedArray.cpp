#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& arr, int st, int end, int target){
    if(st > end){
        return -1;
    }
    int mid = st + (end - st)/2;
    if(arr[mid] == target) return mid;
    if(arr[st] <= arr[mid]){
        if(arr[st] <= target && target < arr[mid]){
            search(arr,st,mid - 1,target);
        }
        else{
            search(arr,mid + 1,end, target);
        }
    }
    else{
        if(arr[mid] < target && target <= arr[end]){
            search(arr,mid + 1,end , target);
        }
        else{
            search(arr, st,mid - 1,target);
        }
    }
}

int main(){
    vector<int> arr = {4,5,6,7,8,9,0,1,2,3};
    int n = arr.size();
    cout << "Index of  4 is : "<<search(arr,0,n -1,4) << endl;
    return 0;
}