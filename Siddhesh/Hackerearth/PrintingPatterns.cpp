#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,j,r,c,cr,cc;
    cin>>r>>c>>cr>>cc;
    for (i=0;i<r;++i){
        for (j=0;j<c;++j){
            cout<<max(abs(cr-i),abs(cc-j))<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
