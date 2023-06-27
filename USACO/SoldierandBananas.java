import java.util.*;
public class SoldierandBananas{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);
        int cost = sc.nextInt(), dollars = sc.nextInt(), bananas = sc.nextInt(), n = 1, totalcost = 0;
        while(n <= bananas){
            totalcost += n * cost;
            ++n;
        }
        System.out.println(totalcost - dollars);
    }
}