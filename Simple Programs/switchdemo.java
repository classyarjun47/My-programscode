
    import java.util.*;

    class switchdemo {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int ch;
        System.out.print("Enter your choice:");
        ch=sc.nextInt();

        switch (ch) {

        case 1:
        System.out.println("Today is Monday");
        break;

        case 2:
        System.out.println("Today is tuesday");
        break;

        case 3:
        System.out.println("Today is wednesday");
        break;

        case 4:
        System.out.println("Today is thusday");
        break;

        case 5:
        System.out.println("Today is friday");
        break;

        case 6:
        System.out.println("Today is saturdy");
        break;

        default:
        System.out.println("Today is sunday");

        }

        System.out.println(ch);

     }

}