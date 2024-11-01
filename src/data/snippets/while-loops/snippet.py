count = 10  # Starting countdown number

while count >= 0:
    # Skip even numbers
    if count % 2 == 0:
        count -= 1
        continue
    
    # Print the current count
    print(count)
    
    count -= 1  # Decrement the counter
