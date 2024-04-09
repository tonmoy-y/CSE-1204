import java.lang.annotation.Inherited;
import java.util.Scanner;


class A {
    int x;
    public A() {
        System.out.println("Im in const of A");        x = 0;
    }
    public A(int x) {
        System.out.println("Im in parameterized const of A");
        this.x = x;    }
    public int getX() {
        System.out.println("You are in clas A ");
        return (x + 10);
    }
    class B extends A {
        int x = 20;
        public B(){
            System.out.println("Im in const in B");        }
        public B(int x) {
            super(x);
            System.out.println("Im in parameterized const of B");        }
        public void displayX() {
            System.out.println("Value of x in class A: " + super.x);        }
        public void callGetXInA() {
            int result = super.getX();
            System.out.println("Result of calling getX() in class A: " + result);
        }    }
}
public class Main {
    public static void main(String[] args){
        A a=new A();
        // B b= new B();               // a.displayX();
        //  a.callGetXInA();//Call getX() of class A in class B               //A.B b=new A.B();
        A.B b=a.new B(7);
        b.displayX();
        b.getX();
        b.callGetXInA();
    }        }

