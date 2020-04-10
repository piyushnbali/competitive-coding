#include<iostream>
#include "similarity.h"

using namespace std;



int main()
{       int cont, num = readNum();
    	system("CLS");
    	
    
	do{
	  	cont =0;
		system("CLS");
    	switch(chooseOperation())
    	{
    		case 1:
    			num = addWord(num) ;
    			break;
    		case 2:
    			searchWord(num) ;
    			break;
    		case 3:
    			printCurrentNumberOfWords(num); 
    			break;
    		case 4:
    			searchSimilarWords(num);
    			break;
    		case 5:
			    printAllWords(num) ;
				break;  		
    			
		}
		cout<<"\nPress 1 to continue\n";
		cin>>cont;
     }
	while(cont == 1);
	return 0;
}


