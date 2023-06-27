package USACO;
import java.util.*;

public class WeirdAlgorithm {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);
        int a = sc.nextInt();
        while (a != 1){
            if ((a % 2) == 0){
                a = a / 2;
                System.out.println(a);
            } else {
                a = (a * 3) + 1;
                System.out.println(a);
            }
        }
        System.out.println(a);
        sc.close();
    }
}
