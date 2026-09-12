class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n; i++){
            int j=i;
            while(j>0 && nums[j]%2==0 && nums[j-1]%2!=0){
                int temp=nums[j-1];
                nums[j-1]=nums[j];
                nums[j]=temp;
                j--;
            }
        }
        return nums;
    }
};