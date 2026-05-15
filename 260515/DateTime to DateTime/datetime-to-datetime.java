import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        int C = sc.nextInt();
        // Please write your code here.
        int sum = (A - 11) * 24 * 60 + (B - 11) * 60 + C - 11;
        if(sum < 0)
        {
            sum = -1;
        }
        System.out.println(sum);
    }
}