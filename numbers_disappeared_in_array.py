class Solution(object):
    def find_disappeared_number(self,nums):
        n = len(nums)
        ans = []
        d = dict(zip([x for x in range(1,n+1)],[1 for _ in range(1,n+1)]))
        for elem in nums:
            d[elem] = 0

        for elem in d.iterkeys():
            if d[elem] is 1:
                ans.append(elem)

        return ans


    # def find_disappeared_number(self, nums):
    #     n = len(nums)
    #     return list(set(range(1,n+1)) - set(nums))

def main():
    sol = Solution()
    a =sol.find_disappeared_number([1,2,3,2,3,4,7,8])
    print a

if __name__=="__main__":
    main()


