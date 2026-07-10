#include<iostream>
#include<vector>
using namespace std;
// by use of recursion
int occurence(int a[],int n,int target){
    if(n==0){
        return 0;
    }
    if(a[n-1]==target){
        return 1+occurence(a,n-1,target);
    }
    else{
        occurence(a,n-1,target);
    }
}
// by use of iteration method
int occ(vector<pair<int,int>>& v,int a){
    for(auto i:v){
        if(i.first==a){
            return 1;
        }
    }
    return 0;
}
void find_occ(vector<int> &v){
    vector<pair<int,int>>s;
    for(int i=0;i<v.size();i++){
        int count=0;
        for(int j=0;j<v.size();j++){
            if(v[i]==v[j]){
                count++;
            }
        }
        int check=occ(s,v[i]);
        if(check==0){
            s.push_back({v[i],count});
        }
    }
    for( auto i:s){
        cout<<i.first<<" ocurr "<<i.second<<endl;
    }

}
int main(){
    int a[]={1,2,3,1,6};
    cout<<occurence(a,5,1);
    //find_occ(v);
 
}