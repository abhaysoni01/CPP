#include<iostream>
using namespace std;
void print(int * arr,int n){
    for(int i = 0;i<n;i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
}

void bubbleSort(int *arr,int n){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j+1],arr[j]);
            }
        }
    }
}
void insertionSort(int *arr,int n){
    for(int i = 1;i<n;i++){
        int curr = arr[i];
        int prev = i - 1;
        while(prev >= 0 && arr[prev] > curr){
            // swap(arr[prev + 1],arr[prev]);
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
        cout << "for "<<i<<": ";
        print(arr,n);
    }
}
void selectionSort(int *arr,int n){
    for(int i =0;i<n;i++){
        int minIdx = i;
        for(int j = i+1;j<n;j++){
            if(arr[j] < arr[minIdx]){
                minIdx = j;;
            }
        }
        
        swap(arr[i],arr[minIdx]);
    }
}
int main(){
    int arr[] =  {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    int n = sizeof(arr)/sizeof(int);
    bubbleSort(arr,n);
    cout << "Bubble Sort: ";
    int arr2[] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }
    selectionSort(arr2,n);
    cout << endl;
    cout << "Selection Sort: ";
    
    for(int i =0;i<n;i++){
        cout << arr2[i] << " ";
    }
    int arr3[] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};

    cout << endl << endl;
    insertionSort(arr3,n);
    cout << "Insertion Sort: ";
    for(int i =0;i<n;i++){
        cout << arr3[i] << " ";
    }
    return 0;
}