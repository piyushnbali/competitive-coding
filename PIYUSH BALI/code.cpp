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
ll expo(ll x, ll y) {ll res=1;x=x;while(y>0){if(y&1)res=(1ll*res*x);
    y=y>>1;x=(1ll*x*x);} return res;}
ll ncr(ll n,ll r){ ll res=1; if(r>n-r)r=n-r; for(ll i=0;i<r;i++) {  res*=n-i;  res/=i+1; } return res;}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  
  
  signed main()


  {


      vi ans;
      ans.pb(0);
      ans.pb(1);
      forci(2,100001)
      {
            ans[i] = pow(3,i-2)+1 ;
      }
      test{
              vi ans;
              ll m;
              cin>>m;
              ll k;
              cin>>k;
              string q;
              cin>>q;
              
              forci(0,m)
              {
                string s = "";
                forcj(0,m)
                {
                    if(i==j)
                      {
                        continue;
                      }
                      s = s+ q[i];
                }
                ans.pb(stoi(s)%k);
              }
              sort(ans.begin(),ans.end());
              cout<<ans[ans.size()-1]<<endl;

          }

  }
//https://www.youtube.com/watch?v=yl2GaxVGUaI
