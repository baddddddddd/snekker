
// String creation
string str1 = "Hello";
string str2 = "World";

// String concatenation
string combined = str1 + " " + str2;
Console.WriteLine("Combined String: " + combined);

// String length
Console.WriteLine("Length: " + combined.Length);

// String indexing
char firstChar = str1[0];
Console.WriteLine("First character of str1: " + firstChar);

// String slicing
string substring = str2.Substring(1, 3); // From index 1, length 3
Console.WriteLine("Substring of str2: " + substring);

// Check for substring
bool contains = str1.Contains("lo");
Console.WriteLine("Does str1 contain 'lo'? " + (contains ? "Yes" : "No"));
