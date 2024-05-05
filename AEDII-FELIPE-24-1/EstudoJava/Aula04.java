import java.util.Scanner;

public class Aula04 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("Digite seu nome:");
        String nome = scanner.nextLine(); // Lê uma linha de texto
        
        System.out.println("Digite sua idade:");
        int idade = scanner.nextInt(); // Lê um número inteiro
        
        System.out.println("Digite seu peso:");
        double peso = scanner.nextDouble(); // Lê um número decimal
        
        System.out.println("Olá, " + nome + "! Você tem " + idade + " anos e pesa " + peso + " kg.");
        
        scanner.close(); // Feche o scanner quando não for mais necessário
    }
}
