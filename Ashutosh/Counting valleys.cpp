#include<iostream>
using namespace std;

int countingValleys(int numOfSteps, char* path)
{    
    int altitude = 0, i, valleyInProgress = 0, numOfValleys = 0 ;   //initialize all the variables as 0
    for(i=0 ; i<numOfSteps ; i++)
    {
       	if (path[i] == 'U')
    	  altitude++;                     //determine altitude after each step
    	if(path[i] == 'D')
    	  altitude--;
    	  cout<<altitude<<" ";
    	  
    	if(valleyInProgress == 0)
    	{
    		if(altitude == -1)                      //check if valley has begun
    		 valleyInProgress = 1;
		}
		if(valleyInProgress == 1)
		{
			if(altitude == 0)
			{
				valleyInProgress = 0;                    //check if valley ends if it has already begun
				numOfValleys++;                          //if valley ends, number of valleys increases by one
			}
		}
	}
	
	return numOfValleys ;
	
	return 0;
} 
int main()
{  int i, numOfSteps, numOfValleys;
   cin>>numOfSteps;
   char path[numOfSteps];
   
   for(i=0 ; i<numOfSteps ; i++)
   { 
      cin>>path[i] ;
   }
   
   numOfValleys = countingValleys(numOfSteps, path);
   cout<<"\n";
   cout<<numOfValleys ;
   
    return 0;
}

/* Gary is an avid hiker. He tracks his hikes meticulously, paying close attention to small details like topography. During his last hike he took exactly  steps. For every step he took, he noted if it was an uphill, , or a downhill,  step. Gary's hikes start and end at sea level and each step up or down represents a  unit change in altitude. We define the following terms:

A mountain is a sequence of consecutive steps above sea level, starting with a step up from sea level and ending with a step down to sea level.
A valley is a sequence of consecutive steps below sea level, starting with a step down from sea level and ending with a step up to sea level.
Given Gary's sequence of up and down steps during his last hike, find and print the number of valleys he walked through.

For example, if Gary's path is , he first enters a valley  units deep. Then he climbs out an up onto a mountain  units high. Finally, he returns to sea level and ends his hike.

Function Description

Complete the countingValleys function in the editor below. It must return an integer that denotes the number of valleys Gary traversed.

countingValleys has the following parameter(s):

n: the number of steps Gary takes
s: a string describing his path */
