#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
#define all(r) r.begin(), r.end()
#define yes cout << "YES\n";
#define no cout << "NO\n";
void solve()
{ 
    vector<int>arr(3);
    for(auto &it:arr)cin>>it;
    int zero=0;
    for(auto it:arr){if(it==0)zero++;}
    if(zero==1){
        sort(all(arr));
        cout<<min(arr[1],arr[2]);nl
    }else if(zero==2){
        cout<<(0);nl
    }else{
        sort(all(arr));
        int ans=0;
        if(arr[0]&1 && arr[1]&1){
            ans=(arr[0]+arr[1])-1;
        }else{
            ans=(arr[0]+arr[1]);
        }
        cout<<ans;nl
    }
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--){
        solve();
     }
}
