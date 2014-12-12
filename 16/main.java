// euler project problem 16
// by Ian Zapolsky

import java.math.BigInteger;

public class main {
  public static void main(String[] args) {

    // get 2^1000
    BigInteger n = new BigInteger("2");
    n = n.pow(1000);
  
    // sum its digits
    String nString = n.toString();
    int sum = 0;
    for (int i = 0; i < nString.length(); i++) {
      sum += nString.charAt(i) - '0';
    }

    // print result
    System.out.println(sum);
  }
}
