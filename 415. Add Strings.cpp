class Solution {
public:
    
    string addStrings(string num1, string num2)
    {
        string res;
        int ps1=num1.size()-1, ps2=num2.size()-1;
        int sum=0;
        
        while(ps1 >= 0 | ps2 >= 0)
        {
            if(ps1==-1)
                sum += (num2[ps2--] - '0');
            else if(ps2==-1)
                sum += (num1[ps1--] - '0');
            else
                sum += (num1[ps1--] - '0') + (num2[ps2--] - '0');

            res.push_back(char(sum%10 + '0'));
            sum = sum/10;
        }
        
         if(sum > 0)
             res.push_back(char(sum%10 + '0'));
        
        reverse(res.begin(), res.end());
        
            
        return res;
    }
};