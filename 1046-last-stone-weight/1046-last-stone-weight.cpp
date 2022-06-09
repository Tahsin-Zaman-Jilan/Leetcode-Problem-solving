class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        priority_queue<int>pq;
        
        int len=stones.size();
      for(int i=0;i<len;i++){
          pq.push(stones[i]);
      }
       int  maxm=0;
        for(int i=0;i<len-1;i++){
            
            int ans=pq.top();
           // cout<<ans<<endl;
            pq.pop();
            int ans1=pq.top();
             pq.pop();
            //cout<<ans1<<endl;
            maxm=abs(ans-ans1);
            pq.push(maxm);
            
        }
        
        if(stones.size()==1){
            return stones[0];
        }
        return pq.top();
        
        
    }
};