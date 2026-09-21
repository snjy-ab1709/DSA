class Solution {
public:
    int maxPower(string s) {
        int maxiS = 1;
        int cnt = 1;
        for(int i=1; i<s.length(); i++){
            if(s[i]==s[i-1]){
                cnt++;
                maxiS = max(cnt,maxiS);
            }
            else cnt =1;
        }
        return maxiS;
    }
};