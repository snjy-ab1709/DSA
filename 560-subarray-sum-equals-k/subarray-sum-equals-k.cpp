class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> presumMap;
        presumMap[0] = 1;
            int sum=0;
         int count=0;
      
        for (int val : nums) {
        sum += val;
        if (presumMap.count(sum - k)) {
            count += presumMap[sum - k];
        }
        presumMap[sum]++; 
    
            
        }
        return count;
    }
};