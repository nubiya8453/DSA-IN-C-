class Solution {
public:
    int balancedStringSplit(string s)
     {
        int l=0,r=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if( s[i]=='L')
            l++;
            else if( s[i]=='R')
            r++;
            if(l==r)
            ans++;
        }
        return ans;
        
    }
};