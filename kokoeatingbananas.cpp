class Solution {
public:
    int findMax(vector<int> &v)
    {
        int maxi = INT_MAX;
        int n = v.size();
        for(int i = 0; i<n; i++)
        {
            maxi = max(maxi, v[i]);
        }
        return maxi;
    }
    int calculateTotalHours(vector<int> &v, int hourly)
    {
        int totalH = 0;
        int n = v.size();
        for(int i = 0; i<n; i++)
        {
            totalH += ceil((double)v[i] / (double)hourly);
        }
        return totalH;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long low = 1; 
        long long high = findMax(piles);
        while(low<=high)
        {
            long long mid = (low+high)/2;
            int totalH = calculateTotalHours(piles,mid);
            if(totalH<=h)
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
