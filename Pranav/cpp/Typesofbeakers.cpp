#include <bits/stdc++.h>
#define ll long long
#define test  \
    ll t;     \
    cin >> t; \
    while (t--)
using namespace std;

int main(){
    ll int n, k, days, b1=0, b2 ;
    test{
        bool flag = true;
        days = 1; b2 = 0;
        cin >> n >> k;
        while ((b1 + b2) < k && flag){
            for (int i=0; i<n; i++){
                b2 = (1 << i);  
                cout << b2;
                days++;
                 if((b1+b2)>=k){
                    flag = false;
                    break;
                }
                if (b2*2 >= k){
                    b1 += n;
                    n = n - b2;
                    b2 =0;
                    break;
                }
            }
        }
        cout << days << endl;
    }
}