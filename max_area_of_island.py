import heapq
class Solution(object):

    def maxAreaOfIsland(self,grid):
        """
        : type grid :  List[List[Int]]
        : rtype: Int
        """
        m,n = len(grid),len(grid[0])
        seen = set()
        def dfs(i,j):
            if(0 <= i < m and 0 <= j < n and (i,j) not in seen and grid[i][j]):
                seen.add((i,j))
                return 1 + dfs(i+1,j) + dfs(i-1,j) + dfs(i,j-1) + dfs(i,j+1)
            return 0
        

        areas = [dfs(i,j) for i in range(m) for j in range(n) if grid[i][j]]
        return max(areas) if areas else 0

def main():
    sol = Solution()
    grid = [[0,0,1,0,0,0,0,1,0,0,0,0,0],
            [0,0,0,0,0,0,0,1,1,1,0,0,0],
            [0,1,1,0,1,0,0,0,0,0,0,0,0],
            [0,1,0,0,1,1,0,0,1,0,1,0,0],
            [0,1,0,0,1,1,0,0,1,1,1,0,0],
            [0,0,0,0,0,0,0,0,0,0,1,0,0],
            [0,0,0,0,0,0,0,1,1,1,0,0,0],
            [0,0,0,0,0,0,0,1,1,0,0,0,0]]
    print sol.maxAreaOfIsland(grid)

if __name__ == "__main__":
    main()
