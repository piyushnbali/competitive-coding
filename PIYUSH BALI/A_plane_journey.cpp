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

int find_group(int cap,bool * taken,vector<int > A)
{
    for(int i=A.size()-1;i>=0;i--)
    {
         if(taken[i]==false && A[i]<=cap)
         {
             taken[i]=true;
              return 1;
         }
    }
  return 0;
}
signed main()
{
   int n,m;
    cin>>n>>m;
    vector <int> A(n);
    vector <int> B(m);
    forci(0,n)
    {
        cin>>A[i];
    }
    forci(0,m)
    {
        cin>>B[i];
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    if(A[n-1]>B[m-1])
    {
        cout<<"-1";
    }
     bool taken[n]={ false };
     bool uddan[m]={ false };
    vector <int> trip(m,0);
    int ans= 0;
    //cout<<brk<<endl;

    while(ans!=m)
    {
        ans=0;
         
        forci(0,m)
        {
            int w=find_group(B[i],taken,A);
             if(w)
               { 
                   if(uddan[i]==false)
                  {
                   uddan[i]=true;
                   trip[i]+=1;  
                  }
                  else
                  {
                  uddan[i]=false;
                  trip[i]=trip[i]+2; 
                  }
               }
            else
              {
                      ans++;
             }
                  
               
        }
    
      
    
    }  


    sort(trip.begin(),trip.end(),greater<int>());
    cout<<trip[0];
    
    





 







































}

//https://www.youtube.com/watch?v=yl2GaxVGUaI