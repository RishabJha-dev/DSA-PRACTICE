class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) { // Method 3
        int m = arr.size();
        int n = arr[0].size();
        bool zerothRow = false; // false means there is no 0 in oth row
        bool zerothCol = false; // false means there is no 0 in oth col
        for(int j=0;j<n;j++){
          if(arr[0][j]==0){
            zerothRow = true;
            break;
          }
        }
        for(int i=0;i<m;i++){
          if(arr[i][0]==0){
            zerothCol = true;
            break;
          }
        }
        for(int i=1;i<m;i++){
          for(int j=1;j<n;j++){
            if(arr[i][j]==0){
              arr[i][0] = 0; // row vector
              arr[0][j] = 0; // col vector
            }
          }
        }
        for(int j=1;j<n;j++){ // col vector
          if(arr[0][j]==0){
            for(int i=1;i<m;i++){
              arr[i][j] = 0;
            }
          }
        }
        for(int i=1;i<m;i++){ // row vector
          if(arr[i][0]==0){
            for(int j=1;j<n;j++){
              arr[i][j] = 0;
            }
          }
        }
        //zerothRow
        if(zerothRow==true){
          for(int j=0;j<n;j++){
            arr[0][j] = 0;
          }
        }
        //zerothCol
        if(zerothCol==true){
          for(int i=0;i<m;i++){
            arr[i][0] = 0;
          }
        }
    }

    // void setZeroes(vector<vector<int>>& arr) { // Method 2
    //     int m = arr.size(), n = arr[0].size();
    //     vector<bool> row(m,false);
    //     vector<bool> col(n,false);
    //     for(int i=0;i<m;i++){
    //         for(int j=0;j<n;j++){
    //             if(arr[i][j] == 0){
    //                 row[i] = true;
    //                 col[j] = true;
    //             }
    //         }
    //     }
    //     for(int i=0;i<m;i++){
    //         if(row[i]==true){ // set ith row of arr to 0
    //             for(int j=0;j<n;j++){
    //                 arr[i][j] = 0;
    //             }
    //         }
    //     }
    //     for(int j=0;j<n;j++){
    //         if(col[j]==true){ // set jth col of arr to 0
    //             for(int i=0;i<m;i++){
    //                 arr[i][j] = 0;
    //             }
    //         }
    //     }
    // }

    // void setZeroes(vector<vector<int>>& arr) { // Method 1
    //     vector<vector<int>> copy = arr;
    //     int m = arr.size(), n = arr[0].size();
    //     for(int i=0;i<m;i++){
    //         for(int j=0;j<n;j++){
    //             if(copy[i][j] == 0){ 
    //                 // set ith row to 0
    //                 for(int col=0;col<n;col++){
    //                     arr[i][col] = 0;
    //                 }
    //                 // set jth col to 0
    //                 for(int row=0;row<m;row++){
    //                     arr[row][j] = 0;
    //                 }
    //             }
    //         }
    //     }
    // }
};
