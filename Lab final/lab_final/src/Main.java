import java.util.Scanner;


import static java.lang.Math.sqrt;

public class Main {
    public static void main(String[] args) {
        int a,b,c;
        System.out.println("Enter the equation as  ax2+bx+c = 0 ");
        System.out.print("Enter a = ");
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        System.out.print("Enter b = ");
        b = sc.nextInt();
        System.out.println("Enter c = ");
        c = sc.nextInt();

        int D = b*b - (4*a*c);
        if(D==0) {

            double x = Math.sqrt(c);
            System.out.println(" x = " +(int)x );
        }
        else if( D >0 ) {
            double x1 = (-b + Math.sqrt(D))/(2*a);
            double x2 = (-b - Math.sqrt(D))/(2*a);
            System.out.println(" x1 = " +(int) x1 +"\n x2 = " +(int)x2);
        }
        else {
            double real = - (double)b / (2 * a);
            double imaginary = Math.sqrt(-D) / (2 * a);
            System.out.format("root1 = %.2f+%.2fi", real, imaginary);
            System.out.format("\nroot2 = %.2f-%.2fi", real, imaginary);
        }
    }
}








