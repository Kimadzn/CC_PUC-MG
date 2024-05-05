import java.util.Scanner;

public class L1J2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String linha;
        
        while (!(linha = scanner.nextLine()).equals("FIM")) {
            int numMaiusculos = contarMaiusculosRecursivo(linha);
            System.out.println(numMaiusculos);
        }
        
        scanner.close();
    }

    public static int contarMaiusculosRecursivo(String str) {
        return contarMaiusculosRecursivo(str, 0);
    }

    private static int contarMaiusculosRecursivo(String str, int indice) {
        if (indice == str.length()) {
            return 0;
        }
        
        char c = str.charAt(indice);
        int contador = Character.isUpperCase(c) ? 1 : 0;
        return contador + contarMaiusculosRecursivo(str, indice + 1);
    }
}
