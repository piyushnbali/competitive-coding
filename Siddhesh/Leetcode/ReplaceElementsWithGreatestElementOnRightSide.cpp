class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        if(arr.size()==0) return arr;
        int max=arr[arr.size()-1],tmp;
        for(int i=arr.size()-1;i>=0;--i){
            if(i==arr.size()-1){
                arr[i]=-1;
            }
            else{
                tmp=arr[i];
                arr[i]=max;
                if(max<tmp){
                    max=tmp;
                }
                
            }
        }
        return arr;
    }
};
