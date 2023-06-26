import java.util.Scanner;

public class beautifulMatrix {
    public static void main(String[] args) {
        int x = 0, y = 0;
        Scanner sc = new Scanner(System.in);
        for(int i = 0; i < 5;i++){
            for(int j = 0; j < 5;j++){
                if(sc.nextInt() == 1){
                    x = j + 1;
                    y = i + 1;
                    break;
                }
            }
        }
        sc.close();
        int sol = 0;
        if(x < 3) {
            sol += 3 - x;
        } else {
            sol += x - 3;
        }
        if(y < 3){
            sol += 3 - y;
        } else {
            sol += y - 3;
        }
        System.out.println(sol);
    }    
}
