#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
   ll n;cin>>n;
   vector<ll>arr(n);
   for(auto &it:arr)cin>>it;
   if(n==1){
    cout<<arr[0];nl return;
   }else if(n==3){
      ll x=max(arr[0]+1,arr[2]+1);
      x = max(x,arr[1]);
      cout<<x;nl return;
   }else{
      int indx = max_element(arr.begin(),arr.end())-arr.begin();
      ll ans=0;
      if(indx==0 || indx==n-1){
        ans=arr[indx]+(n-1)/2;
        cout<<ans; nl return;
      }else{
        if(indx&1){
            // debug(indx)
            for(int i=0;i<n;i++){
                if(arr[i]==arr[indx] && !(i&1)){
        
                ans=arr[indx]+(n-1)/2;
                cout<<ans; nl return;
                }
            }
            ans = arr[indx]+(n-3)/2;
            cout<<ans;nl return;
        }else{
            // debug(indx)
            ans=arr[indx]+(n-1)/2;
            cout<<ans; nl return;
        }  
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
