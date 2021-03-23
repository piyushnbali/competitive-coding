/* Name:- Piyush Nandkishor Bali
   Class:- TY D Computer
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
ll gcd(ll a,ll b){    if(b==0) return a;    return gcd(b,a%b);}
ll lcm(ll a,ll b) {    return (a/gcd(a,b)*b);}
ll expo(ll x, ll y) {ll res=1;x=x%mod;while(y>0){if(y&1)res=(1ll*res*x)%mod;
    y=y>>1;x=(1ll*x*x)%mod;} return res;}
ll ncr(ll n,ll r){ ll res=1; if(r>n-r)r=n-r; for(ll i=0;i<r;i++) {  res*=n-i;  res/=i+1; } return res;}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
vector<ll>prime;

void primerange(int l,int h)
{
     int f;
    while (l < h)
    {
        f = 0;

        for(int i=2; i <= l/2;++i)
        {
            if(l % i == 0)
            {
                f = 1;
                break;
            }
        }

        if (f == 0)
            prime.push_back(l);

        ++l;
    }
}
signed main()
{
    primerange(2,500);
    
    ll ans=0;
    ll a,b;
    int x,flag;
    cin>>a>>b;
    forci(2,a/b)
    {   
        if(!(binary_search(prime.begin(),prime.end(),i)))
                         {continue;}
        flag=1;
        x=i;
        while(x<=a)
        {
            if(!(binary_search(prime.begin(),prime.end(),x)))
                                 flag=0;
            x=x+a/b;
        }
        if(flag)
           ans++;
        
    }
    cout<<ans;
   
}

