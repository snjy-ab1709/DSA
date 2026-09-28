class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
      int n = nums.size();  //using hashing
       map<int,int> mpp;
       vector<int> result;
       for(int i=0; i<n; i++){
        mpp[nums[i]]++;
       } 
       for(auto it:mpp){
        if(it.second>n/3){
            result.push_back(it.first);
        }
        
       }
      return result;
      

// moore's voting algo.
/*
int n = nums.size();
int el;
int cnt=0;
vector<int> result;
for(int i=0; i<n; i++){
    if(cnt==0){
        cnt=1;
        el=nums[i];
    }
    else if(nums[i]==el){
        cnt++;
    }
    else cnt--;
}
   int cnt1=0;
   for(int i=0; i<n; i++){
   if(nums[i]==el){
    cnt1++;
   }
   }
   if(cnt1>n/3){
    result.push_back(el);
   }
   

return result;
*/ //it will work only when n/2
    }
    
};