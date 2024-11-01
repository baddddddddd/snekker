public static void main(String[] args) {
    // Identify age group
    int age = 22;

    if (age <= 12) {
        System.out.println("You're a kid!");

    } else if (age <= 18) {
        System.out.println("You're a teen!");

    } else if (age <= 60) {
        if (age <= 25) {
            System.out.println("You're a young adult!");

        } else {
            System.out.println("You're an adult!");
        }
        
    } else {
        System.out.println("You're old!");
    }
}