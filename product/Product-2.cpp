#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int main(){
	long long a,b;
	cin>>a>>b;
	long long mod= 1e17;
	a%=mod;
	b%=mod;
	long long ard=0;
	vector<long long> v(50,0);
	while(b>0){
		long long c=b%10;
		c*=a;
		for(long long i=ard; i<50; i++){
			if(c==0){
				break;
			}
			v[i]+=c%10;
			c/=10;
		}
		b/=10;
		ard++;
	}
	for(long long i=0; i<50; i++){
		if(v[i]>=100){
			v[i+2]+=v[i]/100;
			v[i]%=100;
		}
		if(v[i]>=10){
			v[i+1]+=v[i]/10;
			v[i]%=10;
		}
	}
	vector<long long> ans;
	bool yes=1;
	for(long long i=16; i>=0; i--){
		if(v[i]>0){
			if(yes){
				cout<<v[i];
				yes=0;
			}
			else{
				cout<<v[i];
			}
		}
		else{
			if(!yes){
				cout<<v[i];
			}
		}
	}
	
}