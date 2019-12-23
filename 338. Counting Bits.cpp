class Solution {
public:
    vector<int> countBits(int num) 
    {
        if(num==0) return{0};
        else
        {
            vector<int> res(num+1), power2;
            res[0] = 0;
            
            for(int i=1; i<=num; i++)
            {
                if((i & i-1) == 0)
                { 
					res[i] = 1;
                    power2.push_back(i);
                }
                else
                    res[i] = res[i-power2[power2.size()-1]] + 1;
            }
            
            return res;
        }
    }
};