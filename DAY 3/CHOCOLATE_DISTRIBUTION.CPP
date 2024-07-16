long long findMinDiff(vector<long long> a, long long n, long long m){
    sort(a.begin(),a.end());
    int mini=INT_MAX;
    for(long long i=0;i+m-1<n;i++){
        long long d=(a[i+m-1]-a[i]);
        if(d<mini)mini=d;
    }
    return mini;
    
    }   