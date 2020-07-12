//Too Sweet
#include <bits/stdc++.h>
using namespace std;

#define FILE freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdin);
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define ll long long
#define vi vector<int>
#define vii vector<int,int>
#define pi pair<int,int>
#define MP make_pair
#define B begin()
#define E end()
#define S size()
#define L length()
#define pf printf
#define sf scanf

int main(){
	FAST
	int cases,a,b;
	cin>>cases;
	while(cases){
		cin>>a>>b;
		if((a+b)/3<a && (a+b)/3<b){
			cout<<(a+b)/3<<"\n";
		}
		else{
			cout<<min(a,b)<<"\n";
		}
		--cases;
	}
    return 0;
}
