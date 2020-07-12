/*
  QUESTION:
  GIVEN AN INTEGER :
    1. CONVERT IT TO BINARY
    2. PREFIX ZEROES SO THAT SIZE OF THE BINARY STRING BECOMES A MULTIPLE OF 8
    3. REVERSE THE STRING
    4. PRINT THE INTEGER FORM OF THE REVERSED BINARY STRING
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,carry=0;
    cin>>x;
    string s="";
    while(x!=0){
        carry=x%2;
        s=to_string(carry)+s;
        x/=2;
    }
    if(s.length()%8!=0){
        while(s.length()%8!=0){
            s='0'+s;
        }
    }
    reverse(s.begin(),s.end());
    cout<<stoi(s,0,2);
    return 0;
}
