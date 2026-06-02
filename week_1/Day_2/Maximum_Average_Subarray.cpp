class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();

        vector<long long> prefix(n + 1, 0);

        for(int i = 0; i < n; i++) {
            prefix[i+1] = prefix[i] + nums[i];
        }
        long long best = LLONG_MIN;

        for (int i = k; i<= n; i++) {
            long long current = prefix[i] - prefix[i-k];
            best = max(best, current);
        }
        return (double)best / k;
    }
};
