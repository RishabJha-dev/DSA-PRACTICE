class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        int n = arr.size();
        for(int i=0;i<=n-2;i++){
            if(arr[i] > arr[i+1]) return false;
        }
        return true;
    }
};
