class Solution {
public:
    double sumbyD(vector<int> &arr, int div)
    {
        double sum = 0;
        int n = arr.size();
        for(int i = 0; i<n; i++)
        {
            sum = sum + ceil((double)(arr[i]) / (double)(div));
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 0;
        int n = nums.size();
        int high = *max_element(nums.begin(), nums.end());
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(sumbyD(nums, mid) <= threshold)
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }

        }
        return low;
    }
};
