#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size,i,j;
    char x;
    cin>>size;
    char v[size][size];

    //input
    for (i=0;i<size;++i){
        for (j=0;j<size;++j){
            cin>>x;
            v[i][j]=x;
        }
    }

    for (i=1;i<size-1;++i){
        for (j=1;j<size-1;++j){
            if (v[i][j]>v[i][j-1] &&
            v[i][j]>v[i-1][j] &&
            v[i][j]>v[i][j+1] &&
            v[i][j]>v[i+1][j]
            ){
                v[i][j]='X';
            }
        }
    }

    for (i=0;i<size;++i){
        for (j=0;j<size;++j){
            cout<<v[i][j];
        }
        cout<<"\n";
    }
    return 0;
}
