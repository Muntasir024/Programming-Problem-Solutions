import java.math.BigInteger;
import java.util.Scanner;

public class Main{

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (sc.hasNext()) {
            int n = sc.nextInt();
            int a = sc.nextInt();
            BigInteger f =  BigInteger.ZERO;
            BigInteger d =  BigInteger.ONE;
            for (int i = 1; i <= n; i++) {
                d = d.multiply(BigInteger.valueOf(a));
                f = f.add(d.multiply(BigInteger.valueOf(i)));
            }
            System.out.println(f);
        }
    }
}