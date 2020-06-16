/*
HERE, WE HAVE TO CALCULATE THE MINIMUM NUMBER OF BLOCKS REQUIRED TO MAKE A HOLLOW PRISM WITH GIVEN DIMENSIONS
*/

#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
    // l,w,h for block
    // a,ht for prism where a is length and h is height
    int l,w,h,a,ht; 
    cin>>l>>w>>h>>a>>ht;
    
    // no. of blocks in a row (row means just the base perimeter i.e. 4a) (just consider the base not height)
    // divided by the length gives no. of blocks
    int no_block = (4 * a) / l;
    
    // row_no is the no. of rows
    int row_no;
    
    // max(h,w) is considered as the height of block to minimize the no. of rows
    if (h < w){
        row_no = ht/w; 
    }
    else{
        row_no = ht/h;
    }
    cout <<row_no * no_block; 
    return 0; 
} 
