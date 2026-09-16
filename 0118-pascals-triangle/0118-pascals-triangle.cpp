class Solution {
public:
    vector<int> genrows(int rows){
        int ans=1;
        vector<int>ansrow;
        ansrow.push_back(1);
        for(int col=1;col<rows;col++){
            ans=ans*(rows-col);
            ans=ans/col;
            ansrow.push_back(ans);
            }
        return ansrow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>result;
        for(int i=1;i<=numRows;i++){
            result.push_back(genrows(i));
        }
        return result;
    }
};