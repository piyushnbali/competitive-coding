#include <iostream>
using namespace std;
int pow(int a, int b, int M) {
   int x = 1, y = a;
   while (b > 0) {
      if (b % 2 == 1) {
         x = (x * y);
         if (x > M)
            x %= M;
      }
      y = (y * y);
      if (y > M)
         y %= M;
         b /= 2;
   }
   return x;
}
int modInverse(int a, int m) {
   return pow(a, m - 2, m);
}
int main() {
   int a, m;
   cout<<"Enter number to find modular multiplicative inverse: ";
   cin>>a;
   cout<<"Enter Modular Value: ";
   cin>>m;
   cout<<modInverse(a, m)<<endl;
}