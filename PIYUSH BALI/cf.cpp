#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 

void solve(){
    int x;
    cin>>x;
    string s;
    cin>>s;
    pair<int,pair<int,int>> cnt0(0,make_pair(0,0));
    pair<int,pair<int,int>> cnt1(0,make_pair(0,0));
    pair<int,pair<int,int>> max0(0,make_pair(0,0));
    pair<int,pair<int,int>> max1(0,make_pair(0,0));
    forn(i,s.length())
    {
        if(s[i]=='0')
        {
            if(cnt0.fi==0)
            {
                cnt0.fi++;
                cnt0.se.fi=i;
                if(cnt1.fi>max1.fi)
                       {max1.fi=cnt1.fi; max1.se.fi=cnt1.se.fi; max1.se.se=cnt1.se.se;}
                cnt1.fi=0;
            }
            else
            {
                cnt0.fi++;
                cnt0.se.se=i;
            }
        }
        else
        {
            if(cnt1.fi==0)
            {
                cnt1.fi++;
                cnt1.se.fi=i;
                if(cnt0.fi>max0.fi)
                       {max0.fi=cnt0.fi; max0.se.fi=cnt0.se.fi; max0.se.se=cnt0.se.se;}
                cnt0.fi=0;
            }
            else
            {
                cnt1.fi++;
                cnt1.se.se=i;
            }
        }
    }

int ans=0;

    if(max1.fi>max0.fi)
    {
        int count1= count(s.begin(),s.begin()+max1.se.fi,'1');
        int count2 = count(s.begin(),s.begin()+max1.se.fi,'0');
        ans+= min(count1,count2);
        ans+= count(s.begin()+max1.se.fi,s.end(),'0');
    }
    else
    {
        int count1= count(s.begin(),s.begin()+max1.se.fi,'1');
        int count2 = count(s.begin(),s.begin()+max1.se.fi,'0');
        ans+= count1;
        ans+= count(s.begin()+max1.se.fi,s.end(),'0');
    }
    cout<<ans;
}
int main()
{
 fast_cin();
 ll t;
 cin >> t;
 for(int it=1;it<=t;it++) {
     solve();
     cout<<"\n"; 
 }
 return 0;
}