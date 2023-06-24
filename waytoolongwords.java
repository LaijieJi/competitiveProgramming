import java.util.Scanner;
//Problem 71A
public class waytoolongwords {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i = 0; i <= n;i++){
            String s = sc.nextLine();
            if(s.length() > 10){
                System.out.printf("%s%d%s\n", s.charAt(0), s.length() - 2, s.charAt(s.length() - 1));
            } else {
                System.out.println(s);
            }
        }
        sc.close();
    }
}
