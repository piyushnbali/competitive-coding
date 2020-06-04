//checks if any permuatations of given string are palindrome
//By Ashutosh Shinde, 24/04/2020


#include<iostream>
#include<string.h>
using namespace std;

inline void deletePosition(char* input, int position)
{   
	for(int i=position ; i< ( strlen(input) - 1) ; i++)
	{
		input[i] = input[i+1];
	}
	
}

inline bool findIfPalindrome(char* input)
{   int len, originalLen, j, i=0;
    bool elementFound = false;
    
    len = strlen(input);
    int notFound=0;
    
    originalLen = len;
	
	while(i<originalLen && len>1)
	{
		
		if(notFound>1)
		  return false;
		for(j=1 ; j<len ; j++)
		{
			
			if(input[0] == input[j])
			{   
				deletePosition(input, 0);
				deletePosition(input, j-1);
				len -= 2;
				elementFound = true;
				break;
			}
			
		}
		
		
		if(elementFound == false)
		{   
			notFound++;
			deletePosition(input, 0);
			len--;
		
		}
		
		
		
	    if(len == 1 && notFound==1)
	    return false;
		
		elementFound = false;
		i++;
	}
	
	return true;
}

int main()
{   char input[20];
    cin>>input;
    if(findIfPalindrome(input))
    cout<<"Yes";
    else
    cout<<"No";
	return 0;
}
