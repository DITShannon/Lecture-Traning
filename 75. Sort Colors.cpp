Method 1
class Solution {
public:
    void sortColors(vector<int>& nums) {
        if(nums.size()>1)
        {
            int idx = 0, id_w = 0, n_w = 0, n_b = 0;
            
            while(idx<nums.size()-n_b)
            {
                if(nums[idx]==0)
                {
                    if(n_w)
                    {
                        swap(nums[idx], nums[id_w]);
                        id_w++;
                    } 
                    idx++;
                } 
                else if(nums[idx]==1)
                {
                    if(n_w==0)
                    {
                        id_w = idx;
                        n_w++;
                    }
                    idx++;
                }
                else
                {
                    swap(nums[idx],nums[nums.size()-1-n_b]);
                    n_b++; 
                }
            }
  
        }
    }
};

Method 2:
class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        if(nums.size()>1)
        {
            int idx = 0, zeros = 0, end = nums.size() - 1;
            
            while(idx<=end && zeros<=end) 
            {
                if(nums[idx]==2) 
                {
                    swap(nums[idx], nums[end]);
                    --end;
                }
                if(nums[idx]==0)
                {
                    swap(nums[zeros], nums[idx]);
                    ++zeros;
                }
                if(idx<zeros || nums[idx]== 1)
                    idx++;
            }
        }
    }
};