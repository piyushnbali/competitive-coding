#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int table[256] = {0};
        int n{},i{},flag{1};
    	cin >> n;
        string x;
    	while(n--){
	    	cin >> x;
	    	if(table[x[0]] == 1)
	    		flag = 0;
	    	else table[x[0]] = 1;
	    }
	    if(flag) cout << "YES\n";
	    else cout << "NO\n";
    }
    return 0;
}