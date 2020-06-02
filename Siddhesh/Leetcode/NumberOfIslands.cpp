/* USED BFS */

// Approach 1 : Without using queue
class Solution {
public:
 
 /* THIS FUNCTION WILL BE RECURSIVELY EXECUTED TILL
    ALL THE CONNECTED '1' ARE REPLACED BY '0'!
    Which is actually equivalent to 1 island!
 */
 static void fun(vector<vector<char>>& grid, int i, int j){
     
     // Edge cases and when element != '1'
     if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]!='1') return;
     
     //for '1' check all the 4 adjacent elements
     grid[i][j]='0';
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

// Using queue
class Solution {
public:
    /*
      Idea: Find first land piece (1) and use BFS to mark all connected 1s as 0s.
      Thus one island is removed. Then recursively call this method until there are
      no more islands.
    */
    int numIslands(vector<vector<char>>& grid) {
      if ( grid.size() == 0 || grid[0].size() == 0 ) {
        return 0;
      }
      
      int m = grid.size();
      int n = grid[0].size();
      
      pair<int,int> root, current;
      queue<pair<int,int>> the_queue;

      // Find first 1
      bool flag = false;
      for ( int i = 0; i < m; i++ ) {
        for ( int j = 0; j < n; j++ ) {
          if ( grid[i][j] == '1' ) {
            root = make_pair(i,j);
            flag = true;
            break;
          }
        }
        if ( flag ) {
          break;
        }
      }
      
      // If no 1, return count 0
      if ( !flag ) {
        return 0;
      }
      
      the_queue.push(root);
      
      while ( !the_queue.empty() ) {
        current = the_queue.front();
        int i = current.first,
          j = current.second;
        
        // Push neighbouring 1s to queue and set
        // them to 0 to avoid re-addition to queue
        if ( i - 1 >= 0 && grid[i - 1][j] == '1' ) {
          the_queue.push(make_pair(i - 1, j));
          grid[i - 1][j] = '0';
        }
        if ( j + 1 < n && grid[i][j + 1] == '1' ) {
          the_queue.push(make_pair(i, j + 1));
          grid[i][j + 1] = '0';
        }
        if ( i + 1 < m && grid[i + 1][j] == '1' ) {
          the_queue.push(make_pair(i + 1, j));
          grid[i + 1][j] = '0';
        }
        if ( j - 1 >= 0 && grid[i][j - 1] == '1' ) {
          the_queue.push(make_pair(i, j - 1));
          grid[i][j - 1] = '0';
        }
        
        // convert handled 1s to 0s
        grid[i][j] = '0';
        the_queue.pop();
      }
      
      return 1 + numIslands(grid);
    }
};
