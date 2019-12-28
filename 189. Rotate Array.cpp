Method 1
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        if(nums.size()>1)
        {
            int last = nums.size()-(k%nums.size());
            vector<int> front(nums.begin()+last,nums.end());
            
            nums.resize(last);
            nums.reserve(nums.size()+front.size());
            nums.insert(nums.begin(), front.begin(), front.end());
        }
    }
};

Method 2
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size()>1)
        {
            int n = nums.size();
            k %= n;
            
            nums.insert(nums.begin(), nums.end()-k, nums.end());
            nums.resize(n);
        }
    }
};