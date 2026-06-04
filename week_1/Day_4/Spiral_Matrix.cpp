class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector < int > ans ;

        int toprow = 0 ;
        int bottomrow = matrix.size() - 1 ;
        int leftcolumn = 0 ;
        int rightcolumn = matrix [0].size() - 1 ;

        while (toprow <= bottomrow && leftcolumn <= rightcolumn ) {

            for (int column = leftcolumn ; column <= rightcolumn ; column++) {
                ans.push_back(matrix [toprow] [column]) ;
            }
            toprow ++ ;

            for (int row = toprow ; row <= bottomrow ; row++ ) {
                ans.push_back(matrix [row] [rightcolumn]) ;
            }
            rightcolumn-- ;

            if (toprow <= bottomrow) {
                for (int column = rightcolumn ; column >= leftcolumn ; column --) {
                    ans.push_back(matrix [bottomrow] [column]) ; 
                }
                bottomrow-- ;
            }
            if (leftcolumn <= rightcolumn) {
                for (int row = bottomrow ; row >= toprow; row--) {
                    ans.push_back(matrix[row] [leftcolumn]) ;
                }
                leftcolumn++ ;
            }
        }
        return ans ;
    }
};
