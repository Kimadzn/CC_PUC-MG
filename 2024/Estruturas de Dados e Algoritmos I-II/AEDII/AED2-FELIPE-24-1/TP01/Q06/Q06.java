import java.util.Scanner;

public class Q06 {

    public static boolean isVogal(String str) {
        return str.matches("[AEIOUaeiou]+");
    }

    public static boolean isConsoante(String str) {
        return str.matches("[BCDFGHJKLMNPQRSTVWXYZbcdfghjklmnpqrstvwxyz]+");
    }

    public static boolean isInteiro(String str) {
        return str.matches("[+-]?\\d+");
    }

    public static boolean isReal(String str) {
        return str.matches("[+-]?\\d*\\.?\\d+");
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
