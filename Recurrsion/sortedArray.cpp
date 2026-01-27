#include<iostream>
#include<vector>
using namespace std;
bool sortedArr(vector<int> arr,int i){
    if(i == arr.size() - 1){
        return true;
    }
    if(arr[i] > arr[i+1]){
        return false;
    }
    return sortedArr(arr,i+1);
}

int main(){
    vector<int> arr1 = {1,2,3,4,5,6,7,99};
    vector<int> arr2 = {1,2,3,4,5,6,99,7};
    int ans1 = sortedArr(arr1,0);
    int ans2 = sortedArr(arr2,0);

    cout<<"IS sorted: "<<ans1<<endl;
    cout<<"IS sorted: "<<ans2<<endl;

    return 0;
}