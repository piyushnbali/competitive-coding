#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include<cmath> 
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
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

 

void solve(){
    double pi= 3.141592653589793;
    int c1r1;
    int c2r2;
    int s1;
    int s2;
    int t;
    int d;
    cin>>c1r1>>c2r2>>s1>>s2>>t>>d;
    
    if(c1r1+c2r2 < d)
    {
         cout<<"no crash";
         return ;
    }
    if(c1r1+c2r2==d)
    {
        s1=abs(s1);
        s2=abs(s2);
        set<int> t1;
        set<int> t2;
        set<int> ansset;
        int lt=0;
        int i=2;
        while(lt<=t)
        {
            lt= floor((i*pi*c1r1)/s1);
            i=i+2;
            if(lt<=t)
            {
                t1.insert(lt);
            }
        }
        lt=0;
        i=2;
         while(lt<=t)
        {
            lt= floor((i*pi*c2r2)/s2);
            i=i+2;
            if(lt<=t)
            {
                t2.insert(lt);
            }
        }
       
        set_intersection(t1.begin(),t1.end(),t2.begin(),t2.end(),inserter(ansset,ansset.begin()));
        if(ansset.empty())
        {
            cout<<"no crash";
            return;
        }else
        {
            cout<<*ansset.begin()<<" E&F";
            return;
        }
    }
    set<int> t1;
    set<int> t2;
    set<int> ansset;
    double cosinv1 = ((double)(c1r1*c1r1+d*d-c2r2*c2r2))/(2*d*c1r1);
    double ang1= acos(cosinv1);
    double cosinv2 = ((double)(c2r2*c2r2+d*d-c1r1*c1r1))/(2*d*c2r2);
    double ang2= acos(cosinv2);
    double w1= 2*pi/s1;
    double w2= 2*pi/s2;
    if(w1>0)
    {
        int lt=0;
        lt = (2*pi-ang1-ang1)/w1;
        double tre= (double)(2*pi*c1r1)/abs(s1);
        int i=0;
        while(lt+i*tre<=t)
        {
            t1.insert(floor(lt+i*tre));
            i++;
        }
        
    }
    else
    {
        int lt=0;
        lt = (ang1+ang1)/abs(w1);
        double tre= (double)(2*pi*c1r1)/abs(s1);
        int i=0;
        while(lt+i*tre<=t)
        {
            t1.insert(floor(lt+i*tre));
            i++;
        }
    }
if(w2>0)
    {
        int lt=0;
        lt = (2*pi-ang2-ang2)/w2;
        double tre= (double)(2*pi*c2r2)/abs(s2);
        int i=0;
        while(lt+i*tre<=t)
        {
            t2.insert(floor(lt+i*tre));
            i++;
        }
        
    }
    else
    {
        int lt=0;
        lt = (ang2+ang2)/abs(w2);
        double tre= (double)(2*pi*c2r2)/abs(s2);
        int i=0;
        while(lt+i*tre<=t)
        {
            t2.insert(floor(lt+i*tre));
            i++;
        }

    }

set_intersection(t1.begin(),t1.end(),t2.begin(),t2.end(),inserter(ansset,ansset.begin()));
        if(ansset.empty())
        {
            cout<<"no crash";
            return;
        }else
        {
            cout<<*ansset.begin();

            return;
        }

    
}
int main()
{
 fast_cin();

     solve();
 
 return 0;
}