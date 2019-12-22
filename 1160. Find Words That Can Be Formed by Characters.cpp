class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int sum=0;
        
        vector<int> countP(26 , 0);
        for(auto& c : chars) countP[c - 'a']++;
        
        for(int i=0; i<words.size(); i++)
        {
            vector<int> cur(26 , 0);
            int j;
            
            for(j=0;j<words[i].size();j++)
            {
                if(++cur[words[i][j]-'a']>countP[words[i][j]-'a'])
                    break;
            }
           
            sum += (j==words[i].size()?j:0);
        }
        
        return sum;
    }
};