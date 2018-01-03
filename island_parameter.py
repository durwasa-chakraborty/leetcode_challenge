import operator
class Solution(Object):
    
    def __init__():
        pass

    def islandParameter(self,grid):
        return sum(sum(map(operator.ne,[0]+row,row+[0])) \
                   for row in grid + \
                   map(list,zip(*grid)))
def main():
    grid = [[1,2],[3,4],[5,8],[8,9]]
    x = Solution()
    print x.islandParameter(grid)


