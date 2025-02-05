import java.util.Random;

public class Q04 {
    public static boolean isFim(String s) {
        boolean result = false;
        if (s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M') {
            result = true;
        }
        return result;
    }

    public static char randomChar() {
        Random gerador = new Random(4);
        char c = (char) ('a' + (Math.abs(gerador.nextInt()) % 26));
        return c;
    }

    public static String randomChange(String s) {
        String result = "";
        char c1 = randomChar();
        char c2 = randomChar();
        int length = s.length();
        for (int x = 0; x < length; x = x + 1) {
            char c0 = s.charAt(x);
            if (s.charAt(x) == c1) {
                result = result + c2;
            } else {
                result = result + c0;
            }
        }
        return result;
    }

    public static void main(String[] args) {
        String[] entrada = new String[1000];
        int numEntrada = 0;

        do {
            entrada[numEntrada] = MyIO.readLine();
        } while (isFim(entrada[numEntrada++]) == false);
        numEntrada--;

        for (int x = 0; x < numEntrada; x = x + 1) {
            MyIO.println(randomChange(entrada[x]));
        }
    }
}
