#include<iostream>
using namespace std;
void changeArray(int arr[],int n,int i){
    if(i == n){
        return;
    }
    arr[i] = arr[i] + 1; //forward moving
    changeArray(arr,n, i+1);
    arr[i] = arr[i] - 2; //preformed while coming back
}
int main(){
    int arr[] = {1,2,3,4,5};
    changeArray(arr,5,0);
    for(int i = 0; i<5 ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}