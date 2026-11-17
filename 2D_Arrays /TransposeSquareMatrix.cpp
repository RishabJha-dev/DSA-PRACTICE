class Solution {
  public:
    vector<vector<int>> transpose(vector<vector<int>>& arr) {
        int m = arr.size(), n = arr[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(arr[i][j],arr[j][i]);
            }
        }
        return arr;
    }
};
