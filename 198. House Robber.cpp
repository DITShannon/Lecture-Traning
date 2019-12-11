class Solution {
public:
    int rob(vector<int>& nums)
    {
        if(nums.size() == 1) return nums[0];
        if(nums.size()>1)
        {
            vector<int> preMax(nums.size(), 0);
            preMax[0] = nums[0];
            preMax[1] = max(nums[0],nums[1]);
            
            if(nums.size()==2) return preMax[1];
            else
            {
                for(int i=2; i<nums.size(); i++)
                    preMax[i] = max(nums[i]+preMax[i-2], preMax[i-1]);
                return preMax[nums.size()-1];
            }
        }

        return 0;
    }
};