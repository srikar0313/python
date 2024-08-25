import java.util.Scanner;

public class input {
    public static void main(String[] args) {
        try (Scanner s = new Scanner(System.in)) {
            System.out.println("enter the number:");
            int m = s.nextInt();
            System.out.println("your number is:" + m);

        }
    }
}
