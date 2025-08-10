def moveTower(height, source, destination, auxiliary):
    if height == 1:
        moveDisk(source, destination)
    else:
        moveTower(height - 1, source, auxiliary, destination)   # Step 2a
        moveDisk(source, destination)                           # Step 2b
        moveTower(height - 1, auxiliary, destination, source)   # Step 2c

def moveDisk(source, destination):
    print("Move disk from", source, "to", destination)

# Example usage:
if __name__ == "__main__":
    N = int(input("Enter the number of disks: "))
    moveTower(N, 'A', 'C', 'B')  # Move N disks from source 'A' to destination 'C' using auxiliary 'B'
