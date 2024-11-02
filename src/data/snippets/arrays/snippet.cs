List<int> numbers = new List<int> { 10, 20, 30, 40, 50 };

// Updating an element
numbers[2] = 35;

// Appending an element
numbers.Add(60);

// Inserting an element at index 1
numbers.Insert(1, 25);

// Deleting an element at index 3
numbers.RemoveAt(3);

// Print final array
Console.WriteLine("Final array: " + string.Join(", ", numbers));