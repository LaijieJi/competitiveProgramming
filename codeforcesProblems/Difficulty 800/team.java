import java.util.Scanner;

//Problem 231A 
public class team {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int sol = 0;
        for(int i = 0; i < n; i++){
            int sum = 0;
            sum += sc.nextInt();
            sum += sc.nextInt();
            sum += sc.nextInt();
            if(sum >= 2) ++sol; 
        }
        sc.close();
        System.out.println(sol);
    }
}
