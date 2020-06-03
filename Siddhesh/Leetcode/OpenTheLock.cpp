//BFS USING QUEUE

class Solution {
public:
    int openLock(vector<string>& dr, string t) {
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        if(t=="0000"){
            return 0;
        }
        unordered_set<string> d;
        for(string a: dr){
            if(a==t || a=="0000") return -1;
            d.insert(a);
        }
        queue<string> q;
        unordered_map<string,bool> visited;
        int count=0,size;
        string rw,root;
        string start="0000";
        visited[start]=1;
        q.push(start);
        while(!q.empty()){
            ++count;
            size=q.size();
            for(int i=0;i<size;++i){
                rw=q.front();
                q.pop();
                for(int j=0;j<4;++j){
                    root=rw;
                    if(root[j]==57){
                        root[j]=48;
                    }
                    else{
                        root[j]+=1;
                    }
                    if(d.find(root)==d.end()){
                        if(root==t){
                           return count;
                        }
                        if(!visited[root]){
                            q.push(root);
                            visited[root]=1;
                        }
                    }
                    root=rw;
                    if(root[j]==48){
                        root[j]=57;
                    }
                    else{
                        root[j]-=1;
                    }
                    if(d.find(root)==d.end()){
                        if(root==t){
                           return count;
                        }
                        if(!visited[root]){
                            q.push(root);
                            visited[root]=1;
                        }
                    }
                }
            }
        }
        return -1;
    }
};
