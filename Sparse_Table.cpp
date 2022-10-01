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
///////////////////////////////////////////////////////////
int table[200006][25];
int Log[200006];
void buildSparseTable(int a[],int n){
    Log[1]=0;
    for(int i=2;i<n+5;i++){
        Log[i]=Log[i/2]+1;
    }
    for(int i=0;i<n;i++){
        table[i][0]=a[i];
    }
    for(int j=1;j<=Log[n];j++){
        for(int i=0;i+(1<<j)<=n;i++){
            table[i][j]=__gcd(table[i][j-1],table[i+(1<<(j-1))][j-1]);
        }
    }
}
int query(int l,int r){
    int j=Log[r-l+1];
    return __gcd(table[l][j],table[r-(1<<j)+1][j]);
}

///////////////////////////////////////////////////////////
void solve(){
    int a[]={465, 55, 3, 54, 234, 12, 45, 78};
    buildSparseTable(a,8);
    cout<<query(2,7)<<endl;
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
