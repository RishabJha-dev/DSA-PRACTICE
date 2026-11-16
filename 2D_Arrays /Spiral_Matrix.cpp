class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
        vector<int> ans;
        int m = arr.size(), n = arr[0].size();
        int minr = 0, maxr = m-1;
        int minc = 0, maxc = n-1;
        while(minr<=maxr && minc<=maxc){
            for(int j=minc;j<=maxc;j++){
                ans.push_back(arr[minr][j]);
            }
            minr++;
            if(minr>maxr || minc>maxc) break;
            for(int i=minr;i<=maxr;i++){
                ans.push_back(arr[i][maxc]);
            }
            maxc--;
            if(minr>maxr || minc>maxc) break;
            for(int j=maxc;j>=minc;j--){
                ans.push_back(arr[maxr][j]);
            }
            maxr--;
            if(minr>maxr || minc>maxc) break;
            for(int i=maxr;i>=minr;i--){
                ans.push_back(arr[i][minc]);
            }
            minc++;
        }
        return ans;
    }
};
