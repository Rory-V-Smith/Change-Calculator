from cs50 import get_float

# prompt user for non-negative value
while True:
    change = get_float("Change owed: ")
    if change > 0:
        break

# convert to cents
change = change * 100

# coin counter
coins = 0

# determine how many coins can be used
while change > 0:
    while change >= 25:  # quarters
        change = change - 25
        coins += 1
    while change >= 10:  # dimes
        change = change - 10
        coins += 1
    while change >= 5:  # nickles
        change = change - 5
        coins += 1
    while change >= 1:  # pennies
        change = change - 1
        coins += 1

# print coins
print(f"{coins}")
