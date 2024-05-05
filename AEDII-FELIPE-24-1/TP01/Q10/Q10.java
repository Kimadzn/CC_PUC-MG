import java.io.*;
public class Q10 {

    public static void main(String[] args) {

        String palavra = MyIO.readLine();
        while (!palavra.equalsIgnoreCase("FIM")) {
            if (isPalindrome(palavra, 0, palavra.length() - 1)) {
                System.out.println("SIM");
            } else {
                System.out.println("NAO");
            }
            palavra = MyIO.readLine();
        }

    }

    public static boolean isPalindrome(String palavra, int inicio, int fim) {
        if (inicio >= fim) {
            return true;
        }
        if (palavra.charAt(inicio) != palavra.charAt(fim)) {
            return false;
        }
        return isPalindrome(palavra, inicio + 1, fim - 1);
    }
}
