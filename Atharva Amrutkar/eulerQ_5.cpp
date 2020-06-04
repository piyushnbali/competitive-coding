/*2520 is the smallest number that can be divided by each of the numbers from 1 to 10 
without any remainder.
What is the smallest positive number that is evenly divisible by 
all of the numbers from 1 to 20?*/
#include<stdio.h>
#include<math.h>
#include<bits/stdc++.h> 
using namespace std;  
long long lcm(long long n) 
{ 
	long long ans = 1;	 
	for (long long i = 1; i <= n; i++) 
		ans = (ans * i)/(__gcd(ans, i)); 
	return ans; 
}   
int main() 
{ 
	long long n = 20; 
	cout << lcm(n); 
	return 0; 
} 
