class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int bestanswer = nums[0];
        int segmentsum = 0;

        for (int value : nums) {
            segmentsum += value;

            if (segmentsum > bestanswer) {
                bestanswer = segmentsum;
            }

            if (segmentsum < 0) {
                segmentsum = 0;
            }
        }
        return bestanswer ; 
    }
};
