#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> v={1,1,1,1,2,2,2,3,3,3,4}; //7
  int start=0,end=v.size()-1,mid;
  while(start<=end){
    mid=(start+end)/2;
    if(v[mid]==3){
      if(v[mid-1]!=3){
        cout<<"\nfound at index "<<mid;
        break;
      }
      else{
        end=mid-1;
      }
    }
    else{
      if(v[mid]<3){
        start=mid+1;
      }
      else{
        end=mid-1;
      }
    }
  }
  return 0;
}
