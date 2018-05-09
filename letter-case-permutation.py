class Solution(object):
    def letterCasePermutation(self,s):
        """
        :type s:str
        """
        num = '1234567890'
        a=['']
        for i in range(len(s)):
            if num.find(s[i]) != -1:
                a = [j+s[i] for j in a]
            else:
                a = [j+l for j in a for l in [s[i].upper(),s[i].lower()]]
        return a

if __name__ == "__main__":
    sol = Solution()
    print (sol.letterCasePermutation("abc"))
