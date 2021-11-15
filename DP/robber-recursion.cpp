class Solution {
public:
//     int rob(vector<int>& nums) {
//         int cache[101];
//         for(int i=0;i<101;i++){
//             cache[i] = -1;
//         }
//         // return max(robber(0,0,nums,cache),robber(0,1,nums,cache));
//         robber(0,0,nums,cache);
//         robber(0,1,nums,cache);
//         for(int i=0;i<cache.size();i++){
//             cout<<cache[i];
//         }
//         return 4;
//     }
//     //vector<int> & nums
//     int robber(int money, int p,vector<int> &nums,int[101] &cache){
//         if(p>= nums.size()){
//             return 0;
//         }
        
//         if(cache[p] != -1){
//             return cache[p];
//         }
        
//         cache[p] = nums[p] + max(robber(money+nums[p+2],p+2,nums,cache),
//                                  robber(money+nums[p+3],p+3,nums,cache));
        
//         return cache[p];
//     }
    
    
    int rob(vector<int>& nums) {
        const int n = nums.size();
        vector<int> cache(n,0);
        if(n == 0) return 0;
        if(n == 1) return nums[0];
        if(n == 2) return max(nums[0],nums[1]);
        cache[0] = nums[0];
        cache[1] = max(nums[0],nums[1]);
        
        for(int i=2;i<n;i++){
             cache[i] = max(cache[i-1],nums[i]+cache[i-2]);
        }
        return cache[n-1];
    }
};
