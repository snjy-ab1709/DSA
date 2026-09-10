class Solution {
public:
    bool isAnagram(string s, string t) {
    if(s.size()!=t.size()) return false;
     map<char, int> mpp1;
    for (int i = 0; i < s.size(); i++)
    {
        mpp1[s[i]]++;
    }
    map<char, int> mpp2;
    for(int i=0; i<t.size(); i++)
    {
        mpp2[t[i]]++;
    }
   return mpp1==mpp2;
    }
    
};