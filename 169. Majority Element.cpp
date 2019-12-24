Method1: sort, then count
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size()<=2) return nums[0];
        else
        {
            int i=0;
            sort(nums.begin(), nums.end()); 
            
            while(i<nums.size())
            {
                int cnt = count(nums.begin(), nums.end(), nums[i]);
                if(cnt <= floor(nums.size()/2))
                    i += cnt;
                else
                    break;
            }
            
            return nums[i];
        }
    }
};

Method2: find medium ptr
cclass Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size()<=2) return nums[0];
        else
        {
            int i = floor(nums.size()/2);
            
            while(i<nums.size())
            {
                if(count(nums.begin(), nums.end(), nums[i]) <= floor(nums.size()/2))
                    i++;
                else
                    break;
            }
            
            
            return nums[i];
        }
    }
};