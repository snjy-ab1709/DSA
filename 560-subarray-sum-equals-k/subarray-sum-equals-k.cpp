class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> preSumMap;
        preSumMap[0] = 1;
            int sum=0;
         int count=0;
      
        for (int val : nums) {
        sum += val;
        if (preSumMap.count(sum - k)) {
            count += preSumMap[sum - k];
        }
        preSumMap[sum]++; 
    
            
        }
        return count;
    }
};