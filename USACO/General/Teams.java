package USACO;
import java.util.*;

public class Teams {
    public static int res;
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);
        sc.nextLine();
        while (sc.hasNextLine()) {
            String linea = sc.nextLine();
            String[] parts = linea.split(" ");
            int tm1 = Integer.valueOf(parts[0]);
            int tm2 = Integer.valueOf(parts[1]);
            int tm3 = Integer.valueOf(parts[2]);
            if (tm1 + tm3 +tm2 > 1){
                res++;
            }
        }
        sc.close();
        System.out.println(res);
    }
}
