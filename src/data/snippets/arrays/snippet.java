import java.util.ArrayList;

public static void main(String[] args) {
    ArrayList<Integer> numbers = new ArrayList<>();
    numbers.add(10);
    numbers.add(20);
    numbers.add(30);
    numbers.add(40);
    numbers.add(50);

    // Updating an element
    numbers.set(2, 35);

    // Appending an element
    numbers.add(60);

    // Inserting an element at index 1
    numbers.add(1, 25);

    // Deleting an element at index 3
    numbers.remove(3);

    // Print final array
    System.out.print("Final array: ");
    for (int number : numbers) {
        System.out.print(number + " ");
    }
    System.out.println();
}
