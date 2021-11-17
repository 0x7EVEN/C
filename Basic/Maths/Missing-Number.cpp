class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        int required = n*(n+1)/2;
        int total = 0;
        for(int i=0;i<n-1;i++){
            total+=array[i];
        }
        return required-total;
    }
};
