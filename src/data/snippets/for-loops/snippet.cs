// Print numbers from 1 to 20 with even or odd indication
for (int num = 1; num <= 20; num++)
{
    if (num % 2 == 0)
    {
        Console.WriteLine($"{num} is even");
    }
    else
    {
        Console.WriteLine($"{num} is odd");
    }
}
