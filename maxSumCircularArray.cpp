class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        int n = A.size();
        if(n==0) return 0;
        int sum = A[0];
        int maxSoFar = A[0];
        int maxTotal = A[0];
        int minSoFar = A[0];
        int minTotal = A[0];
        for(int i=1;i<n;i++){
            maxSoFar = max(A[i],maxSoFar+A[i]);
            maxTotal = max(maxSoFar,maxTotal);
            //cout << maxTotal << " ";
            
            minSoFar = min(A[i],minSoFar+A[i]);
            minTotal = min(minSoFar,minTotal);
            //cout << minTotal << " ";
            sum+=A[i];
            
        }

        return (sum == minTotal)?maxTotal:max(maxTotal,sum-minTotal);
    }
};