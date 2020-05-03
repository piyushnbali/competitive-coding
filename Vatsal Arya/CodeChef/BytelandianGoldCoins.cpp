#include <iostream>

using namespace std;

long long change(long long n){
	long long n1=n/2;
	long long n2=n/3;
	long long n3=n/4;
	if(n1>11)
		n1=change(n1);
	if(n2>11)
		n2=change(n2);
	if(n3>11)
		n3=change(n3);
	{
	if(n1+n2+n3>n)
		return n1+n2+n3;
	else
		return n;
	}
}
int main() {
	long long n{};
	while(cin>>n){
		cout<<change(n)<<endl;
	}
}
