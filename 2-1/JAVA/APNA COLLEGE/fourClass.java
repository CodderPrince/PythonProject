import java.util.Scanner;

public class fourClass {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a value: ");
        int x = sc.nextInt();
        // for(int i=0;i<x; i++)
        // {
        // System.out.println("Hello World!");
        // }
        // while(x>0)
        // {
        // System.out.println("Hello Prince");
        // x--;
        // }
        // }

        // do {
        // System.out.println("Hello Prince");
        // x--;
        // } while (x > 0);

        // int sum = 0;
        // for (int i = 1; i <= x; i++) {
        //     sum += i;
        // }
        // System.out.println("Sum of the first n Natural Number: " + sum);

        for(int i=1;i<=10;i++)
        {
            
                System.out.println(x + " * " +i + " = " +(i*x));
            
        }
    }

}
