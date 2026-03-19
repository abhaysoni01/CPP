#include<iostream>
#include<vector>
using namespace std;
void permute(string str,vector<string>& ans,string sub){
    if(str.size() == 0){
        ans.push_back(sub);
        return ;
    }
    int n = str.size();
    for(int i = 0; i<n ;i++){
        char ch = str[i];
        string newStr = str.substr(0,i) + str.substr(i + 1, str.size());
        permute(newStr , ans , sub + ch);
    }
}
int main(){
    string str = "abc";
    vector<string> ans;
    permute(str, ans, "");
    for(string s : ans){
        cout << s << " ";
    }
    return 0;
}