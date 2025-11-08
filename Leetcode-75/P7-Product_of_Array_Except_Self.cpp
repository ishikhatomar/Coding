//Description: Given an integer array, return the product of all elements except self
//Example : Input: nums = [1,2,3,4], Output: [24,12,8,6]
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        ans[0]=1;
        for(int i =1; i<n; i++){
            ans[i]= ans[i-1]* nums[i-1];
        }
        int mul =1;
        for(int i =n-1; i>=0; i--){
            ans[i]= ans[i]*mul;
            mul = mul*nums[i];
        }
        return ans;
    }
};
