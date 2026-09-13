class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;

        int n = nums.size();

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {

           
            if (i > 0 && nums[i - 1] == nums[i])
                continue;

            int j = i + 1;
            int k = n - 1;

            while (j < k) {

                int sum = nums[i] + nums[j] + nums[k];

                if (sum < 0) {
                    j++;
                }
                else if (sum > 0) {
                    k--;
                }
                else {
                    vector<int> temp;

                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);

                    ans.push_back(temp);

                    // Skip duplicate j values
                    int left = nums[j];
                    while (j < k && left == nums[j]) {
                        j++;
                    }

                    // Skip duplicate k values
                    int right = nums[k];
                    while (j < k && right == nums[k]) {
                        k--;
                    }
                }
            }
        }

        return ans;
    }
};