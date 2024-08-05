import java.util.Scanner;


public class Aula02 {

    public static int teste(String[] pokemons, int tam) {

        int cont = 1;

        for (int i = 1; i < tam; i++) {
            if (!(pokemons[i].equals(pokemons[i - 1]))) {
                cont++;
            }
        }
        return cont;
    }

    public static void ordenar(String[] pokemons, int tam) {

        int menor;
        String aux;

        for (int i = 0; i < tam; i++) {

            menor = i;

            for (int j = 1; j < tam; j++) {

                if (pokemons[menor].compareTo(pokemons[j]) > 0) {

                    aux = pokemons[menor];
                    pokemons[menor] = pokemons[j];
                    pokemons[j] = aux;
                }
            }
        }

    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int tam = sc.nextInt();

        String[] pokemons = new String[tam];

        for (int i = 0; i < tam; i++) {
            pokemons[i] = sc.next();
        }

        ordenar(pokemons, tam);

        // for (int i = 0; i < tam; i++) {
        //     System.out.println("ordenado:" + pokemons[i] + "  ");
        // }

        int falta = 151 - teste(pokemons, tam);

        System.out.println("Falta(m) " + falta + " pomekon(s).");

        sc.close();

    }
}