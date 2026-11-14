class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int m = arr.size(), n = arr[0].size();
        int i = 0, j = n-1;
        while(i<m && j>=0){
            if(arr[i][j] > target) j--;
            else if(arr[i][j] < target) i++;
            else return true;
        }
        return false; // TC = O(m+n)
    }

    // bool searchMatrix(vector<vector<int>>& arr, int target) {
    //     int m = arr.size(), n = arr[0].size();
    //     for(int i=0;i<m;i++){
    //         for(int j=0;j<n;j++){
    //             if(arr[i][j] == target) return true;
    //         }
    //     }
    //     return false;
    // } TC = O(mn)
};
