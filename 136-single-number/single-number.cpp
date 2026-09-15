class Solution {
public:
    int singleNumber(vector<int>& arr) {
     int n = arr.size();

     int answer = 0;
     for(int i = 0;i<n;i++){
        answer = answer ^ arr[i];
     }   
     return answer; 
    }
};