class Solution {
public:
    vector<vector<int>>ans;
    void generate(vector<int>&a,int i,vector<int>&nums){
        if(i==nums.size()){ans.push_back(a);return;}
        generate(a,i+1,nums);
        a.push_back(nums[i]);
        generate(a,i+1,nums);
        a.pop_back();

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>a;
        generate(a,0,nums);
        return ans;
    }
};