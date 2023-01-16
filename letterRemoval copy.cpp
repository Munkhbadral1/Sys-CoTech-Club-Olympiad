#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,q;
	cin>>n>>q;
	string s;
	cin>>s;
	while(q--){
		int l,r;
		cin>>l>>r;
		string t;
		cin>>t;
		l--;
		r--;
		int j=0;
		bool yes=0;
		for(int i=l; i<=r; i++){
			if(s[i]==t[j]){
				j++;
				if(j==t.size()){
					yes=1;
					break;
				}	
			}
		}
		if(yes) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		
	}
	
}