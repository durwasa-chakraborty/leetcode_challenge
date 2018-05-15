class Solution(object):
    def rotate_string(self,A,B):
        if len(A) is not len(B):
            return False
        if len(A) is 0 :
            return True

        for s in xrange(len(A)):
            if all(A[s+i] % len(A)) == B[i] for i in xrange(len(A)):
                return True
        return False
