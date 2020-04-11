#include<iostream>
#include<vector>
using namespace std;

int main(){
    long long int i,j,sumc,n,q;
    vector<vector<int> > m;
    vector <int> c;
    vector <int> t;
    cin >> q;
    while(q--){
        cin >> n;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cin >> m[i][j];
            }
        }
        for (i=0; i<n; i++){
            sumc += m[i][n-1];
        }
        for(i=0;i<n;i++){
            for(j=0;j<n-1;j++){
                c[i] = m[i][j];
                t[i] = sumc - m[i][n-1];
            }
        }
        for (i=0; i<n; i++){
            if(c[i]!=t[i]){
                cout << "Impossible";
                break;
            }
            else
                cout << "Possible";
        }
    }
}

