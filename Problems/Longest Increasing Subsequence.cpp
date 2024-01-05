class Solution {
public:
    int lengthOfLIS(vector<int>& a) {
        int n = a.size() ;
        return solve(n,a);
    }
    int solve(int n , vector<int>& a){
        if(n==0){
            return 0;
        }
        vector<int> ans;
        ans.push_back(a[0]);
        for(int i = 1 ; i < n ; i++ ){
            if(a[i] > ans.back()){
                ans.push_back(a[i]);
            }     
            else{
                int index = lower_bound(ans.begin() , ans.end() , a[i]) - ans.begin() ;
                ans[index] = a[i];
            }
        }
        return ans.size();
    }
};