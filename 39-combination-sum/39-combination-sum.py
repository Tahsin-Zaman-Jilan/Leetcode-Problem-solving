class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        
        
        ans=[]
        def dfs(it,array,total):
            if total==target:
                ans.append(array.copy())
                return 
                
            if it>=len(candidates) or total>target:
                return 
            
            array.append(candidates[it])
            dfs(it,array,total+candidates[it])
            
            array.pop()
              
            dfs(it+1,array,total)
        
        
        
    
        
            
            
            
            
        dfs(0,[],0)
        return ans