from typing import List


def combinationSum(candidates: List[int], target: int) -> List[List[int]]:

    result = []

    def combination(i, currentValue, totalSum):
        if totalSum == target:
            result.append(currentValue.copy())
            return
        if i >= len(candidates):
            return
        if totalSum > target:
            return

        currentValue.append(candidates[i])
        combination(i, currentValue, totalSum+candidates[i])

        currentValue.pop()
        combination(i+1, currentValue, totalSum)

    combination(0, [], 0)
    return result


if __name__ == "__main__":
    candidates = [2, 3, 6, 7]
    target = 7
    print(combinationSum(candidates, target))
