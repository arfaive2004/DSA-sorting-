class Solution {
public:
    string frequencySort(string s) {
        // Step 1: Count character frequencies using an array
        vector<int> freq(256, 0);
        int maxFreq = 0;
        for (char c : s) {
            freq[c]++;
            if (freq[c] > maxFreq) {
                maxFreq = freq[c];
            }
        }

        // Step 2: Use a vector of strings to group characters by frequency
        vector<string> buckets(maxFreq + 1);
        for (int i = 0; i < 256; ++i) {
            if (freq[i] > 0) {
                buckets[freq[i]].append(freq[i], (char)i);
            }
        }

        // Step 3: Build the result string by iterating buckets in reverse order
        string result = "";
        for (int i = maxFreq; i > 0; --i) {
            result += buckets[i];
        }

        return result;
    }
};
