class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int can= -1;
        int count= 0;
        for(int x:nums){
            if(count==0){
                can=x;
                count=1;
            }
            else if(x==can) count++;
            else
            count--;
        }
        count=0;
        for(int num:nums){
            if(num==can)
            count++;
        }
        if(count>n/2)
        return can;
        return -1;
    }
};