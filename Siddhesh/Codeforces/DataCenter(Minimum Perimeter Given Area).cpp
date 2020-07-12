#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int area,p=2000000000;
	cin>>area;
	for(int i=1;i<=sqrt(area);++i){
		if(area%i==0){
			if(2*(i+area/i)<p){
				p=2*(i+area/i);
			}
		}
	}
	cout<<p;
	return 0;
}
