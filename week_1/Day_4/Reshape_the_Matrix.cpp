class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int rows = mat.size() ;
        int column = mat [0].size() ;

        if (rows * column != r * c) {
            return mat ;
        }
        vector<vector<int>> reshaped (r, vector<int>(c)) ;
        int position = 0 ;

        for (int i = 0 ; i < rows ; i++) {
            for (int j = 0 ; j < column ; j++) {
                reshaped [position / c] [position % c] = mat [i] [j] ;
                position ++ ;            
        }
    }
    return reshaped ;
    }
};
