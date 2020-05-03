// C++ code to rotate bits 
// of number 
#include<iostream> 
#include<bitset>
using namespace std; 
#define INT_BITS 16
class gfg 
{ 
	
/*Function to left rotate n by d bits*/
public: 
uint16_t leftRotate(uint16_t n, uint16_t d) 
{ 
	
	/* In n<<d, last d bits are 0. To 
	put first 3 bits of n at 
	last, do bitwise or of n<<d 
	with n >>(INT_BITS - d) */
	return ((n) << d)|(n >> (INT_BITS - d)); 
} 

/*Function to right rotate n by d bits*/
uint16_t rightRotate(uint16_t n, uint16_t d) 
{ 
	/* In n>>d, first d bits are 0. 
	To put last 3 bits of at 
	first, do bitwise or of n>>d 
	with n <<(INT_BITS - d) */
	return ((n) >> d)|(n << (INT_BITS - d)); 
} 
}; 

/* Driver code*/
int main() 
{ 
	gfg g; 
    int t;cin>>t;while(t--)
    {
	uint16_t n;
	uint16_t d;
	char c;
    cin>>n>>d>>c;
    if(c=='L')
    {
	cout << g.leftRotate(n, d)<<"\n";}
    else
    {
        cout << g.rightRotate(n, d)<<"\n"; 
    }
    }
} 

// This code is contributed by SoM15242 
