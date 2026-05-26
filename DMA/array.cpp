#include<iostream>
using namespace std;

int main(){
    int rows,col ;
    cin >> rows  >> col;
    int **arr = new int*[rows];
    for(int i = 0;i<rows;i++){
        arr[i] = new int[col];
    }
    for(int i = 0;i<rows;i++){
        for(int j = 0;j<col;j++){
            arr[i][j] = j + 1;
        }
    }
    *(*(arr + 3) + 1) = 25;
    cout << *(*(arr + 3) + 1) << endl;
    for(int i = 0;i<rows;i++){
        for(int j = 0;j<col;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;

}