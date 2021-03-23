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
ll dp[11][19];
vector<vi>allow;
vi ed;
vector<ll> R;
int todo(ll a)
     {
         if(a==0)
          { return 1;}

           R.pb(a%10);
         return todo(a/10);
}
ll f(ll x)
{
    if(x<1)
      return 1;

    forci(0,19)
    {
        dp[x][i]=expo(x,i);
    }
    
    f(x-1);
}
ll solve(ll r,ll k)
{
     todo(r);
     ll ans=0;
     int cnt=0;
     int flag=1;
     forci(0,R.size())
     {  cnt=0;
        flag=1;
         forcj(0,allow[k].size())
         {    //cout<<allow[k][j]<<" "<<R.size()<<" "<<R[R.size()-i-1];
             if(allow[k][j] <  R[R.size()-i-1])
                   {cnt++;}
              if(allow[k][j]==R[R.size()-i-1])
              {
                    flag=0;
              }     
         }
         //cout<<"cnt for "<<i<<":"<<cnt<<" "<<R[R.size()-i-1]<<" "<<R.size()-i-1<<"dfgfg";
         ans=ans+cnt*dp[allow[k].size()][R.size()-i-1];
        // cout<<i<<" "<<ans<<"g";
         if(flag)
         {
                 break;
         }
         if(i==R.size()-1 && ((R[0])%k)==0)
               ans++;

     }
     R.clear();
    return ans;
    
}

signed main()
{
     memset(dp,0,sizeof(dp));
     
     allow.pb(ed);
     ed.clear();
    
     forci(1,10)
     {
        forcj(0,10){
            
            if(!(j%i))
                 ed.pb(j);
        }
        allow.pb(ed);
        ed.clear();
    }
 f(10);

 /*(forci(2,11)
 {
     forcj(0,19)
     {
         cout<<dp[i][j]<<"\t";
     }
     cout<<endl;
 }*/
 test
 {
     ll l,r,k;
     cin>>l>>r>>k;
     cout<<solve(r,k)-solve(l-1,k)<<endl;
    
 }
   
}







//https://www.youtube.com/watch?v=yl2GaxVGUaI