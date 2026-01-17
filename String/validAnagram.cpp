#include<iostream>
#include<string>
using namespace std;
bool validAnagram(string str1,string str2){
    if(str1.length() != str2.length()){
        return false;
    }
    int count[26];
    for(int i = 0;i<str1.length();i++){
        if(str1[i] <='a' && str1[i] >= 'z') continue;
        int idx = str1[i] - 'a';
        count[idx]++;
    }
    for(int i = 0;i<str2.length();i++){
        if(str2[i] <='a' && str2[i] >= 'z') continue;
        int idx = str2[i] - 'a';
        if(count[idx] == 0){
            cout<<"Not Valid Anagram."<<endl;
            return false;
        }
        count[idx]--;
    }
    cout<<"Valid Anagram"<<endl;
    return true;
}
int main(){
    string str1 = "neji 55hyuga",str2 = "huyga 55neji";
    cout<<validAnagram(str1,str2)<<endl;
    return 0;
}