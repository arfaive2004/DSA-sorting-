class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int sz = nums.size();
        int sum = (sz*(sz+1))/2;
        int s2 = 0;
        for(int i = 0; i<sz; i++)
        {
            s2 = s2 + nums[i];
        }
        if(sum != s2)
        {
            return sum - s2;
        }
        else
        {
            return 0;
        }
    }
};