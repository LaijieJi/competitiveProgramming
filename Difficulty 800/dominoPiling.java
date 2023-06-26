import java.util.Scanner;

//Problem 50A
public class dominoPiling{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int m = sc.nextInt(), n = sc.nextInt();
        sc.close();
        System.out.println((m*n) / 2);
    }
}