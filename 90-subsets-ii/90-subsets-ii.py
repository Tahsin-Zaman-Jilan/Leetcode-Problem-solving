class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        ans=[]
        nums.sort()
        
        
        def Subset(i,subset):
            if(i==len(nums)):
                ans.append(subset[::])
                return 
            
            subset.append(nums[i])
            Subset(i+1,subset)
            subset.pop()
        
            while i+1<len(nums) and nums[i]==nums[i+1]:
                
                i=i+1
            Subset(i+1,subset)     
                         
        Subset(0,[])
        return ans
        