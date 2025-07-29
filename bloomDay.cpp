class Solution {
public:
    bool possible(vector<int>&arr, int day, int m, int k)
    {
        int cnt = 0;
        int noOfB = 0;
        for(int i = 0; i<arr.size(); i++)
        {
            if(arr[i]<= day)
            {
                cnt++;
            }
            else
            {
                noOfB += (cnt/k);
                cnt = 0;
            }
        }
        noOfB += (cnt/k);
        return noOfB >= m;
    }
    int minDays(vector<int>& bloomDay, int r, int b) {
        long long val = r * 1LL * b * 1LL;
        if(val>bloomDay.size()) return -1;
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int i = 0; i<bloomDay.size(); i++)
        {
            mini = min(mini, bloomDay[i]);
            maxi = max(maxi, bloomDay[i]);
        }
        int low = mini;
        int high = maxi;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(possible(bloomDay, mid, r, b))
            {
                high = mid-1;
            }
            else low = mid+1;
        }
        return low;
    }
};
