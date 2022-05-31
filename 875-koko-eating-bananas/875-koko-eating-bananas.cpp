class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int len=piles.size();
        int l=1;
        
        int r=*max_element(piles.begin(), piles.end());
      //  cout<<r<<endl;
        
        int ans=r;
        while(l<=r){
            
            int mid=(l+r)/2;
            
            int hour=0;
           for(int pile : piles){
            int div = pile / mid;
            hour += div;
            if(pile % mid != 0) hour++;
        }
          // cout<<"Hour is "<<hour<<endl;
            
            if( hour<=h ){
                 ans=min(ans,mid);
                r=mid-1;
               //cout<<ans<<endl;
            }
            else {
                
               
                l=mid+1;
            }
           
             
            
            
        }
       return ans;
        
    }
};