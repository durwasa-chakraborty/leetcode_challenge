class Solution(object):
    def detect_capital(self,word):
        """
        :type word: str
        :rtype: bool
        """
        return word.lower() == word or word.upper() == word or word.lower().capitalize() == word


def main():
    x = Solution()
    print x.detect_capital("USA")
    print x.detect_capital("leetcode")

if __name__ == "__main__":
    main()
