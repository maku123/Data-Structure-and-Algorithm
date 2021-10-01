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
// function to calculate the number of co-primes of number N in range 1 to N (inclusive)
int phi(int N) {
    int result = N;
    for (int i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            while (N % i == 0)
                N /= i;
            result -= result / i;
        }
    }
    if (N > 1)
        result -= result / N;
    return result;
}
////////////////////////////////////////////////////////////////////
void solve(){
    sieve(100);
    cout << phi(100) << "\n";
    
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
