// God is Great
/* Piyush Bali:- WHY SOMETHING IS IMPOSSIBLE?
*/ 
#include<bits/stdc++.h>
using namespace std;
#define ll                   long long
#define ld                   long double
#define pb                   push_back
#define vi                   vector<int>
#define scf                  scanf
#define pf                   printf
#define MAX                  1e9
#define MIN                  -1e9
#define mod                  1000000007
#define mod9                 1000000009
#define pi                   3.1415926535
#define forci(p,n)           for(ll i=p;i<(ll)n;i++)
#define forcj(p,n)           for(ll j=p;j<(ll)n;j++)
#define bolt                 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define test                 ll t;cin>>t;while(t--)
//https://youtu.be/miZlLXzVL8I

ll gcd(ll a,ll b){    if(b==0) return a;    return gcd(b,a%b);}
ll lcm(ll a,ll b) {    return (a/gcd(a,b)*b);}
ll expo(ll x, ll y) {ll res=1;x=x%mod;while(y>0){if(y&1)res=(1ll*res*x)%mod;
    y=y>>1;x=(1ll*x*x)%mod;} return res;}
ll ncr(ll n,ll r){ ll res=1; if(r>n-r)r=n-r; for(ll i=0;i<r;i++) {  res*=n-i;  res/=i+1; } return res;}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

signed main()
{
    ll n,m,a,b;
    ll l1,l2,ene;
    ll sta,slp;
    ll stamina=0;
    ll sleep=0;
    cin>>n>>m>>a>>b;
    ll dp[n+1][n+1];
    memset(dp,0,sizeof(dp));
    forci(0,m)
    {
          cin>>l1>>l2>>ene;
          dp[l1][l2]=ene;
          dp[l2][l1]=ene;
    }
    vector<pair<ll,ll>> sl;
    forci(0,n)
    {
        cin>>sta>>slp;
        sl.push_back(make_pair(sta,slp));
        
    }

   ll flag;
   while(a!=b)
   {
       flag=1;
       for(ll i=b;i>a;i--)
       {
           if(stamina>=dp[a][i] && dp[a][i]!=0)
                   {
                        stamina=stamina-dp[a][i];
                         a=i;
                        flag=0;
                        break;
                   }
                    
       }
     if(flag)
         {
                      sleep=sleep+sl[a-1].second;
                     stamina=sl[a-1].first;
         }

   }
  cout<<sleep;
  





































}

//https://www.youtube.com/watch?v=yl2GaxVGUaI