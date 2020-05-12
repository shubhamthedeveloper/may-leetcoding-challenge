class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left =0;
        int right = nums.size();
        while(left<right){
            int mid = left+(right-left)/2;
            if(mid ==0 ) return nums[left];
            
            if(mid%2==0){
                if(nums[mid] != nums[mid+1] && nums[mid] != nums[mid-1]){
                   return nums[mid];
               } else if(nums[mid]!=nums[mid+1]){
                right = mid;
            } else{
                left = mid+1;
            }
        }else{
            if(nums[mid] == nums[mid-1]){
                left = mid+1;
            }else{
                right = mid;
            }
            
        } 
        
    }
    return -1;
}
};