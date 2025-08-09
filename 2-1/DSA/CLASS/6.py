#step out problem
def step_out_example(numbers, threshold):
    for number in numbers:
        if number > threshold:
            print(f"Found a number greater than {threshold}: {number}")
            break
    else:
        # This part will execute if the loop completes without hitting the break
        print(f"No number greater than {threshold} was found.")

# Example usage:
numbers_list = [4, 7, 2, 9, 12, 3, 15]
threshold_value = 100

step_out_example(numbers_list, threshold_value)
