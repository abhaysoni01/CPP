#include<iostream>
#include<vector>
using namespace std;
int firstOccer(vector<int> arr,int i,int target){
    //Base Case
    if(i == arr.size()){
        return -1;
    }
    if(arr[i] == target){
        return i;
    }
    return firstOccer(arr,i+1,target);

}
int main(){
    vector<int> arr = {1,2,5,4,5,6,7,5};
    int ans = firstOccer(arr,0,5);
    cout<<"First Occur at: "<<ans <<endl;
    return 0;
}