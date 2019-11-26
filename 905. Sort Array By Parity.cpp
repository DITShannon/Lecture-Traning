class Solution {
public:
	vector<int> sortArrayByParity(vector<int>& A) {
		vector<int> res(A.size());
		int even = 0, odd = A.size() - 1;

		for (auto& e : A)
		{
			if (e & 0b1)
			{
				res[odd] = e;
				odd--;
			}
			else
			{
				res[even] = e;
				even++;
			}
		}

		return res;
	}
};