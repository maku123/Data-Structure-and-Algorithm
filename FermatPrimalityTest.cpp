#include"bits/stdc++.h"
using namespace std;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
int power(int x,int y ){int res=1;while(y){if(y&1)res=(res*x);x=(x*x),y>>=1;}return res;}
int power(int x,int y , int m){int res=1LL;while(y){if(y&1)res=(res*x)%m;x=(x*x)%m,y>>=1;}return res;}

void inp_out(){ 
  #ifndef ONLINE_JUDGE 
  freopen("input.txt", "r", stdin); 
  freopen("output.txt", "w", stdout); 
  #endif 
  fio
}

// function to probably check if N (large number) is prime or not 

bool probablyPrimeFermat(int N, int iter=5) {
    if (N < 4)
        return N == 2 || N == 3;

    for (int i = 0; i < iter; i++) {
        int a = 2 + rand() % (N - 3);
        if (power(a, N - 1, N) != 1)
            return false;
    }
    return true;
}
int32_t  main(){ 
  inp_out();
   int t;
   cin >> t;
   while(t--) {
    int n;
    cin >> n;
    if(probablyPrimeFermat(n)) cout <<"YES\n";
    else cout<<"NO\n";
    

   }
   return 0; 
}
