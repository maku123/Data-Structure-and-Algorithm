#include<bits/stdc++.h>
using namespace std;

int lisLength(int a[],int n){
    vector<int> dp;
    dp.push_back(a[0]);
    for(int i=1;i<n;i++){
        if(a[i]>dp.back()){
            dp.push_back(a[i]);
        }
        else{
            int j=lower_bound(dp.begin(),dp.end(),a[i])-dp.begin();
            dp[j]=a[i];
        }
    }
    return dp.size();
}
void solve(){
    int n=16;
    int a[]={0,8,4,12,2,10,6,14,1,9,5,13,27,14,17,0};
    cout<<lisLength(a,n)<<endl;
}
int main(){
    int t=1;
    while(t--){
        solve();
    }
    return 0;
}
