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
const ll X=212072634227239451;
int q=0,z=0,y=0;
  int dp[1001][1001];
void factorize(long long n,vector<tuple<int,int,int>>fact[],ll i) 
{ 
    int a=0,b=0,c=0;
    ll q=n;
	while(q%107==0)
    {
        a++;
        q=q/107;
    }
    q=n;
    while(q%1361==0)
    {
        b++;
        q=q/1361;
    }
    q=n;
    while(q%10000019==0)
    {
        c++;
        q=q/10000019;
    }
    //cout<<a<<b<<c;
    fact[i].push_back(make_tuple(a,b,c));
} 


int count(int x,int y,vector<tuple<int,int,int>>fact[],int n,int m)
{

    if(x>n || y>m )
    {
        return 0;
    }
    if(x==n && y==m)
    { 
        return 1;}
    if(dp[x][y]!=-1) 
    {return dp[x][y];}

     q=get<0>(fact[x][y]);
     z=get<1>(fact[x][y]);
     y=get<2>(fact[x][y]);


    if(q==2 && z==2 && y==1)
    {
        return 0;
    }
    int right=count(x,y+1,fact,n,m);
    int left=count(x+1,y,fact,n,m);

    return dp[x][y]=right+left;


     
}

signed main()
{
    bolt
    ll n,m,a;
    cin>>n>>m;
  // vector<ll> A[n];
   vector<tuple <int,int,int>>fact[n];
 
   memset(dp,-1,size_t(dp));
    forci(0,n)
    {
       
        forcj(0,m)
        {
            cin>>a;
            
            factorize(a,fact,i);
        
        }
    }
        
   cout<<count(0,0,fact,n,m);
    //     forci(0,n)
    // {
       
    //     forcj(0,m)
    //     {
           
            
    //     //    cout<<get<0>(fact[i][j]);
    //     //      cout<<get<1>(fact[i][j]);
    //     //        cout<<get<2>(fact[i][j])<<" ";
        
    //     }
    //     cout<<"/n";
    }
    
  


    


 


}

//https://www.youtube.com/watch?v=yl2GaxVGUaI