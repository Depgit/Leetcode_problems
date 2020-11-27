class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_max=nums[0], global_max=nums[0];
        for(int i=1;i<nums.size();i++){
            curr_max = max(curr_max + nums[i], nums[i]);
            if(curr_max > global_max){
                global_max =  curr_max;
            }
            
        }
        return global_max;
    }
};
