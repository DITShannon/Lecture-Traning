Method 1
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size() -1; i = i+2)
			if(nums[i] != nums[i+1])
                return nums[i];

        return nums.back();
    }
};

Method 2: //0 XOR A = A; A XOR A = 0
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0;
        for(auto num : nums)
            res ^= num;
        return res;
    }
};