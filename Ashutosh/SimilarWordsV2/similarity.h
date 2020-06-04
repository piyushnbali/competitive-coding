#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<fstream>
using namespace std;

std::ifstream wordDataIn, wordCountIn ;  //wordCount filename is wordCount.txt
std::ofstream wordDataOut, wordCountOut ;  //wordData filename is wordData.txt

class words
{
	char word[20] ;
	
	public:
		
		void getWordDetails() ;
		void putWordDetails() ;
		int matchWord(char* input);
		int findSimilarity1(char* input);
		int findSimilarity2(char* input);
};

inline void words::getWordDetails()
{
	cout<<"Enter your word: ";
	fflush(stdin);
	gets(word);
}

inline void words::putWordDetails()
{ 
  cout<<word ;
}

inline int words::matchWord(char* input)
{   int matchFound ;
    strlwr(word);
    strlwr(input);
    matchFound = strcmp(word, input) ;
	if(matchFound == 0)
	   return 1;
	else
	   return 0;
}


bool fexists(const char *filename)
{
    ifstream ifile(filename);
    return ifile;
}

inline int readNum()
{    int num;
     bool fileExitst;

     
     fileExitst = fexists("wordCount.txt");
     if(fileExitst==0)
     {
         return 0;


     }
     wordCountIn.open("wordCount.txt",ios::in);
    wordCountIn >> num;
    if (num<0)
    {   num=0;
        wordCountOut.open("wordCount.txt",ios::out);
        wordCountOut << num;
        wordCountOut.close();
       return num;
    }
    wordCountIn.close();
    return num;
}
inline int increaseWordCount(int num)
{
     num++;
     wordCountOut.open("wordCount.txt",ios::out);
     wordCountOut << num;
     wordCountOut.close();
     return num;
}


inline int decreaseWordCount(int num)
{
     num--;
     wordCountOut.open("wordCount.txt",ios::out);
     wordCountOut << num;
     wordCountOut.close();
     return num;
}

inline int addWord(int num)
{
	words wordObject[num+1] ;
	wordDataIn.open("wordData.txt",ios::in);
    wordDataIn.read((char*)&wordObject,sizeof(wordObject));
    wordDataIn.close();
    wordObject[num].getWordDetails();
    wordDataOut.open("wordData.txt", ios::out);
    wordDataOut.write((char*)&wordObject,sizeof(wordObject));
    wordDataOut.close();
    
    num = increaseWordCount(num);
    cout<<"word added sucessfully\n";
    return num;
}

inline void printCurrentNumberOfWords(int num)
{
    cout<<"current no. of words is "<<num<<"\n";
}

inline void searchWord(int num)
{   int i, matchFound = 0;
    char input[20] ;
    words wordObject[num] ;
	wordDataIn.open("wordData.txt",ios::in);
    wordDataIn.read((char*)&wordObject,sizeof(wordObject));
    wordDataIn.close();
    cout<<"\nEnter the word you want to search: ";
    fflush(stdin);
    gets(input) ;
    for(i=0 ; i<num ; i++)
    {    matchFound = wordObject[i].matchWord(input) ;
    	if(matchFound  == 1)
    	  {
		    cout<<"Word found\n" ;
		    break;  
          }
		
	}
	
	if(i >= num)
	  cout<<"Word not found\n"; 
    
}



int deletePosition(char* input, int position)
{
	int i, stringLength = strlen(input);
	
	
	for(i=position ; i<(stringLength -1) ; i++)                  //function to delete a given element from an array
	{
		input[i] = input [i+1] ;
	}
}

int firstLetterMatch(char* string1, char* string2)
{    
                                                //first letter match program
	 if(string1[0] == string2[0])
	  return 30 ;
	 else
	  return 0;
}

int lengthMatch(char* string1, char* string2)                   //length match code
{   
     if(strlen(string1) == strlen(string2))
       return 10;
     else
	   return 0; 
}

