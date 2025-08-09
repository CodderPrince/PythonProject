from typing import List


def combinationSum(candidates, target: int) -> List[List[int]]:
    result = []

    def combination(i, currentValue, totalSum):
        # Base case: if the total sum equals the target
        if totalSum == target:
            print("Current Value: ",currentValue)
            result.append(currentValue.copy())
            return
        # Base case: if index is out of bounds or total sum exceeds the target
        if i >= len(candidates) or totalSum > target:
            return

        # Two options: pick the current candidate or move to the next
        # If pick the current candidate
        currentValue.append(candidates[i])
        combination(i, currentValue, totalSum + candidates[i])

        # If not pick the current candidate
        currentValue.pop()
        combination(i + 1, currentValue, totalSum)

    combination(0, [], 0)
    return result


# Example usage:
if __name__ == "__main__":
    candidates = [2,  3, 6, 7]
    target = 7
    print(combinationSum(candidates, target))  # Output: [[2, 2, 3], [7]]
