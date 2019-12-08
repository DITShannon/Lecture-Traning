class Solution {
public:
    bool subNums(vector<int>& nums, int s, int len)
    {
        int sum = 0;
        
        for (int i = 0; i < len; i++)
        {
            sum += nums[i];
            if (sum >= s) return true;
        }
        for (int i = len; i < nums.size(); i++) 
        {
            sum = sum + nums[i] - nums[i-len];
            if (sum >= s) return true;
        }
        
        return false;
    }
    
    int minSubArrayLen(int s, vector<int>& nums) {
        if (nums.size() == 0 || accumulate(nums.begin(), nums.end(), 0) < s) 
            return 0;
        int l = 0, r = nums.size();
        
        while (l < r)
        {
            int m = l + (r - l)/2;
            
            if (!subNums(nums, s, m))
                l = m + 1;
            else r = m;
        }
        return l;
    }

};