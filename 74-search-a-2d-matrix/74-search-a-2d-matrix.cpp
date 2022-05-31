class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
       int  rows=matrix.size();
        int col=matrix[0].size();
        
        int n=0;
        
        int m=rows*col-1;
        
        while(n<=m){
            
            int mid=n+(m-n)/2;
            
            int r=mid/col;
            int c=mid%col;
            
            
            if(target >matrix[r][c]){
                
                n=mid+1;
                
            }
            
            else if(target <matrix[r][c]){
                m=mid-1;
            }
            
            else {
                
                return true;
            }
            
            
            
        }
         
        return false;
        
    }
};