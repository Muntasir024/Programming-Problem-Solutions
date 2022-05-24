import java.math.BigInteger;
import java.util.Scanner;

public class Main{

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        BigInteger[] series = new BigInteger[807];
        series[1]=BigInteger.ZERO;
        series[2]=BigInteger.ONE;
        for(int i=3;i<=802;i++)
        {
            series[i] = series[i-1].add(series[i-2]);
            series[i] = series[i].multiply(BigInteger.valueOf(i-1));
        }
        while (sc.hasNext()) {
            int n = sc.nextInt();
            if(n == (-1)) break;
            System.out.println(series[n]);
        }
    }
}