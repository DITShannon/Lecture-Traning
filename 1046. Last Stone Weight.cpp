class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int res;
            
    if (stones.size() < 3)
        (stones.size() == 1) ? res = stones[0] : res = abs(stones[0] - stones[1]);
    else
    {
        do{
            sort(stones.begin(), stones.end(), greater<int>());
            
            if(stones[0]!=stones[1])
                stones.push_back(stones[0]-stones[1]);
        
            stones.erase(stones.begin());
		    stones.erase(stones.begin());
            
	    } while(stones.size() > 1);
        
        (stones.size() == 0)? res=0:res=stones[0];   
    }
       
        return res;
    }
};