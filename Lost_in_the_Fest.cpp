#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
  int n;cin>>n;
  vector<int>arr(n);
  for(auto &it:arr)cin>>it;
  for(int i=0;i<n;i++){
    if(arr[i]>=arr[n-1]){
        cout<<(n-i-1); nl return;
    }
  }

}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
