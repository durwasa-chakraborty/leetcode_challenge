import itertools

class Solution(object):

    def __init__(self):
        pass

    def largest_triangle_area(self,points):
        return max(0.5*abs(x[0]*(y[1] - z[1]) + y[0]*(z[1]-x[1]) + z[0]*(x[1] - y[1]))
                   for x,y,z in itertools.combinations(points,3))

def main():
    ans = Solution()
    points  = [[0,0],[0,1],[1,0],[0,2],[2,0]]
    print ans.largest_triangle_area(points)


if __name__ == "__main__":
    main()
