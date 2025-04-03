#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a << " = " << (a) << '\n';
#define nl cout << '\n';
#define all(r) r.begin(), r.end()
#define yes cout << "Yes\n";
#define no cout << "No\n";
void solve()
{
   int n,k;cin>>n>>k;
   vector<int>a(n),b(n);
   for(auto &it:a)cin>>it;
   for(auto &it:b)cin>>it;
   int sum=0,mn=9;
   for(int i=0;i<n;i++){
      int d=abs(a[i]-b[i]);
      sum+=min(d,9-d);
      mn=min(mn,max(d,9-d)-min(d,9-d));
   }
   if(k>=sum){
     int d=k-sum;
     if(d%2==0 || d>=mn){
        yes
     }else{
        no
     }
   }else{
    no
   }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll tt = 1;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}
