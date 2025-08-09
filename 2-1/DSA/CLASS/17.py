class Solution:
    def __init__(self):
        self.steps = 0

    def toh(self, n, fromm, to, aux):
        if n == 1:
            print("move disk {} from rod {} to rod {}".format(n, fromm, to))
            self.steps += 1
            return
        
        self.toh(n-1, fromm, aux, to)
        print("move disk {} from rod {} to rod {}".format(n, fromm, to))
        self.steps += 1
        self.toh(n-1, aux, to, fromm)

# Example usage:
n = 2
solution = Solution()
solution.toh(n, "1", "3", "2")
print(solution.steps)
