import java.util.Scanner;

public class ScannerAndKeyboard {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.print("Enter your name: ");
        String name = s.nextLine();
        System.out.println("Hello " + name + "!");

        System.out.print("Enter an integer: ");
        int i = s.nextInt();
        System.out.println("You entered the integer " + i);

        // if something not an integer was entered, an exception will be thrown

        s.close();
    }
}