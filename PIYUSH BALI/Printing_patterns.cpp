#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
const int maxn = 3e2 + 14;
int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int r, c, x, y;
    cin >> r >> c >> x >> y;
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cout << max(abs(i - x), abs(j - y)) << " \n"[j==c-1];
}