#include<iostream>
using namespace std;

int checkIfSolvable(int* arr, int numOfElements)
{  int i, difference;
   
   for(i=0 ; i<numOfElements ; i++)
   {
   	    difference = arr[i] - i ;
   	    if(difference < 0)
   	    difference ++;
   	    if(difference > 0)
   	    difference --;
   	    
   	    if(difference < -2 || difference > 2)
   	    return 0;
   	    
   }
   
   return 1;
	
}
int minimumBribes(int* arr, int numOfElements)
{
	int i,j , temp, numOfBribes = 0;
	for(i=0 ; i<numOfElements ; i++)
	{  
		for(j=0 ; j<(numOfElements -1) ; j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				numOfBribes++ ;
				
				
			}
		}
	}
	return numOfBribes ;
}
int main()
{
	
	int numOfTestCases  ; 
	cin>>numOfTestCases ;
	int result[numOfTestCases] ;
	int numOfTestCasesUse = numOfTestCases ;
	
	while(numOfTestCases > 0)
	{   
		
	    int i, numOfElements ;
	    cin>> numOfElements ;
	    int array[numOfElements] ;
		for(i=0 ; i<numOfElements ; i++)
		{
			 cin>>array[i];
			 
		}
		
		result[numOfTestCases] = checkIfSolvable(array, numOfElements) ;
		if(result[numOfTestCases] == 0)
		 {  /*random thing*/
		    
		 }
		 
		else
		 {
		      result[numOfTestCases] = minimumBribes(array, numOfElements) ;
			  	
		 }
		numOfTestCases --;
		
		
	}
	
	while(numOfTestCasesUse > 0)
		{ 
		  if(result[numOfTestCasesUse] == 0)
		    cout<<"Too chaotic\n";
		  else
		  cout<<result[numOfTestCasesUse]<<"\n";
		  numOfTestCasesUse --; 
		}
	return 0;
}
