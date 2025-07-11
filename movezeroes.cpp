class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len = nums.size();
        vector<int> temp;
        for(int i = 0; i<len; i++)
        {
            if(nums[i]!=0)
            {
                temp.push_back(nums[i]);
            }
        }
        int nz = temp.size();
        for(int i = 0; i<nz; i++)
        {
            nums[i] = temp[i];
        }
        for(int i = nz; i<len; i++)
        {
            nums[i] = 0;
        }

    }
};