'Problem no: 6'
'Generate Parenthesis'

'globally create ans array'
ans = []

'create func function'


def func(n, open, close, str):
    'Base case'
    if (len(str) == 2*n):
        ans.append(str)
        return

    if (open < n):
        func(n, open+1, close, str+'(')
    if (close < open):
        func(n, open, close+1, str+')')


if __name__ == "__main__":
    n = int(input("Enter the number of n: "))
    func(n, 0, 0, "")

    'Range based loop'
    for combination in ans:
        print(combination)
