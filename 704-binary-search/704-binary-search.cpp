class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int len=nums.size();
        
        int left=0;
        int right=len-1;
        
        while(left<=right){
            
            int m=(left+right)/2;
            
            if(nums[m]>target){
                right=m-1;
                
                
            }
            else if(nums[m]<target){
                left=m+1;
                
                
            }
            else {
                
                return m;
            }
        }
            return -1;
            
       
        
    }
};