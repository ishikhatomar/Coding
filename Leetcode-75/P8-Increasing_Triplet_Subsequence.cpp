//Description: Given an integer array nums, if indexes i<j<k and nums[i] <nums[j] <nums[k] exist return true else return false
//Example: nums=[1,2,3,4,5] Output =true
//Example : nums=[5,4,3,2,1] , Output = false
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {  
       int n= nums.size();
       int num1 = INT_MAX, num2=INT_MAX;
       for(int k =0; k<n; k++){
            if(nums[k]<=num1)
                num1=nums[k]; //new smallest
            else if(nums[k]<=num2)
                num2= nums[k]; //new second smallest
            else return true; // found num3>num2>num1
       }
       return false;
    }
};
