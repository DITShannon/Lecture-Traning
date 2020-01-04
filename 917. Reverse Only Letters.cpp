class Solution {
public:
    bool isCharacter(char c)
    {
        int ascii = c-'A'; 
        if((ascii>=0 && ascii<=25) || (ascii>=32 && ascii<=57))
            return true;
        
        return false;
    }
    
    string reverseOnlyLetters(string S) {
        int f = 0, r = S.length()-1;
        
        while(r-f>0)
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
        }
        
        return S;
    }
};