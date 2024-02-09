import java.util.Scanner;

public class wordCapitalization{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        char c = s.charAt(0);
        String ans = (Character.toUpperCase(c)) + s.substring(1);

        System.out.println(ans);
        sc.close();
    }

}