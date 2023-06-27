import java.util.Scanner;
import java.util.Arrays;

public class helpful_maths {

    public static void main(String[] args) {
       
       
        Scanner sc = new Scanner(System.in);
        String l = sc.nextLine();
        sc.close();
        l = l.replace("+", "");
        char []arr = l.toCharArray();
        Arrays.sort(arr);
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]);
            if(i == arr.length-1)
                continue;
            System.out.print("+");           
        }
        System.out.println();
    }
}