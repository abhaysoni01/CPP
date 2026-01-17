#include<iostream>
#include<string>
using namespace std;
void toUpper(char str[],int n){
    for(int i=0;i<n;i++){
        char ch = str[i];
        if(ch >= 'a' && ch <= 'z'){
            str[i] = 'A' + ch - 'a';
        }
        else{
            continue;
        }

    }
}
int main(){
    char input[50];
    cin.getline(input,50);
    toUpper(input,50);
    cout<<input<<endl;
    return 0;
}