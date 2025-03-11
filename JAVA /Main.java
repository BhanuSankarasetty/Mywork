import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        System.out.println("Hello, World!");
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter your name: ");
        String name;
        name = scanner.nextLine();
        System.out.println("Hello, " + name + "! Welcome to Java.");
        System.out.println("Bhanu"); 
        scanner.close();
    }
}
