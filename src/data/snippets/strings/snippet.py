# String creation
str1 = "Hello"
str2 = "World"

# String concatenation
combined = str1 + " " + str2
print("Combined String:", combined)

# String length
print("Length:", len(combined))

# String indexing
first_char = str1[0]  # Get the first character of str1
print("First character of str1:", first_char)

# String slicing
substring = str2[1:4]  # Get substring from str2 (from index 1 to 3)
print("Substring of str2:", substring)

# Check for substring
contains = "lo" in str1
print("Does str1 contain 'lo'?", "Yes" if contains else "No")
