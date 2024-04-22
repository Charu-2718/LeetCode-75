#include<iostream>
#include<vector>
using namespace std;
long long mod=1000000007;
long long paint_fence(int n, int k){
    vector<long>dp(n+1,0);
    dp[1]=k;
    dp[2]=k*k;
    for(int i=3;i<=n;i++){
        dp[i]=((k-1)*(dp[i-1]+dp[i-2]))%mod;
    }
    return dp[n];
}
int main(){
    long n,k;
    cin>>n;
    cin>>k;
    cout << paint_fence(n,k) << endl;
    return 0;
}