int matchSubsequentLetters(char* string1, char* string2)
{  
       int i, j, similarityPoints = 0, multiplier = -1, position;
	   char input1[20], input2[20];
	   strcpy(input1, string1);
	   strcpy(input2, string2);
	   
	   
	 for(i=0 ; i<strlen(input1) ; i++)                                           //perform operation for all chars of first string
	 { 
	       
	                                                     
	   if(multiplier> -1)                                                                
	   {    if(multiplier == 0)
	        similarityPoints += 2;                                                      //if a second letter matches 2 points are awarded
	   	    if(input1[i] == input2[position +1])
	   	    {   
	   	        multiplier++;                                                      //when the search is on matching streak 5 extra points are awarded for every subsequent match
				   similarityPoints = similarityPoints + (5 * multiplier)	;
				   position++;
		    }
		    else
		        multiplier = -1 ;                     //if streak breaks reset the multiplier to original value
	   }
	   
	   if(multiplier == -1)
	   {
	   	   for(j=0 ; j<strlen(input2) ; j++)
	   	   {  
	   	   	   if(input1[i] == input2[j])
	   	   	   {    multiplier ++ ;                         //search for new streak or letter matches
				    position = j ;
					break;                              //match for i th letter of string1 found at jth position for string2
			   }
		   }
	   }
	   
	   
    }
     return similarityPoints;
	    
}



inline int words::findSimilarity1(char* input)           //find similarity of words with input
{
	int similarityPoints =0 ;
	strlwr(word);
	strlwr(input);                                                    //reduce all chars to one level of capitalization to make comparison easy
    similarityPoints += firstLetterMatch(word , input);                //first step, first letter match (30 points max)
   
	similarityPoints += lengthMatch(word, input);                      //second step, compare lengths (10 points max)
                                                                   
	similarityPoints += matchSubsequentLetters(word, input);     //third steps, match remaining letters (no max points)
	return similarityPoints;   
} 

inline int words::findSimilarity2(char* input)                       //find similarity of input with words
{
	int similarityPoints =0 ;
	strlwr(word);
	strlwr(input);                                                    //reduce all chars to one level of capitalization to make comparison easy
    similarityPoints += firstLetterMatch(input , word);                //first step, first letter match (30 points max)
   
	similarityPoints += lengthMatch(input, word);                      //second step, compare lengths (10 points max)
                                                                   
	similarityPoints += matchSubsequentLetters(input, word);     //third steps, match remaining letters (no max points)
	return similarityPoints;   
} 


inline void searchSimilarWords(int num)
{   
    int i,maxPoints = 0, maxPointsPosition =0, matchFound = 0, similarityPoints1[num], similarityPoints2[num], SMpoints[num];
    char input[20] ;
    words wordObject[num] ;
	wordDataIn.open("wordData.txt",ios::in);
    wordDataIn.read((char*)&wordObject,sizeof(wordObject));
    wordDataIn.close();
    cout<<"\nEnter the word you want to search: ";
    fflush(stdin);
    gets(input) ;
	
	for(i=0 ; i<num ; i++)
	{
	
	similarityPoints1[i] = wordObject[i].findSimilarity1(input) ;                   //determine similarity of first string with second
	similarityPoints2[i] = wordObject[i].findSimilarity2(input)  ;                    //determine similarity of second string with first
	SMpoints[i] = ( similarityPoints1[i] + similarityPoints2[i] ) / 2 ;   //average both values
	}                 
   
	for(i=0 ; i<num ; i++)
	{   if(SMpoints[i] > maxPoints)
          {
		    maxPointsPosition = i;	
		    maxPoints = SMpoints[i] ;
		 }

	}
	
	cout<<"most similar word found in library is: ";
	wordObject[maxPointsPosition].putWordDetails();
	

}

inline void printAllWords(int num)
{   int i;
	words wordObject[num] ;
	wordDataIn.open("wordData.txt",ios::in);
    wordDataIn.read((char*)&wordObject,sizeof(wordObject));
    wordDataIn.close();
    
    for(i=0 ; i<num ; i++)
    {
    	wordObject[i].putWordDetails();
    	cout<<"\n";
	}
}

inline int chooseOperation()
{
	int opt, cont ;
    	cout<<"Select Operation: ";
    	cout<<"\n1.Add word";
    	cout<<"\n2.Search word";
    	cout<<"\n3.print current number of words\n" ;
    	cout<<"4.Search similar words\n";
    	cout<<"5.print all words in library";
    	cin>>opt;
    	return opt;
}


