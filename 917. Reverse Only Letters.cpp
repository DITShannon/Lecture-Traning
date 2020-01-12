Method 1
class Solution {
public:
    bool isCharacter(char c)
    {
        int ascii = c-'A'; 
        if((ascii>=0 && ascii<=25) || (ascii>=32 && ascii<=57))
            return true;
    void rotate(vector<int>& nums, int k) {
        
        return false;
        if(nums.size()>1)
        {
            int last = nums.size()-(k%nums.size());
            vector<int> front(nums.begin()+last,nums.end());
            
            nums.resize(last);
            nums.reserve(nums.size()+front.size());
            nums.insert(nums.begin(), front.begin(), front.end());
        }
    }
    
    string reverseOnlyLetters(string S) {
        int f = 0, r = S.length()-1;
        
        while(r-f>0)
};

Method 2
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size()>1)
        {
            if(isCharacter(S[f]) && isCharacter(S[r]))
            {
                char c = S[f];
                S[f++] = S[r];
                S[r--] = c; 
            }
            else
            {
                if(isCharacter(S[f])) r--;
                else f++;
            }
            int n = nums.size();
            k %= n;
            
            nums.insert(nums.begin(), nums.end()-k, nums.end());
            nums.resize(n);
        }
        
        return S;
    }
};