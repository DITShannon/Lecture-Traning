Method 1:
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res, mp(26);
        for (auto &c : p)
            mp[c - 'a']++;
        
        int cnt = p.length(), lt = 0, rt = 0;
        
        if (p.length() > s.length()) return {};
        
        while (rt < s.length()) 
        {
            if (mp[s[rt++] - 'a']-- > 0)
                cnt--;
            else 
            {
                while (mp[s[lt++] - 'a']++ >= 0)
                    cnt++;
            }
            
            if (cnt == 0)
                res.push_back(lt);
            
        }
        
        return res;
    }
};

Method 2:
class Solution {
public:
	vector<int> findAnagrams(string s, string p){
        vector<int> countP(26 , 0);
        for(auto& c : p) countP[c - 'a']++;
        
        if(s.length()<p.length()) return {};
        else
        {
            vector<int> res,Pcopy;
            
            for(int i=0; i<s.length()-p.length()+1; i++)
            {
                if(countP[s[i] - 'a']>0)
                {
                    Pcopy = countP;
                    Pcopy[s[i] - 'a']--;
                    int j=1;
                    
                    while(j<p.length())
                    {
                        if(Pcopy[s[i+j] - 'a']>0)
                        {
                            Pcopy[s[i+j] - 'a']--;
                            j+=1;
                        }
                        else
                            break;
                    }
                    
                    if(j==p.length())
                        res.push_back(i);
                }
            }

            return res;
        }
    }
};