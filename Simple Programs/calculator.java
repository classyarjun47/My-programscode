
import java.util.*;

class calculator {

  public static void main(String[] args) {

    int a, b;

    System.out.println("Enter First Number:");
    Scanner s = new Scanner(System.in);

    a = s.nextInt();

    System.out.println("Enter Second Number:");
    b = s.nextInt();

    int c = a + b;
    int d = a - b;
    int e = a * b;
    int f = a / b;

    System.out.println(" Addition is=" + c);
    System.out.println(" subtractiion is =" + d);
    System.out.println(" multiplication is=" + e);
    System.out.println(" divide is =" + f);

  }

}