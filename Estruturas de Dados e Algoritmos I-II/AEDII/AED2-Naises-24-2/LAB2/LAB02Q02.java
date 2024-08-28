package LAB2;

import java.util.Scanner;

public class LAB02Q02 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Loop para ler três pares de números e gerar a sequência espelho
        for(int i = 0; i < 3; i++){
            int x = sc.nextInt();
            int y = sc.nextInt();
            espelho(x, y);
            System.out.println();  // Adiciona uma nova linha após cada saída
        }
        sc.close();
    }

    // Método para gerar a sequência espelho
    public static void espelho(int x, int y) {
        for (int i = x; i <= y; i++) {
            String original = String.valueOf(i);
            String inverso = new StringBuilder(original).reverse().toString();
            System.out.print(original + inverso);
        }
    }
}
