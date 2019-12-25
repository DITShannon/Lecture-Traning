class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(nums.size()==1) return {nums[0]};
        else
        {
            vector<int> res;
            
            map<int, int> mapCnt;
            for(int i =0;i<nums.size();i++)
                mapCnt[nums[i]]++;
            
            vector<pair<int,int>> sortCnt{make_move_iterator(begin(mapCnt)), make_move_iterator(end(mapCnt))};
            sort(begin(sortCnt), end(sortCnt), [](auto p1, auto p2){return p1.second>p2.second;});
            for (auto &cnt:sortCnt)
            {
                if(k>0)
                {
                    res.push_back(cnt.first);
                    k--;                        
                }
                else break;
            }
            
            return res;
        }
    }
};