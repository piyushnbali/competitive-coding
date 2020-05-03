#include <bits/stdc++.h>
using namespace std;

int main() {
	int t{},j{},a{},b{},count{},n{};
	cin>>t;
	vector <int> vec;
	while(t--){
		count=0;
		cin>>a>>b;
		for(int i=a; i<=b; i++){
			vec={};
			n=i;
			while(n>0){
				vec.push_back(n%10);
				n /= 10;
			}
			for(j=0; j<vec.size()/2; j++){
				if(vec.at(j) != vec.at(vec.size()-j-1))
					break;
			}
			if(j==vec.size()/2)
				count++;
		}
	cout<<count<<endl;
	}
}