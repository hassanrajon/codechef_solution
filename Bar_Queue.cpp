#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
   int n;cin>>n;
   string s;cin>>s;
   int chele=0,meye=0;
   for(int i=0;i<n;i++){
    if(s[i]=='G'){meye++;}else{
        chele++;
    }
    if(chele>(2*meye)){
        cout<<(i+1)<<'\n';return;
    }
   }
   cout<<n;nl
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
