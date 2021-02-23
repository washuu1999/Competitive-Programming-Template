import java.io.*;
import java.util.*;


public class Template {

	public static void main(String[] args) throws IOException {
		// InputStreamReader input = new InputStreamReader(System.in);
		FileReader input = new FileReader("input.txt");
		BufferedReader br = new BufferedReader(input);
		int n = Integer.parseInt(br.readLine().trim());
		System.out.println(n);
	}

}


class In {

	BufferedReader br;
	StringTokenizer st;

	public In (InputStreamReader input) {
		this.br = new BufferedReader(input);
		this.st = new StringTokenizer("");
	}

	public In (FileReader input) {
		this.br = new BufferedReader(input);
		this.st = new StringTokenizer("");
	}

	String next() {
		while (!st.hasMoreTokens())
			try {
				st = new StringTokenizer(br.readLine());
			} catch (IOException e) {
				e.printStackTrace();
			}
		return st.nextToken();
	}

	/* read next-string */
	String ns() {
		String str = "";
		try {
			str = br.readLine();
		} catch (IOException e) {
			e.printStackTrace();
		}
		return str;
	}

	/* read next-int */
	int ni() {
		return Integer.parseInt(next());
	}

	/* read next-double */
	long nl() {
		return Long.parseLong(next());
	}

	/* read next-long */
	double nd() {
		return Double.parseDouble(next());
	}

	/* read int array[n] */
	int[] ia(int n) {
		int[] a = new int[n];
		for (int i = 0; i < n; i++) {
			a[i] = ni();
		}
		return a;
	}

	/* read long array[n] */
	long[] la(int n) {
		long[] a = new long[n];
		for (int i = 0; i < n; i++) {
			a[i] = nl();
		}
		return a;
	}

	/* read double array[n] */
	double[] da(int n) {
		double[] a = new double[n];
		for (int i = 0; i < n; i++) {
			a[i] = nd();
		}
		return a;
	}

}
