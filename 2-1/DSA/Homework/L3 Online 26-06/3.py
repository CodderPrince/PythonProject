'''Problem no: 3
Tower of Hanoi
'''


def towerOfHanoi(n, src, helper, dest):
    # Base Case
    if n == 1:
        print(f"transfer disk {n} from {src} to {dest}")
        return

    # Firstly transfer n-1 disk src to helper
    towerOfHanoi(n - 1, src, dest, helper)
    print(f"transfer disk {n} from {src} to {dest}")
    # Secondly transfer n-1 disk helper to dest
    towerOfHanoi(n - 1, helper, src, dest)


n = int(input("Enter the number of n: "))
towerOfHanoi(n, "S", "H", "D")
