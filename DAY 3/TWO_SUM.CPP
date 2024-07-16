class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int remaining=target-nums[i];
            if(mp.find(remaining)!=mp.end()){
                return {mp[remaining],i};
                break;
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};