#include<iostream>
#include<cmath>
using namespace std;

int mod(int x){   // returns the modulus of a number
    if(x<0){
        int r = sqrt(x*x);
        return r;
    }
    else 
        return x;
}

int max(int x,int y){   // returns the greatest number amoung two
    if(x>=y)
        return x;
    else
        return y;
}

int main() {
    int r,c,x,y;
    cin >> r >> c >> x >> y;
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            cout << max(mod(x-i),mod(y-j)) << " ";
        }
        cout << endl;
    }


return 0;
}