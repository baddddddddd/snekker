// Identify age group
int age = 22;

if (age <= 12)
{
    Console.WriteLine("You're a kid!");
} 
else if (age <= 18)
{
    Console.WriteLine("You're a teen!");
} 
else if (age <= 60)
{
    if (age <= 25)
    {
        Console.WriteLine("You're a young adult!");
    } 
    else
    {
        Console.WriteLine("You're an adult!");
    }
} 
else
{
    Console.WriteLine("You're old!");
}
