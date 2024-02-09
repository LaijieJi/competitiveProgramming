import java.util.Scanner;

public class bitpp {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        int sol = 0;
        for(int i = 0; i < n; i++){
            String l = sc.nextLine();
            if(l.charAt(1) == '+'){
                ++sol;
            } else {
                --sol;
            }
        }
        sc.close();
        System.out.println(sol);
    }    
}
