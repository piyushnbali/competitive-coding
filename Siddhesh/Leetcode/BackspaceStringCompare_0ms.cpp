class Solution {
public:
    bool backspaceCompare(string S, string T) {
        string ans1="",ans2="";
        stringstream obj1(S);
        stringstream obj2(T);
        char letter;
        while (obj1>>letter){
            if (letter=='#'){
                if (ans1==""){
                    continue;
                }
                else{
                    ans1.pop_back();
                }
            }
            else{
                ans1.push_back(letter);
            }
        }
        while (obj2>>letter){
            if (letter=='#'){
                if (ans2==""){
                    continue;
                }
                else {
                    ans2.pop_back();
                }
            }
            else{
                ans2.push_back(letter);
            }
        }
        if (ans1==ans2){
            return true;
        }
        return false;
    }
};
