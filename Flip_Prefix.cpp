#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
  int n;cin>>n;
  string s;cin>>s;
  int zero=0,one=0,cnt=0;
  for(int i=0;i<n;i++){
   zero+=(s[i]=='0');
   one+=(s[i]=='1');
//    cout<<s[i]<<' ';
   if(zero==one)cnt++;
  }
//   debug(cnt)
  ll ans=(cnt*(cnt+1)/2)-1;
  cout<<ans;nl
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
