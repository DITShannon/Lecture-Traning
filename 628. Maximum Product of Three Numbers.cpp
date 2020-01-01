Method 1: by sort
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int res = 1;
        
        if(nums.size()==3)
        {
            for(int n:nums)
                res *= n;
        }
        else
        {
            sort(nums.begin(), nums.end());
            
            int a = nums[0] * nums[1] * nums[nums.size()-1],
            b = nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
            
            res = max(a,b);     
        }
        
        return res;
    }
};

Method 2: without sort, find 3 maxs/2 mins
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        if(nums.size()==3)
            return nums[0]*nums[1]*nums[2];
        else
        {
            int min1 = 1001, min2 = 1001, max1 = -1001, max2 = -1001, max3 = -1001;
            
            for(auto n: nums) 
            {
                if(n>max1)
                {
                    max3 = max2;
                    max2 = max1;
                    max1 = n;
                }
                else if(n>max2)
                {
                    max3 = max2;
                    max2 = n;
                }
                else if(n>max3)
                    max3 = n;
                
                if(n<min1)
                {
                    min2 = min1;
                    min1 = n;
                }
                else if(n<min2)
                    min2 = n;
            }
            
            return max(max1*max2*max3, min1*min2*max1);
        }
    }
};