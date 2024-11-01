# Identify age group
age = 22

if age <= 12:
    print("You're a kid!")
    
elif age <= 18:
    print("You're a teen!")

elif age <= 60:
    if age <= 25:
        print("You're a young adult!")
        
    else:
        print("You're an adult!")

else:
    print("You're old!")
