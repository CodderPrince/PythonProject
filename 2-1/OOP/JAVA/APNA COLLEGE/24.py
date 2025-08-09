from typing import List

def combinationSum(candidates: List[int], target: int) -> List[List[int]]:
    result = []

    def combination(i, currentValue, totalSum):
        # 1st base case: when the sum matches the target
        if totalSum == target:
            result.append(currentValue.copy())
            return
        # Another base case: if we exceed the list length or sum exceeds the target
        if i >= len(candidates) or totalSum > target:
            return

        # Two options: Pick-up or Not
        # If pick-up
        currentValue.append(candidates[i])
        combination(i, currentValue, totalSum + candidates[i])

        # If not pick-up
        currentValue.pop()
        combination(i + 1, currentValue, totalSum)

    'called combination function'
    combination(0, [], 0)
    return result

# Example usage:
if __name__ == "__main__":
    x = input()
    candidates = [2, 3, 6, 7]
    target = 7
    print(combinationSum(candidates, target))  # Output: [[2, 2, 3], [7]]
