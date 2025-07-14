class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> app;
        for(int i = 0; i<nums.size(); i++)
        {
            int more = target - nums[i];
            if(app.find(more) != app.end())
            {
                return {app[more], i};
            }
            app[nums[i]] = i;
        }
        return {-1,-1};
    }
};