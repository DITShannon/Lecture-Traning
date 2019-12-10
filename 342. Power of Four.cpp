思路: 1) num&(num-1) to tell a num is a power of 2
	2) there are even number of 0 after the single 1 bit

class Solution {
public:
    bool isPowerOfFour(int num) 
	{
        int count = 0;
        
        if (num>=1 && !(num&(num-1)))
        {
            while(num > 1)
            {
                num >>= 1;
                count += 1;
            }
            
            if(count%2==0) return true;
        }

        return false;
    }
};