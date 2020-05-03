#include<bits/stdc++.h>
using namespace std;
int main(){
	string S;
	cin>>S;
	int n=S.length();
	assert(n >= 1 && n <= 100000);
	long long sum=0;
	for(int i=0;i<n;i++)
	sum+=(int(S[i]-'a')+1);
    if(sum%3==0&&(int(S[n-1]-'a')+1)%2==0)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	return 0;
}