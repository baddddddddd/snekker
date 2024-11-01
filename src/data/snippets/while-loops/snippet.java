public static void main(String[] args) {
    int count = 10;  // Starting countdown number

    while (count >= 0) {
        // Skip even numbers
        if (count % 2 == 0) {
            count--;
            continue;
        }

        // Print the current count
        System.out.println(count);
        
        count--; // Decrement the counter
    }
}
