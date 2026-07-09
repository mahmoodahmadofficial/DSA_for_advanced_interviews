#include<iostream>
using namespace std;
void sum(int n){
    if(n<=5){
        cout<<n<<" ";
        sum(n+1);
    }
}
int main(){
     sum(1);
}