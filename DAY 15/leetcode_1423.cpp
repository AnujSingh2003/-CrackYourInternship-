class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
     int lsum=0;   
     int rsum=0;
     int rindex=cardPoints.size()-1;
     int maxi;
     for(int i=0;i<k;i++){
        lsum+=cardPoints[i];
     }   
     maxi=lsum;
     for(int j=k-1;j>=0;j--){
        lsum-=cardPoints[j];
        rsum+=cardPoints[rindex];
        rindex=rindex-1;
        maxi=max(maxi,lsum+rsum);
     }
     return maxi;
    }
};