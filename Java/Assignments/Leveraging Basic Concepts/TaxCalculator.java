import java.util.Scanner;

public class TaxCalculator {

    // creating a method for calculating tax and print the tax
    public static void calculateTax(String name, long income) {
        long tax = 0;
        if (income >= 300000) {
            tax = (long) (income * 0.2);
        } else if (income >= 100000) {
            tax = (long) (income * 0.1);
        } else {
            tax = 0;
        }

        // for printing the tax with name
        System.out.println(" " + name + " : " + '\u20B9' + " " + tax);
    }

    public static void main(String[] args) {
        // printing the statement
        System.out.println("Tax Calculator App\n" + "----- WELCOME -----");

        // initializing Class Scanner
        Scanner sc = new Scanner(System.in);

        // for asking the total number of person
        System.out.println("\nEnter total person count: ");
        int personCount = sc.nextInt();

        // creating the arrays of length person count
        String[] names = new String[personCount];
        long[] income = new long[personCount];

        System.out.println();
        // for asking and storing the name and income
        for (int i = 0; i < personCount; i++) {
            sc.nextLine();

            // asking name
            System.out.println("Enter name " + (i + 1) + " : ");
            String getName = sc.nextLine();

            // asking income
            System.out.println("Enter " + getName + "'s Annual Income: ");
            long getIncome = sc.nextLong();

            // storing data
            names[i] = getName;
            income[i] = getIncome;

            // creating a gap
            System.out.println();
        }

        // for calculating and printing the tax
        System.out.println(" Names with liable taxes\n" + "——————————————————");
        for (int i = 0; i < personCount; i++) {
            // calling method
            calculateTax(names[i], income[i]);
        }
    }

}
