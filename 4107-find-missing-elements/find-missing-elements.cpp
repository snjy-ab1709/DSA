class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
          sort(nums.begin(), nums.end());
          vector<int> ans;
          for(int i = 1; i<n; i++){
            for (int curr = nums[i - 1] + 1; curr < nums[i]; curr++) {
                ans.push_back(curr);
            }
        }

        return ans;
          

    }
};