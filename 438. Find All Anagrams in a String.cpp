class Solution {
public:
   
    vector<int> findAnagrams(string s, string p){
        vector<int> countP(26 , 0);
        for(auto& c : p) countP[c - 'a']++;
        
        if(s.length()<p.length()) return {};
        else
        {
            vector<int> res;
            for(int i=0; i<s.length()-p.length()+1; i++)
            {
                if(countP[s[i] - 'a']>0)
                {
                    int next=i+1, psize=p.length()-1;
                    vector<int>Pcopy = countP;
                    Pcopy[s[i] - 'a']--;
                    
                    while((psize>0) & (Pcopy[s[next]-'a']>0))
                    {
                        Pcopy[s[next]-'a']--;
                        psize--;
                    }
                                 
                    if(all_of(Pcopy.begin(), Pcopy.end(), [](int x) { return x==0; }))
                        res.push_back(i);
                }
            }
            return res;
        }
    }
};