#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> vec;
    for(int i =0;i<10;i++){
        vec.push_back(i);
    }
    cout << "Capacity: "<<vec.capacity() << endl;
    cout << "front: "<<vec.front() << endl;
    cout << "data: "<<vec.data() << endl;
    // cout << "Clear: "<<vec.clear() << endl;
    vec.clear();
    cout << "Capacity: "<<vec.capacity() << endl;
    return 0;
}