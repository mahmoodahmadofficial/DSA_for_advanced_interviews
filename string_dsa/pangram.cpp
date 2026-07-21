#include<iostream>
#include<vector>
using namespace std;
void pangram(string s){
    vector<int>v(26,0);
    for(int i=0;i<s.size();i++){
        int index=s[i]-'a';
        v[index]=1;
    }
    for(int i=0;i<26;i++){
        if(v[i]==0){
            cout<<"string is not pangram "<<endl;
            return;
        }
    }
    cout<<"string is a pangram "<<endl;
}
int main(){
    string s="abcdefghijklmnopqrstuvwxyz";
    pangram(s);
}