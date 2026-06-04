class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sizeofmatrix = mat.size() ;
        int sumofdiagonal = 0 ;

        for (int currentrow = 0; currentrow < sizeofmatrix ; currentrow ++) {
            sumofdiagonal += mat [currentrow] [currentrow] ;

            int columnsumofanotherdiagonal = sizeofmatrix - currentrow -1 ;

            if ( columnsumofanotherdiagonal != currentrow ) {
                sumofdiagonal += mat [currentrow] [columnsumofanotherdiagonal];
            }
        }
        return sumofdiagonal ;
    }
};
