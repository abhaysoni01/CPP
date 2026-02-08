#include<iostream>
#include<string>
using namespace std;
void removeDup(string str, string ans, int i,int map[26]){
    // Base case
    if(i == str.size()){
        cout << ans << endl;
        return;
    }
    char ch = str[i];
    int idx = (int)ch - 'a';
    if(map[idx]){
        removeDup(str,ans,i + 1,map);
    }
    else{
        map[idx] = true;
        removeDup(str,ans + ch,i + 1,map);
    }
}
void removeDup(string str,string ans,int map[26]){
    if(str.size() == 0){
        cout << ans << endl;
        return;
    }
    int n = str.size();
    char ch = str[n - 1];
    int idx = (int)(ch - 'a');
    str = str.substr(0,n - 1);

    if(map[idx]){
        removeDup(str,ans,map);
    }
    else{
        map[idx] = true;
        removeDup(str,ans+ch,map);
    }
}
int main(){
    string str = "appnnacollege";
    string ans = "";
    string str1 = "appnnacollege";
    string ans1 = "";
    int map[26] = {false};
    removeDup(str,ans,0,map);
    int map1[26] = {false};
    removeDup(str1,ans1,map1);
    return 0;
}