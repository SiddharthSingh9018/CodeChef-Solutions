
int recurse(int n,vector<int>& arr,int target,vector<vector<int>>&memo){
    if(target==0){
        return true;
    }
    if(n==0){
        return false;
    }
    if(memo[n-1]!=-1){
        return memo[n-1][target];
    }
    int sum=0;
    sum+=recurse(n-1,arr,target-arr[n-1],memo);
    sum+=recurse(n-1,arr,target,memo);
    memo[n-1][target]=sum;
    return sum;
}







class Solution {
public:
    bool isSubsetSum(int n, vector<int>& arr, int target) {
        vector<int> memo(n,vector<int>(target,-1));
        return recurse(n,arr,target,memo);
    }
};
