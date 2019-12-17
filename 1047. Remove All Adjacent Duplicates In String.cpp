class Solution {
public:
    int Erase(string* S, int i) 
    {
        S->erase((i-1),2);
        i--;
        
        if((*S).size() <= 1)
            return 2;
        
        if(i==0) i=1;
        
        if((*S)[i-1]==(*S)[i])
            i = Erase(S, i);

        return i;
    }
    
    string removeDuplicates(string S) {
        if (S.size() <= 1) return S;
        else
        {
            for(int i = 1; i < S.size(); i++) 
            {
                if(S[i-1] == S[i])
                    i = Erase(&S, i);
            }
        }
        
        return S;
    }
};