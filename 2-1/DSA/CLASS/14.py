class Solution:
    def combinationSum(self, candidates, target):
        result = []
        
        def backtrack(remaining, combination, start):
            if remaining == 0:
                # If we reach the target, add the current combination to the result
                result.append(list(combination))
                return
            elif remaining < 0:
                # If we exceed the target, return
                return
            
            # Loop through the candidates starting from the current index
            i = start
            while i < len(candidates):
                # Add the candidate to the current combination
                combination.append(candidates[i])
                # Recursively call backtrack with the updated remaining target
                backtrack(remaining - candidates[i], combination, i)
                # Backtrack by removing the last added candidate
                combination.pop()
                i += 1
        
        backtrack(target, [], 0)
        return result

# Example usage:
sol = Solution()
candidates = [2, 3,4, 6, 7]
target = 7
combinations = sol.combinationSum(candidates, target)
print(combinations)
