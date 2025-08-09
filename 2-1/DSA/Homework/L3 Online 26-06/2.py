'''Problem- 02
Combination Sum'''

from typing import List


class Solution:

    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        result = []

        def combination(i, currentValue, totalSum):
            # 1st base case
            if totalSum == target:
                result.append(currentValue.copy())
                return
            # another base case
            if i >= len(candidates) or totalSum > target:
                return

            # there are two options: Pick-up or Not
            # if pickup
            currentValue.append(candidates[i])
            combination(i, currentValue, totalSum + candidates[i])

            # if not pick-up
            currentValue.pop()
            combination(i + 1, currentValue, totalSum)

        combination(0, [], 0)
        return result


# Example usage:
if __name__ == "__main__":
    soln = Solution()
    candidates = [2, 3, 6, 7]
    target = 7
    print(soln.combinationSum(candidates, target))  # Output: [[2, 2, 3], [7]]
