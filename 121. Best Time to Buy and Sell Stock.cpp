class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty() | prices.size()==1)
            return 0;
        else
        {
            int min, min_id, res=0, max;
            
            for(int i=0; i<prices.size()-1; i++)
            {
                max = min = prices[i];
                min_id = i;
                
                do
                {
                    min_id+=1;
                    if(prices[min_id]>max)
                        max = prices[min_id];
                }while(min_id<(prices.size()-1));
                
                if(max!=min & (max-min)>res)
                    res = (max-min);
            }
            return res;
        }
    }
};