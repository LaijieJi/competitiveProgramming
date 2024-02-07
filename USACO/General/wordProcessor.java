import java.util.Scanner;

public class wordProcessor{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int size = 0;
        boolean start = true;
        for(int i = 0; i < n; i++){
            String s = sc.next();
            if(start){
                System.out.print(s);
                start = false;
                size += s.length();
            } else if(size + s.length() <= k){
                System.out.print(" " + s);
                size += s.length();
            } else if(size + s.length() > k){
                System.out.print("\n" + s);
                size = s.length();
            }
        }
        sc.close();
    }
}