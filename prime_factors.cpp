#include<bits/stdc++.h>
using namespace std;
void primeFactors(int n){
    vector<int> factors;
    while(n%2==0){
        factors.push_back(2);
        n/=2;
    }
    for(int i=3;i<=sqrt(n);i+=2){
        while(n%i==0){
            factors.push_back(i);
            n/=i;
        }
    }
    if(n>2)factors.push_back(n);

    for(auto x:factors)cout<<x<<" ";
    cout<<endl;
}
void solve(){
    primeFactors(1000);
}
int main(){
    int t=1;
    while(t--){
        solve();
    }
    return 0;
}
