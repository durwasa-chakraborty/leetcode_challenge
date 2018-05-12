class Solution(object):
    # If we rotate a A by s then instead of A[0] A[1], A[2] ... we have A[s],A[s+1],A[s+2] ...
    # and we should check that A[s] is equal to B[0] ...
    def rotate_string_brute_force(self,A,B):
        if len(A) is not len(B):
            return False
        if len(A) is 0 :
            return True

        for s in xrange(len(A)):
            if all(A[(s+i) % len(A)] == B[i]) for i in xrange(len(A)):
                return True
        return False

    def rotate_string_simple_check(self,A,B):
        return len(A) == len(B) and B in A+A

    def rotate_string_rolling_hash(self,A,B):
        MOD = 10**9 + 7
        prime_num = 113
        p_inv = pow(prime_num,MOD-2,MOD)

        hash_code_b = 0
        power = 1
        for x in B:
            code = ord(x) - 96
            hash_code_b = (hash_code_b + power * code) % MOD
            power = power * prime_num % MOD

        hash_code_a = 0
        power = 1
        for x in A:
            code = ord(x) - 96
            hash_code_a = (hash_code_a + power * code) % MOD
            power = power * prime_num % MOD

        if hash_code_a == hash_code_b and A == B:
            return True
        for i,x in enumerate(A):
            code = ord(x) - 96
            hash_code_a += power * code
            hash_code_a -= code
            hash_code_a *= p_inv
            hash_code_a %= MOD

            if hash_code_a == hash_code_b and A[i+1:] + A[:i+1] == B:
                return True
        return False

 

