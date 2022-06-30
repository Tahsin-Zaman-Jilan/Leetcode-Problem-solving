class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        if not grid:
            return 0
        
        rows=len(grid)
        cols=len(grid[0])
        count=0
        
        visit=set()
        
        def BFS(r,c):
            q=collections.deque()
            visit.add((r,c))
            q.append((r,c))
            
            while q:
                #way to make dfs is remove pop left and use just pop 
                row,col=q.popleft()
                directions=[[0,1],[0,-1],[1,0],[-1,0]]
                
                for dr,dc in directions:
                    r=dr+row
                    c=dc+col
                    
                    if(r in range(rows)
                       and c in range(cols)
                       and grid[r][c]=="1"
                       and (r,c) not in visit):
                                              
                        q.append((r,c))
                        visit.add((r,c))
                                  
                                  
        
        
        
        for r in range(rows):
            for c in range(cols):
                if grid[r][c]=="1" and (r,c) not in visit:
                    BFS(r,c)
                    count+=1
        return count            
                
        