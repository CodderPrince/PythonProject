from typing import List


def combinationSum(candidates, target: int) -> List[List[int]]:
    result = []

    def combination(i, currentValue, totalSum):
        if totalSum == target:
            result.append(currentValue.copy()) 
            return
        
        if i >= len(candidates) or totalSum > target:
            return
        
        'two option'
        'if taken'
        currentValue.append(candidates[i])
        combination(i, currentValue, totalSum + candidates[i])

        'if not taken'
        currentValue.pop() 
        combination(i + 1, currentValue, totalSum)

    combination(0, [], 0)
    return result


if __name__ == "__main__":
    candidates = [2, 3, 6, 7]
    target = 7
    print(combinationSum(candidates, target))
