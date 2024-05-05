import java.util.Scanner;

public class testessss {

    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        System.out.println("Ola Mundo");
        float nota = teclado.nextFloat();
        String nome = teclado.nextLine();
        System.out.println("Sua Nota é " + nota);
        System.out.printf("Sua Nota é  %.2f", nota);
        
    }
}