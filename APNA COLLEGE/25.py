from typing import List


def combinationSum(candidates: List[int], target: int) -> List[List[int]]:
    'its one kind of vector<vector<int> array'

    'create a result array where store all possible way'
    result = []

    'create combination function'
    def combination(i, currentValue, totalSum):
        'base case when the desired solution'
        if totalSum == target:
            result.append(currentValue.copy())
            return

            '''here all time append copy value
            there are multiple answers will be valued 
            so don’t add main value 
            if i add main value then another possible way
            cannot reach
            so alltime append the copy value'''

        # another base case: when the end of the candidates list is reached
        if i >= len(candidates):
            return

            '''That means when our array’s elements are finished
            our array passed total i = 4 elements
            so array’s check total 4 elements combination
            when i = 4 means (index)
            then step out of the program and return'''

        # another base case: if the total sum exceeds the target
        if totalSum > target:
            return
            '''When our total sum is greater than the
            current target, return that path.
            There are no valid answers for that path.'''

        # pick the current value
        currentValue.append(candidates[i])
        combination(i, currentValue, totalSum + candidates[i])

        # backtrack: not pick the current value
        currentValue.pop()
        combination(i + 1, currentValue, totalSum)


    'called another function to check all possible ways'
    '''in python if we called multiple function inside the function
    then firstly defined the function then called the function
    inner function defined first then called it'''
    combination(0, [], 0)
    'index value i = 0: result array[]: total sum = 0'

    # finally return the result
    return result


if __name__ == "__main__":
    candidates = [2, 3, 6, 7]
    target = 7

    'called the function'
    print(combinationSum(candidates, target))
    'pass the array and desired target'
