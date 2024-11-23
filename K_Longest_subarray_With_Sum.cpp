
class Solution {
public:
    int lenOfLongestSubarr(vector<int>& arr, int k) {
        int n = arr.size();
        int l = 0, r = 0;
        long long curr_sum = 0;
        int max_len = 0;

        while (r < n) {
            
            curr_sum += arr[r];

            while (curr_sum > k && l <= r) {
                curr_sum -= arr[l];
                l++;
            }

            if (curr_sum == k) {
                max_len = max(max_len, r - l + 1);
            }

            r++;
        }

        return max_len;
    }
};
