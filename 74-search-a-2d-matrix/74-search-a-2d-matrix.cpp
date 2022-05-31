class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int rows =matrix.size();
        int col=matrix[0].size();
        
        int l=0,r=rows-1;
        int cnt;
       int mid;
    while(l<=r){
     
        mid=(l+r)/2;
        
        if(target>matrix[mid][col-1]){
            l=mid+1;
        }
        
        else if(target<matrix[mid][0]){
            
            r=mid-1;
        }
        else {
          
            break;
        }
    }
        
            //cout<<cnt<<endl;
        if  (l>r){
            return false;
        }

        cnt=(l+r)/2;
        
        l=0,r=col-1;
         mid=0;
            
            
     while(l<=r){
         
         mid=(l+r)/2;
         
         if(matrix[cnt][mid]>target){
       r=mid-1;
         
         }
         else if(matrix[cnt][mid]<target){
             l=mid+1;
             
         }
         
         else {
             
             return true;
         }
         
         
     }
         return false;  
        
    
    }
    
};