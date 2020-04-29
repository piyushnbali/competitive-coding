#include <bits/stdc++.h>
using namespace std;

int main(){
  /* test cases failed while I tried to use int, so I have used long long */
  long long i,j,x,cases,hs;
  
  /* used a set of pairs to avoid duplication of pairs */
  set<pair<long long,long long>> s;
  long long v[10][10];
  
  //input
  cin>>cases;
  for (i=0;i<10;++i){
    for (j=0;j<10;++j){
      cin>>x;
      v[i][j]=x;
    }
  }
  
  //solution
  /* making all the possible pairs (with 0th index) in each row of 10x10 matrix and inserting them in set */
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
  /* final answer= all possible handshakes - the size of set i.e. the number of pairs that would not shake hands */
  hs = (cases*(cases-1))/2;
  cout<<hs-s.size();
  return 0;
}
