class Solution {
public:
    int bitwiseComplement(int N) {
        if(N==0) return 1;
        else
        {
            int bit, res=0;
            
            for(int i = 0; N; N/=2,++i)
            {
                bit = 1-(N % 2);
                
                res += bit << i;
            }
            
            return res;
        }
    }
};