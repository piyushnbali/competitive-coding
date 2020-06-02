/* USED BFS */

class Solution {
public:
 
 /* THIS FUNCTION WILL BE RECURSIVELY EXECUTED TILL
    ALL THE CONNECTED '1' ARE REPLACED BY 'c'!
    Which is actually equivalent to 1 island!
 */
 static void fun(vector<vector<char>>& grid, int i, int j){
     
     // Edge cases and when element != '1' i.e. either '0' or 'c'
     if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]!='1') return;
     
     //for '1' check all the 4 adjacent elements
     grid[i][j]='c';
     fun(grid,i+1,j);
     fun(grid,i,j+1);
     fun(grid,i-1,j);
     fun(grid,i,j-1);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int no_islands=0;
        for(int i=0;i<grid.size();++i){
            for(int j=0;j<grid[0].size();++j){
                if(grid[i][j]=='1'){
                    fun(grid,i,j);
                    ++no_islands;
                }
            }
        }
        return no_islands;
    }
};
