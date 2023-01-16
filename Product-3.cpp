#include<bits/stdc++.h>
#define Rep(i,a,n) for (int i=int(a); i<int(n); i++)
#define rep(i,n) Rep(i,0,n)
#define dbg(x) cout<<#x<<" - > "<<x<<" ";
#define ell cout<<"\n"
#define elr ell; return
#define ll long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define lb(c, x) distance((c).begin(), lower_bound(all(c), (x)))
#define ub(c, x) distance((c).begin(), upper_bound(all(c), (x)))
using namespace std;
const ll mod=1000000007,mod1=998244353,INF=1e17,MAX=1e18;
ll gcd(ll a,ll b) {
        if(b==0) return a;
        return gcd(b,a%b);
}
ll bigPow(ll a, ll d, ll m) {
	if (a % m == 0) return 0;
	a %= m;
	if (d == 0) return 1LL;
	ll r = bigPow(a, d / 2, m);
	r = (r * r) % m;
	if ((d % 2) == 1)
		r = (r * a) % m;
	return r;
}
void solve(){
        ll a,b;
        vector<int> A,B;
        A.pb(0),B.pb(0);
        cin>>a>>b;
        a%=INF;
        b%=INF;
        while(a>0){
            A.pb(a%10);
                a/=10;
        }
        while(b>0){
            B.pb(b%10);
                b/=10;
        }
        //rep(i,A.size()) cout<<A[i]<<' '; ell;
        //rep(i,B.size()) cout<<B[i]<<' '; ell;
        ll ans=0;
        Rep(i,1,A.size()){
                Rep(j,1,B.size()){
                        if(i+j<=18){
                                ans+=A[i]*B[j]*bigPow(10,i+j-2,INF);
                                ans%=INF;
                                //dbg(ans) ell;;
                        }
                }
        }
        cout<<(ans)%INF; 
}
int main(){
        ios::sync_with_stdio(false); cin.tie(nullptr);
        //cin.tie(0); cout.tie(0);
        int tt=1; //cin>>tt;
        while(tt--) solve();
}