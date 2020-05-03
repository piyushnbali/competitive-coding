#include<bits/stdc++.h>
using namespace std; 
int cache[51];
int number=160;
int numberofterm(int digit, int number) 
{ 
    int firstnum = (int)(pow(10, digit - 1)); 
    int lastnum = (int)(pow(10, digit)); 
  
    firstnum = (firstnum - firstnum % number) + number; 
  
    
    lastnum = (lastnum - lastnum % number); 
  
    
    return ((lastnum - firstnum) / number + 1); 
} 
  
int main() 
{ 

    return 0; 
} 