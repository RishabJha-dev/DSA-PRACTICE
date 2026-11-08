class Solution {
public:
    void reverse(vector<int>& arr, int i, int j){
        while(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    void rotate(vector<int>& arr, int k) {
        int n = arr.size();
        k = k % n;
        reverse(arr,0,n-1);
        reverse(arr,0,k-1);
        reverse(arr,k,n-1);
    }
};
