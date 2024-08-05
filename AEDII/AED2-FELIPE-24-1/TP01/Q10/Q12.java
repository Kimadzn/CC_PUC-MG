
import java.util.Scanner;

public class Q12 {

    public static String cifrarRecursivo(int chave, String mensagem, int index) {
        if (index >= mensagem.length()) {
            return "";
        }

        char c = mensagem.charAt(index);
        char novoChar;
        if (c != 65533) {
            novoChar = (char) (c + chave);
        } else {
            novoChar = c;
        }

        return novoChar + cifrarRecursivo(chave, mensagem, index + 1);
    }

    public static void main(String[] args) {
        String mensagem = "";
        Scanner sc = new Scanner(System.in);

        while (!(mensagem = sc.nextLine()).equals("FIM")) {
            String cripto = cifrarRecursivo(3, mensagem, 0);
            System.out.println(cripto);
        }
        sc.close();
    }
}
