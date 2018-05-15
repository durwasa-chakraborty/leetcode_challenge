class Solution(object):
    def add_digits(self,num):
        _ret = num % 9
        if _ret is 0:
            return 9
        else :
            return _ret

def main():
    sol = Solution()
    print sol.add_digits(12)
    print sol.add_digits(9)
    print sol.add_digits(12211415)

if __name__=="__main__":
    main()
