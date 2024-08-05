import java.util.Scanner;

public class teste2{
    public static void main(String []args){
        System.out.println("Qual Seu nome ?");
        String user;// Local que armazena o nome;

        Scanner reader = new Scanner(System.in);
        user = reader.nextLine();

        System.out.println("Ola," + user + " Seja bem vindo!");
    }
}