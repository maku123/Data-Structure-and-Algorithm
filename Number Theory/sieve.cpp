#include<bits/stdc++.h>
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define all(x) (x).begin(),(x).end()
#define sz(x) (int)((x).size())
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define int long long
typedef unsigned long long ull;
typedef long double ld;
using namespace std;
const int INF=1e16+1;
const int mod=1000000007;
//const int mod=998244353;
////////////////////////////////////////////////////////////////////

vector<int> prime;
void sieve(int n){
    vector<bool> isPrime(n+1,true);
    isPrime[0]=isPrime[1]=0;
    for(int i=2;i*i<=n;i++){
        if(isPrime[i]){
            for(int j=i*i;j<=n;j+=i){
                isPrime[j]=0;
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(isPrime[i]){
            prime.push_back(i);
        }
    }
}

////////////////////////////////////////////////////////////////////
void solve(){
    sieve(100);
    for(auto x:prime)cout<<x<<endl;
}
int32_t main(){
    fast;
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
