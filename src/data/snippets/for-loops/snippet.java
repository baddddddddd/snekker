public static void main(String[] args) {
    // Print numbers from 1 to 20 with even or odd indication
    for (int num = 1; num <= 20; num++) {
        if (num % 2 == 0) {
            System.out.println(num + " is even");
        } else {
            System.out.println(num + " is odd");
        }
    }
}