import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        sc.close();
        int f = 0;
        for(int i=0; i<s.length(); i++){
            if(s.charAt(i) == 'H' || s.charAt(i) == 'Q' || s.charAt(i) == '9'){
                System.out.println("YES");
                f = 1;
                break;
            }
        }
        if(f==0){
            System.out.println("NO");
        }
    }
}