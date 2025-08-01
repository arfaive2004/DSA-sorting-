class Solution {
public:
    int countStudents(vector<int> &arr, int pages)
    {
        long long pagesStudent = 0;
        int student = 1;
        for(int i = 0; i<arr.size(); i++)
        {
            if(pagesStudent + arr[i] <= pages)
            {
                pagesStudent += arr[i];
            }
            else
            {
                student += 1;
                pagesStudent = arr[i];
            }
        }
        return student;
    }
    int findPages(vector<int> &arr, int n, int m)
    {
        if(n<m) return -1;
        int low = *max_element(arr.begin(), arr.end());
        int high = accumulate(arr.begin(), arr.end(), 0);
        while(low<=high)
        {
            int mid = (low+high)/2;
            int students = countStudents(arr, mid);
            if(students > m) low = mid+1;
            else high = mid - 1;
        }
        return low;
    }
    int splitArray(vector<int>& nums, int k) {
        return findPages(nums, nums.size(), k);
    }
};
