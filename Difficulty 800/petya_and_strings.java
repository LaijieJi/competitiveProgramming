import java.util.Scanner;

public class petya_and_strings {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String l1 = sc.nextLine().toLowerCase(), l2 = sc.nextLine().toLowerCase();
        sc.close();
        int sol = l1.compareTo(l2);
        if(sol < 0){
            sol = -1;
        } else if(sol > 0){
            sol = 1;
        }
        System.out.println(sol);
    }
}
