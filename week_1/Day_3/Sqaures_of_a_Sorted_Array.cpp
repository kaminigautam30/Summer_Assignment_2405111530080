class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = n - 1;
        int index = n - 1;
        vector < int > output(n);

        while (left <= right) {
            int leftsquare = nums[left] * nums[left];
            int rightsquare = nums[right] * nums[right];

            if (leftsquare > rightsquare) {
                output [index] = leftsquare;
                left++ ;
            } else {
                output [index] = rightsquare;
                right-- ;
            }
            index--;
        }
        return output;
    }
};
