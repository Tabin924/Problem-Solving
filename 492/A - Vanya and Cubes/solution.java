import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int height = 0;
        int cube = 1;
        while(true){
            int i = (cube * (cube + 1))/2;
            if(i <= n){
                height++;
                n -= i;
                cube++;
            }
            else{
                break;
            }
        }
        System.out.println(height);
    }
}