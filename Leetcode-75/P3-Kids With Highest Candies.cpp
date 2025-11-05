/* Description: Return a Boolean array of length candies.size() where ans[i] is true  if each 
candies added with extraCandies gives highest number of candies in array candies, ans[i] is false otherwise */
//Description - Easy

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxElement = *max_element(candies.begin(), candies.end());
        vector<bool> ans;
        for(int i:candies){
            if(i+extraCandies >=maxElement)
                ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};
