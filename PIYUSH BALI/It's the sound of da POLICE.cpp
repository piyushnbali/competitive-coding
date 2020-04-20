#include <bits/stdc++.h> 
using namespace std; 
  
int primeFactors(int n)  
{  
    int ans=1;

    while (n % 2 == 0)  
    {  
        ans=ans*2;
        //cout << 2 << " ";  
        n = n/2;  
    }  
  
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        // While i divides n, print i and divide n  
        
        while (n % i == 0)  
        {  
            //cout << i << " ";  
            if(i==3)
            {
                ans=ans*3;
            }
            else
            {
                ans=ans*2;
            }
            n = n/i;  
        }  
    }  
  
    if (n > 2) 
        ans=ans*2;
    
    return ans;
    
}  
  

int main()  
{  
    int n;
    cin>>n;
    cout<<primeFactors(n);  
    return 0;  
}  
  
// This is code is contributed by rathbhupendra 
