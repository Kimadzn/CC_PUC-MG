import java.util.Scanner;

public class L1J1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String linha;
        
        while (!(linha = scanner.nextLine()).equals("FIM")) {
            int numMaiusculos = contarMaiusculosIterativo(linha);
            System.out.println(numMaiusculos);
        }
        
        scanner.close();
    }

    public static int contarMaiusculosIterativo(String str) {
        int contador = 0;
        for (int i = 0; i < str.length(); i++) {
            char c = str.charAt(i);
            if (Character.isUpperCase(c)) {
                contador++;
            }
        }
        return contador;
    }
}
