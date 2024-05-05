import java.util.Scanner;

public class teste {

    public static void main(String[] args)
    {
        Scanner teclado = new Scanner(System.in);
        float n1 = teclado.nextFloat();
        float n2 = teclado.nextFloat();

        float m = (n1+n2)/2;

        System.out.println("Sua Media foi " + m);

        if(m>9){
            System.out.println("Parabens");
        }

    }
}
