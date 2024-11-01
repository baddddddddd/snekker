// Initialize a counter
int count = 10;  // Starting countdown number

while (count >= 0)
{
    // Skip even numbers
    if (count % 2 == 0)
    {
        count--;
        continue;
    }

    // Print the current count
    Console.WriteLine(count);
    
    count--; // Decrement the counter
}
