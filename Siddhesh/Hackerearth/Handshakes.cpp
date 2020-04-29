#include <bits/stdc++.h>
using namespace std;

int main(){
  int i,j,x,cases,hs=0;
  //bool is_i_in_j, is_j_in_i;
  cin>>cases;
  int v[cases][10];
  for (i=0;i<cases;++i){
    for (j=0;j<10;++j){
      cin>>x;
      v[i][j]=x;
    }
  }
  
  //solution
  for (i=0;i<cases-1;++i){
    for (j=i+1;j<cases;++j){
      if (find(begin(v[i])+1,end(v[i]),v[j][0])==end(v[i])){
        //j not found in i's list
        if (find(begin(v[j])+1,end(v[j]),v[i][0])==end(v[j])){
          //i not found in j
          ++hs;
        }
      }
    }
  }
  cout<<hs;
  return 0;
}

/*
11
7 3 11 4 5 6 1 2 8 9
1 11 10 5 6 8 3 7 4 2
9 3 2 7 5 8 10 4 1 11
8 2 5 10 3 6 4 7 9 1
3 10 2 11 7 9 1 5 6 4
5 11 1 3 8 10 4 6 2 9
11 1 8 7 3 2 10 6 5 9
4 1 5 11 10 6 3 2 9 7
2 1 9 11 8 6 7 10 3 4
10 5 4 1 3 6 2 11 7 8
*/
