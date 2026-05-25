#include<iostream>
using namespace std;

int main(){
    int arr[10] = {25};
    for(int i =0;i<10;i++)
        cout << arr[i] <<endl;
    int temp = 89;
    int &b = temp;
    *arr = b;
    // arr = b; error due to constant point of array
    cout<<(*arr)++<<endl;
    for(int i =0;i<10;i++)
    cout<<(arr + i)<<endl;

    return 0;
}

