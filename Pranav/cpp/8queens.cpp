// In chess it is known that it is possible to place 8 queens 
// on an 8×8 chess board such that none of them can attack another.
// Given a placement of 8 queens on the board, determine if there is 
// a pair of queens that can attach each other on the next move. Print 
// the word NO if no queen can attack another, otherwise print YES. The 
// input consists of eight coordinate pairs, one pair per line, with each
// pair giving the position of a queen on a standard chess board with rows 
// and columns numbered starting at 1.
#include<iostream>
using namespace std;

int main() {
    int x[8],y[8],count=0;
    bool t = false,r = false;
    for (int i=0; i<8; i++){
        cin >> x[i];
        cin >> y[i];        
    }
    for (int i=0; i<8; i++){
        for (int j=i+1; j<8; j++){
            if(x[j]==x[i]||y[j]==y[i]){
                cout << "YES";
                t = true;
                break;    
            }
        }   
        if(t==true) 
        break;
    }
    for (int z=0; z<8; z++){
        for (int w=z+1; w<8; w++){
            if(x[z]+1==x[w] && y[z]+1==y[w] || x[z]+2==x[w] && y[z]+2==y[w] || x[z]-1==x[w] && y[z]-1==y[w] || x[z]-2==x[w] && y[z]-2==y[w]){
                cout << "YES";
                r = true;
                break;
            }
        }
        if(r==true)
        break;
    }
    if(r != true && t != true){
        cout << "NO";
    }
return 0;
}