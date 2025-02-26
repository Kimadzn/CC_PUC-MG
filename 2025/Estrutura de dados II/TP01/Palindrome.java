import java.util.Scanner;

public class Palindrome {

    public static boolean isPalindromo(String input) {
        int length = input.length();
        for (int i = 0; i < length / 2; i++) {
            if (input.charAt(i) != input.charAt(length - 1 - i)) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        String frase;
        while (true) {
            frase = sc.nextLine();
            boolean isFim = frase.length() == 3 && frase.charAt(0) == 'F' && frase.charAt(1) == 'I' && frase.charAt(2) == 'M';
            if (isFim) {
                break;
            }
            System.out.println(isPalindromo(frase) ? "SIM" : "NAO");
        }
        
        sc.close();
    }
}
