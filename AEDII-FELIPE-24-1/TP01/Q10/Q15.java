import java.util.Scanner;

public class Q15 {

    public static boolean isVogal(String str) {
        if (str.isEmpty()) {
            return true; // String vazia é considerada vogal
        }

        char c = str.charAt(0);
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
            c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            return isVogal(str.substring(1));
        } else {
            return false;
        }
    }

    public static boolean isConsoante(String str) {
        if (str.isEmpty()) {
            return false; // String vazia não é consoante
        }

        char c = str.charAt(0);
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            return !isVogal(Character.toString(c)) && isConsoante(str.substring(1));
        } else {
            return false;
        }
    }

    public static boolean isInteiro(String str) {
        if (str.isEmpty()) {
            return false; // String vazia não é inteiro
        }

        char c = str.charAt(0);
        if ((c >= '0' && c <= '9') || (c == '+' || c == '-') && str.length() > 1) {
            return isInteiro(str.substring(1));
        } else {
            return false;
        }
    }

    public static boolean isReal(String str) {
        if (str.isEmpty()) {
            return false; // String vazia não é real
        }

        boolean pontoEncontrado = false;
        for (int i = 0; i < str.length(); i++) {
            char c = str.charAt(i);
            if ((c >= '0' && c <= '9') || (c == '+' || c == '-') && i == 0) {
                continue;
            } else if (c == '.' && !pontoEncontrado) {
                pontoEncontrado = true;
            } else {
                return false;
            }
        }
        return pontoEncontrado;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (scanner.hasNextLine()) {
            String entrada = scanner.nextLine();

            boolean vogal = isVogal(entrada);
            boolean consoante = isConsoante(entrada);
            boolean inteiro = isInteiro(entrada);
            boolean real = isReal(entrada);

            System.out.println((vogal ? "SIM" : "NAO") + " " +
                               (consoante ? "SIM" : "NAO") + " " +
                               (inteiro ? "SIM" : "NAO") + " " +
                               (real ? "SIM" : "NAO"));
        }

        scanner.close();
    }
}
