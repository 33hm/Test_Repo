#pragma GCC optimize ("trapv")
#include <bits/stdc++.h>
#include<algorithm>
#include <vector>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<cstdlib>
#include<sstream>
#include <string.h>
using namespace std;
#define pb push_back
#define all(v) v.begin(),v.end()
#define  rep(i,n,v) for(i=n;i<v;i++)
#define per(i,n,v) for(i=n;i>v;i--)
#define ff first 
#define ss second 
#define pp pair<ll,ll>
#define ll  long long
#define ld  long double
#define endl "\n"
 
const ll mod=1e9+7;
void solve()
{
ll  n, a=0,b=0,m=1, c=-1,k=0, i=0, j=0, l=1e9+5;
string s,p, q,pi;
cin>>s>>p>>q>>pi;
string ans;
rep(i,0,pi.size()){
    if(pi[i]-'0'==1) ans+=s;
    else if(pi[i]-'0'==2) ans+=p;
    else ans+=q;
    // n/=10;
}
//reverse(all(ans));
cout<<ans;
}
int main()
{
ios_base::sync_with_stdio(false);
cin. tie(0);cout. tie(0);
ll t=1;
//cin>>t;
while(t--)
{
solve();
}
return 0;
}