#include<iostream>
using namespace std;
void search(int arr[][4],int n,int m){
    cout<<arr<<" == "<<&arr[0][0]<<endl;
}
void chk(int (*ptr)[4],int n,int m){
    cout<<ptr<<endl;
    cout<<*(*(ptr)  +1)<<endl;
}


int main(){
    int arr[4][4] = {{10,20,30,40},
                     {15,25,35,45},
                     {27,29,37,48},
                     {32,33,39,50}};
    search(arr,4,4);
    chk(arr,4,4);
    return 0;
}