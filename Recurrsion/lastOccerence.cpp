#include<iostream>
#include<vector>
using namespace std;
int lastOccer(vector<int> arr,int i,int target){
    //Base Case
    if(i == arr.size()){
        return -1;
    }
    int idxFound = lastOccer(arr,i+1,target);
    if(idxFound == -1 && arr[i] == target){
        return i;
    }
    return idxFound;

}
int LO(vector<int> arr,int i,int target){
    if(i < 0){
        return -1;
    }
    // int ids = LO(arr,i-1,target);
    if(arr[i] == target){
        return i;
    }
    return LO(arr,i-1,target);
}
int main(){
    vector<int> arr = {1,2,5,4,5,6,7,5};
    int n = arr.size() - 1;
    int ans = lastOccer(arr,0,10);
    int ans2 = LO(arr,n,10);
    cout<<"First Occur at: "<<ans <<endl;
    cout<<"First Occur at: "<<ans2 <<endl;

    return 0;
}