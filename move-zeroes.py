class Solution(object):
    def __init__(self):
        pass

    def move_zeroes(self,nums):
        count = nums.count(0)
        for _ in range(0,count):
            for i in range(1,len(nums)):
                if nums[i-1] == 0:
                    nums[i-1],nums[i] = nums[i],nums[i-1]
        return nums

def main():
    nums = [0,1,0,3,12,0,5]
    sol = Solution()
    print sol.move_zeroes(nums)

if __name__=="__main__":
    main()

