class Solution {
public:
    int maxDepth(string s) {
        int res=0;
        int openbrackets = 0;

        for(char& ch: s ){
            if(ch=='('){
                openbrackets++;
            }
            else if(ch==')'){
                openbrackets--;
            }
            res=max(res,openbrackets);
        } 
        return res;
    }
};