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
 int amt(string s1,string s2)
 {  int val=0;
    for(i=s1.size();i>0;i--)
    {
        if(s1[i]==s2[s2.size()-1])
        {
            

        }
            
    
 }
signed main()
{
   string p;
   string f;
   getline(cin, p);
   getline(cin,f);
   forci(0,p.length())
   {
       if(p[i]==' ')
              continue;
         size_t found = f.find(p[i]);
        if( found!=string::npos)
        {

        }else
        {
            
        }
             
   }
   
   
}

