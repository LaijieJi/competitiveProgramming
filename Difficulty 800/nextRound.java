import java.util.*;
import java.io.*;

//Problem 158A
public class nextRound {

	public static void main(String args[]) throws IOException {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int k = sc.nextInt();
		int[] data = new int[n + 1];
		int minScore = 0;
		for (int i = 1; i <= n; i++) {
			int score = sc.nextInt();
			data[i] = score;
			if (i == k)
				minScore = score;
		}
        sc.close();
		int count = 0;
		for (int i = 1; i <= n; i++) {
			if (data[i] >= minScore && data[i] > 0)
				count++;
		}

		System.out.println(count);
	}
}