import java.util.*;
//Problem 4A
public class watermelon{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while(sc.hasNext()){
            int n = sc.nextInt();
            if(n > 2){
                if(n % 2 == 0){
                    System.out.println("YES");
                } else {
                    System.out.println("NO");
                }
            } else {
                System.out.println("NO");
            }
        }
        sc.close();
    }
}