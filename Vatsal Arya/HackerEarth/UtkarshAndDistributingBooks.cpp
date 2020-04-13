#include <iostream>

using namespace std;

int main() {
	int t{},n{},min{},count{};
	cin>>t;
	while(t--){
		min=10000000;
		count=0;
		cin>>n;
		int arr[n];
		for(int i=0; i<n; i++){
			cin>>arr[i];
			if(arr[i]<min)
				min=arr[i];
			if(arr[i]>=2)
				count += arr[i]-1;
			else
				count++;
		}
		cout<<min-1<<" "<<count<<endl;
		
	}
}
