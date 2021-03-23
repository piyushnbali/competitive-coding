#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forci(p,n)           for(ll i=p;i<(ll)n;i++)
#define forcj(p,n)           for(ll j=p;j<(ll)n;j++)
#define v                     vector<ll>
#define int                    long long
#define bolt                 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define test                 ll t;cin>>t;while(t--)

vector<ll> arr;
void printPath(ll q,vector<ll> stack) 
{ 
    int i;
    int ans=0; 
    for (i = 0; i < (ll)stack.size(); i++) 
    { 
       ans+=arr[stack[i]];
    } 
    cout<<ans<<endl;
} 

void dfs(v tree[],bool vis[],int x,int y,v stack,ll q)
{
      stack.push_back(x);
      if(x==y)
     {
          printPath(q,stack); 
          return;}

      vis[x]=true;
      int flag=0;
      if(!tree[x].empty())
      {
          forci(0,tree[x].size())
          {
              if(vis[tree[x][i]]==false)
                  {  
                      dfs(tree,vis,tree[x][i],y,stack,q);
                    flag=1;
                    }
          }
      }
       if (!flag) { 
  
        stack.pop_back(); 
    }   
}
void DFSCall(int x, 
             int y, 
             vector<ll> tree[], 
             ll n, 
             vector<ll> stack,ll q) 
{ 
    // visited array 
    bool vis[n + 1]; 
  
    memset(vis, false, sizeof(vis)); 
  
    // DFS function call 
    dfs(tree, vis, x, y, stack,q); 
} 

signed main()
{        
         ll n;
         cin>>n;
         n=n+1;
         arr.resize(n,0);

         forci(1,n)
         {
             cin>>arr[i];
         }
        
         vector<ll> tree[n],stack;
         forci(1,n-1)
         {
             ll a,b;
             cin>>a>>b;
             tree[a].push_back(b);
             tree[b].push_back(a);
         } 
         ll h;
         cin>>h;
         forci(0,h)
         { int q,x,y;
            cin>>q>>x>>y;
            DFSCall(x,y,tree,n,stack,q);
             stack.clear();
              cout<<endl;
         }
       
         
return 0;
}