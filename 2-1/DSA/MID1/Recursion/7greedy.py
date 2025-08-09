# coin change problem


# Function to calculate the minimum number of coins
def minimum_coins(coins, amount):
    # Sort coins in descending order
    coins.sort(reverse=True)
    
    # List to store chosen coins
    chosen_coins = []
    
    # Track remaining amount
    remaining_amount = amount
    print(f"Remaining amount: {remaining_amount}")
    
    # Loop through each coin
    for coin in coins:
        # Add as many of this coin as possible
        while remaining_amount >= coin:
            chosen_coins.append(coin)
            remaining_amount -= coin
    
    # Return the list of chosen coins and the count
    return chosen_coins, len(chosen_coins)


# Example usage
coins = [1, 5, 10, 25]
amount = 63
chosen_coins, num_coins = minimum_coins(coins, amount)

print("Chosen coins:", chosen_coins)
print("Minimum number of coins:", num_coins)
