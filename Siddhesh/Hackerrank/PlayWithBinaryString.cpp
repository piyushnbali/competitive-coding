/*
  QUESTION:
  GIVEN A BINARY STRING,
  MAXIMIZE 0's in LEFT SUBSTRING AND 1's in RIGHT SUBSTRING
  i.e. MAXIMIZE SUM OF 0'S FROM LEFT AND 1'S FROM RIGHT
  
  LOGIC:
  SIMILAR TO KADANE's ALGORITHM
    1. KEEP A COUNT OF TOTAL 1's BY ITERATING ONCE.
    2. ITERATE AGAIN:
      1. INCREMENT COUNTERS OF ZEROES AND ONES BASED ON THE ELEMENT WHILE ITERATING
      //KADANE'S ALGORITHM
      // INITIALLY , BEST = 0
      // BELOW, WE ARE MAXIMIZING THE SUM OF LEFT 0'S AND REMAINING 1'S!!!
      2. BEST = MAX(BEST,COUNT OF ZEROES + (TOTAL ONES - COUNT OF ONES))
*/

#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
    int best=0,o=0,z=0,tot=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();++i){
        if(s[i]=='1'){
            ++tot;
        }
    }
    for(int i=0;i<s.length();++i){
        if (s[i]=='0') { 
            ++z; 
        } 
        else { 
            ++o; 
        }
        best=max(best,z+(tot-o));
    }
    cout<<best;
    return 0; 
} 
