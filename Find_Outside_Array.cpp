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
  sort(arr.begin(),arr.end());
  if(arr[0]==arr[n-1] && arr[0]==0){
    cout<<(-1);nl
  }else{
    cout<<arr[n-1]<<' '<<arr[n-1];nl 
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
