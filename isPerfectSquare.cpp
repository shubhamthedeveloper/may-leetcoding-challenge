class Solution {
public:
    bool isPerfectSquare(int num) {
        
        int start =1;
        int end = num;
        
        while(start <= end){
            long int mid = start+(end-start)/2;
            long long int m = mid*mid;
            if(m == num){
                return true;
            }else if(m>num){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        return false;        
    }
};