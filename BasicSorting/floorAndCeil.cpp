#include<iostream>
#include<vector>
using namespace std;
int floorVal(vector<int> &arr,int x){
    int n = arr.size();
    int low = 0,high = n-1;
    int ans = arr[high];
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] <= x){
            ans = arr[mid];
            cout<<mid<<" ";
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
        return ans;
    }
}
int main(){
    vector<int> arr = {3, 4, 4, 7, 8, 10};
    int n = 6, x = 5;
    int ans = floorVal(arr,x);
    cout << "The floor and ceil are: " << ans  << endl;
    return 0;
}