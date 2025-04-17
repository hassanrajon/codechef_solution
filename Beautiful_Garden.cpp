#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
   int n,k,d;cin>>n>>k>>d;
   vector<int>arr(n);
   vector<int>days(n);
   for(auto &it:arr)cin>>it;
   sort(arr.begin(),arr.end());
   while(k--){
    arr.pop_back();
   }
   int ans=0;
   for(int i=0;i<arr.size();i++){
    if(arr[i]>=d){ans++;arr[i]=0;}
    else{
        ans++;
        days[i]=1+arr[i];
    }
   }
   for(int i=2;i<=d;i++){
    for(int j=0;j<arr.size();j++){
        if(arr[j]>0 && days[j]==i){
            ans++;
            days[j]+=arr[j];
        }
    }
   }
   cout<<ans;nl
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
