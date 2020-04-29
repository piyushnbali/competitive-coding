#include <bits/stdc++.h>
using namespace std;

int main(){
  long long i,j,x,cases,hs=0;
  set<pair<long long,long long>> s;
  long long v[10][10];

  //Input
  cin>>cases;
  for (i=0;i<10;++i){
    for (j=0;j<10;++j){
      cin>>x;
      v[i][j]=x;
    }
  }
  
  //solution
  for (i=0;i<10;++i){
    for (j=1;j<10;++j){
      if (v[i][0]<v[i][j]){
        s.insert(make_pair(v[i][0],v[i][j]));
      }
      else{
        s.insert(make_pair(v[i][j],v[i][0]));
      }
    }
  }
  hs = cases*(cases-1);
  hs = hs/2;
  cout<<hs-s.size();
  return 0;
}
