import java.util.Scanner;
import java.util.Stack;

public class LAB3 {

    public static boolean verificaParenteses(String expressao) {
        Stack<Character> pilha = new Stack<>();

        for (int i = 0; i < expressao.length(); i++) {
            char c = expressao.charAt(i);

            if (c == '(') {
                pilha.push(c);  
            } else if (c == ')') {
                
                if (pilha.isEmpty()) {
                    return false;  

            }
        }

    }
        return pilha.isEmpty();
        
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Digite a expressão para verificar (ou 'sair' para encerrar):");

        while (true) {
            String expressao = scanner.nextLine();

            if (expressao.equalsIgnoreCase("sair")) {
                break;
            }

            if (verificaParenteses(expressao)) {
                System.out.println("A expressão '" + expressao + "' está correta.");
            } else {
                System.out.println("A expressão '" + expressao + "' está incorreta.");
            }

            System.out.println("Digite outra expressão (ou 'sair' para encerrar):");
        }

        scanner.close();
    }
}
