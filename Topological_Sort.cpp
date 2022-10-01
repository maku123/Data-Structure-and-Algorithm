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

/////////////////////////////////////////////////////////////////
//Kahn's algorithm
vector<int> adj[200005];
int in[200005];
vector<int> ans;
void topological_sort(int n){
    queue<int> q;
    for(int i=1;i<=n;i++){
        if(in[i]==0)q.push(i);
    }
    while(!q.empty()){
        int cur=q.front();
        ans.push_back(cur);
        q.pop();
        for(auto node:adj[cur]){
            in[node]--;
            if(in[node]==0){
                q.push(node);
            }
        }
    }
}
/////////////////////////////////////////////////////////////////
void solve(){
    int n=5,m=5;
    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        //x---->y
        adj[x].push_back(y);
        in[y]++;
    }
    topological_sort(n);
    for(auto x:ans)cout<<x<<" ";
    cout<<endl;
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
