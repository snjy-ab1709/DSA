class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        int right = 1;
        int cnt=0;
        sort(nums.begin(), nums.end());
       while(left<n && right<n){
        if(left==right){
            right++;
            continue;
        } 
        int diff = nums[right]- nums[left];
        if(diff==k){
            cnt++;
            left++;
            while(left<n && nums[left]==nums[left-1]){
                left++;
            }
        }
        else if(diff<k){
            right++;
        }
        else left++;
        }
        

       
       return cnt;
    }
};