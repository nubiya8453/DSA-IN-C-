class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int>freq(n+1,0);
        for(int i=0;i<n;i++)
        {
            freq[nums[i]]++;
        }
        int duplicate,miss;
        for(int i=1;i<=n;i++)
        {
            if( freq[i]==2)
            duplicate = i;
            else if( freq[i]==0)
            miss=i;
        }
        //2 will be the duplicate and 3 will be the miss
      return {duplicate,miss};  
    }
};