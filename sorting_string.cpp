#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<string>v(9);
	string st="mahmood1 is2 a3 good4 boy5";
	string s;
	for(int i=0;i<=st.size();i++){
		if(i==st.size() || st[i]==' '){
			int index=s.back()-'1';
			s.pop_back();
			v[index]=s;
			s.clear();
		}
		else{
		s.push_back(st[i]);
	}
		
	}
for(int i=0;i<v.size();i++){
	cout<<v[i]<<" ";
}    
	
	
	
}