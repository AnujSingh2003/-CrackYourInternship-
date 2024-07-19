class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        int counter=0;
        while(i<j){
            counter+=nums[j]-nums[i];
            i++;
            j--;
        }
        return counter;
    }
};