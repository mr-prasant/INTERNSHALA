import java.util.Scanner;

public class student_ID {

    public static void main(String[] args) {
        // Initialised class Scanner
        Scanner sc = new Scanner(System.in);

        // taking user input
        System.out.println("Enter Your Name: ");
        String name = sc.nextLine();

        System.out.println("Enter Your Age: ");
        int age = sc.nextInt();
        sc.nextLine();

        System.out.println("Enter Your Blood Group: ");
        String bGroup = sc.nextLine();

        String group = ""; // Initialized a variable

        // IF-ELSE-IF Ladder statements
        if (age >= 20) {
            group = "RED";
        } else if (age >= 15) {
            group = "BLUE";
        } else if (age >= 10) {
            group = "YELLOW";
        }

        System.out.println("———————————————————————————");
        System.out.println("  Name: " + name + "\n  Age: " + age + "\n  Blood Group: " + bGroup.toUpperCase());
        System.out.println("———————————————————————————");
        System.out.println("  Your group is " + group);
        System.out.println("———————————————————————————");
    }

}
