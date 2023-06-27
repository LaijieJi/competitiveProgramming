import java.util.Scanner;

public class bucketBrigade{
	public static void main(String[] args) {

		int barnI = 0, barnJ = 0, rockI = 0, rockJ = 0, lakeI = 0, lakeJ = 0;

		Scanner io = new Scanner(System.in);

		for (int i = 0; i < 10; i++) {

			String row = io.next();

			for (int j = 0; j < 10; j++) {

				if (row.charAt(j) == 'B') {

					barnI = i;

					barnJ = j;

				} else if (row.charAt(j) == 'R') {

					rockI = i;

					rockJ = j;

				} else if (row.charAt(j) == 'L') {

					lakeI = i;

					lakeJ = j;

				}

			}

		}


		// distance without accounting for the rock

		int cows = Math.abs(barnI - lakeI) + Math.abs(barnJ - lakeJ) - 1;


		// if the barn, lake and rock are in the same row

		// and the rock is betwen the barn and the lake

		if (barnI == lakeI && barnI == rockI &&

		    ((lakeJ < rockJ && rockJ < barnJ) ||

		     (barnJ < rockJ && rockJ < lakeJ))) {

			cows += 2;

		}

		// if the barn, lake and rock are in the same column

		// and the rock is between the barn and the lake

		else if (barnJ == lakeJ && barnJ == rockJ &&

		         ((lakeI < rockI && rockI < barnI) ||

		          (barnI < rockI && rockI < lakeI))) {

			cows += 2;

		}

		System.out.println(cows);

		io.close();

	}
}