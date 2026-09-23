class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> sqnum(n);
        for(int i=0; i<n; i++){
           sqnum[i]=nums[i]*nums[i];
        }

sort(sqnum.begin(), sqnum.end());
return sqnum;
    }
};