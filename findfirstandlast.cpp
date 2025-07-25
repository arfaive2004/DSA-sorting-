class Solution {
public:
    // Helper function to find first or last index
    int findIndex(vector<int>& v, int key, bool findFirst) {
        int n = v.size();
        int start = 0, end = n - 1, res = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (v[mid] == key) {
                res = mid;
                if (findFirst)
                    end = mid - 1;  // look left for first occurrence
                else
                    start = mid + 1;  // look right for last occurrence
            } else if (key < v[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        return res;
    }

    vector<int> searchRange(vector<int>& v, int key) {
        int first = findIndex(v, key, true);
        int last = findIndex(v, key, false);
        return {first, last};
    }
};
