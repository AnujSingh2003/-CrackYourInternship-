class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<bool>visited(nums.size(),false);
        for(auto it:nums){
            if(visited[it]==false){
                visited[it]=true;
        }
        else{
            return it;
        }
        }
        return -1;
    }
};