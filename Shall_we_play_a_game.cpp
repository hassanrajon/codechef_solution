#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
const int mx=2e5+10;
const ll mod = 998244353;
vector<ll>power_of_two(mx);
void pre(){
    power_of_two[0]=1;
    for(int i=1;i<power_of_two.size();i++){
        power_of_two[i]=(power_of_two[i-1]*2)%mod;
    }
}
void solve()
{ 
    int n;cin>>n;
    if(n&1){
       cout<<power_of_two[n-1];nl
    }else{
        cout<<(power_of_two[n-1]+power_of_two[n-2])%mod;nl
    }
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    pre();
    cin >> tt;
    while (tt--){
        solve();
     }
}
