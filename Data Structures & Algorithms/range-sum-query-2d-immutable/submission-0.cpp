class NumMatrix {
    vector<vector<int>>TM;
public:
    NumMatrix(vector<vector<int>>& matrix) {

        for(auto mat : matrix){
            vector<int>arr;
            for(int i = 0; i < mat.size(); i++){
                if(i == 0)
                    arr.push_back(mat[0]);
                
                else
                    arr.push_back(arr.back() + mat[i]);
            }
            TM.push_back(arr);
        }
        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int res = 0;
        for(int i = row1; i <= row2; i++){
            int val = col1 == 0 ? 0: TM[i][col1-1];
            res += TM[i][col2] - val;
        }

        return res;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */