class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        // Hash map to store: {remainder -> first seen index}
        unordered_map<int, int> remainderMap;
        remainderMap[0] = -1; // Base case for prefix sums starting from index 0
        
        int prefixSum = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            prefixSum += nums[i];
            
            int remainder = prefixSum % k;
            
            // Check if this remainder has been seen before
            if (remainderMap.count(remainder)) {
                // Ensure subarray length is at least 2
                if (i - remainderMap[remainder] >= 2) {
                    return true;
                }
            } else {
                // Store first occurrence index of this remainder
                remainderMap[remainder] = i;
            }
        }
        
        return false;
    }
};