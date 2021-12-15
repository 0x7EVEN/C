class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // sort(nums.begin(),nums.end());
        // int low = 0;
        // int high = nums.size()-1;
        // while(low<high){
        //     if(nums[low]+nums[high] == target){
        //         return {low,high};
        //     }else if(nums[low]+nums[high]<target){
        //         low++;
        //     }else {
        //         high--;
        //     }
        // }
        // return {-1,-1};
        
        for(int i = 0;i<nums.size();i++){
            double second = target - nums[i];
            for(int j = i+1;j<nums.size();j++){
                if(nums[j] == second){
                    return {i,j};
                }
            }
        }
        return {-1,-1};
    }
};
