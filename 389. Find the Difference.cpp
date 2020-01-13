class Solution {
public:
    char findTheDifference(string s, string t) {
        int asc1 = 0, asc2 = 0;
        
        for(char c:s) 
            asc1 += c;
        for(char c:t)
            asc2 += c;
        
        return (char)(asc2 - asc1); 
    }
};