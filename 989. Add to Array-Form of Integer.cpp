class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        if(!K) return A;
        else
        {
            int sum, carry = 0, idx = A.size()-1;
            
            while(K!=0 || carry)
            {
                sum = (K % 10) + carry;
                
                if(idx>=0)
                {
                    sum += A[idx];
                    carry = (sum>=10)? 1:0;
                    sum = (carry)? sum-10 : sum;
                    A[idx--] = sum;
                }
                else
                {
                    carry = (sum>=10)? 1: 0;
                    sum = (carry)? sum - 10 : sum;
                    A.emplace(A.begin(), sum);
                }
                
                K /= 10;
            }
            
            return A; 
        }
    }
};