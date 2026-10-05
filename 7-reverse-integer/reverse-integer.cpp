class Solution {
public:
    int reverse(int x) {
        int revnum=0;
        while(x!=0){
            int ld=x%10;
            if (revnum > INT_MAX / 10 || revnum < INT_MIN / 10) {
                return 0; 
            }
            x=x/10;
            revnum=revnum*10+ld;
        }
        return revnum;
        
    }
};