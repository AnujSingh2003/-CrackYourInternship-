class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int n = nums.size();
        // for(int i=0;i<=n;i++){
        // for(int j=i+1;j<n;j++){
        //     if(nums[i]==0 && nums[j]!=0){
        //        swap(nums[i],nums[j]);
        //     }
        // }
        // }

// -------------------Approach 2-----------------------

        // int n=nums.size();
        // int j=0;
        // for(int i=0;i<n;i++){
        //     if(nums[i]!=0){
        //     nums[j++]=nums[i];
        //     }
        // }
        // for(;j<n;j++){
        //     nums[j]=0;
        // }
// ------------------------------approach 3--------------------------
int left=0;
for(int right=0;right<nums.size();right++){
    if(nums[right]!=0){
        swap(nums[right],nums[left]);
        left++;
    }
}
    }
};