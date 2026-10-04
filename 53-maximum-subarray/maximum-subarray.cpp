class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxima=INT_MIN;
        int sum =0;
        for(int i=0; i<n; i++){
            sum+=nums[i];

            if(maxima<sum){
               maxima=sum;
            }

            if(sum<0){
                sum=0;
            }

        }
        return maxima;
    }
};