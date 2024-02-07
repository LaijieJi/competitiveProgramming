package USACO;
import java.io.*;
import java.util.StringTokenizer;

public class InputOutput {
    /**
     * @param args
     * @throws IOException
     */
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new FileReader("teleport.in"));//Nombre de archivo de entrada
        StringTokenizer st = new StringTokenizer(br.readLine());
        PrintWriter pw = new PrintWriter("teleport.out");//Archivo de salida
        int a = Integer.parseInt(st.nextToken());
        int b = Integer.parseInt(st.nextToken());
        int x = Integer.parseInt(st.nextToken());
        int y = Integer.parseInt(st.nextToken());
        int min = Math.abs(b - a);
        br.close();
        min = Math.min(min, Math.abs(a - x) + Math.abs(b - y));
        min = Math.min(min, Math.abs(a - y) + Math.abs(b - x));
        pw.println(min);
        pw.close();
    }
}
