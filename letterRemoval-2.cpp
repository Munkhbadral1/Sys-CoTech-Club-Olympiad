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
        const ll mod=1000000007,mod1=998244353,INF=1e18,MAX=1e9;
        ll gcd(ll a,ll b) {
                if(b==0) return a;
                return gcd(b,a%b);
        }
        ll bPow(ll a,ll b,ll mod){
                ll d=1;
                while(b>0){
                        if(b%2==1) d=d*a%mod;
                        b/=2;
                        a=a*a%mod;
                }
                return d;
        }

        void solve(){
                int n,q;
                string s;
                cin>>n>>q>>s;
                while(q--){
                        int l,r;
                        string p;
                        string S="";
                        cin>>l>>r>>p;
                        int id=0;
                        for(int i=l-1; i<r; ++i){
                                if(s[i]==p[id]){
                                        S+=s[i];
                                        id++;
                                }
                        }
                        if(S==p) cout<<"YES";
                        else cout<<"NO"; ell;
                }
        }
        int main(){
                ios::sync_with_stdio(false); cin.tie(nullptr);
                //cin.tie(0); cout.tie(0);
                int tt=1; //cin>>tt;
                while(tt--) solve();
        }
        // 4 6
        // 4 4 1 1
