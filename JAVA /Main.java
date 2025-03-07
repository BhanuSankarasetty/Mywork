import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        // Print Hello, World!
        System.out.println("Hello, World!");

        // Taking user input
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter your name: ");
        String name = scanner.nextLine();

        // Print user input
        System.out.println("Hello, " + name + "! Welcome to Java.");
        
        scanner.close();
    }
}
