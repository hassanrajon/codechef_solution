#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
void solve()
{ 
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int right=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='1'){
        right=i;break;
        }
    }
   int cnt=count(s.begin(),s.begin()+right,'0');
   if(k>=cnt){
    cout<<(count(s.begin(),s.end(),'1'))+cnt;nl
   }else{
    cout<<(count(s.begin(),s.end(),'1'))+k;nl
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
