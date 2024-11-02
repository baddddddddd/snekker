public static void main(String[] args) {
    // String creation
    String str1 = "Hello";
    String str2 = "World";

    // String concatenation
    String combined = str1 + " " + str2;
    System.out.println("Combined String: " + combined);

    // String length
    System.out.println("Length: " + combined.length());

    // String indexing
    char firstChar = str1.charAt(0);
    System.out.println("First character of str1: " + firstChar);

    // String slicing
    String substring = str2.substring(1, 4); // From index 1 to 3
    System.out.println("Substring of str2: " + substring);

    // Check for substring
    boolean contains = str1.contains("lo");
    System.out.println("Does str1 contain 'lo'? " + (contains ? "Yes" : "No"));
}
