import java.util.ArrayList;
import java.util.List;

public class Lista {
    public static void main(String[] args) {
        // Criando uma lista (ArrayList)
        List<Integer> lista = new ArrayList<>();

        // Adicionar elementos na lista
        lista.add(10);
        lista.add(20);
        lista.add(30);
        System.out.println("Lista após inserções: " + lista);

        // Acessar elementos pelo índice
        int elemento = lista.get(1); // Acessa o segundo elemento (índice 1)
        System.out.println("Elemento no índice 1: " + elemento);

        // Remover um elemento da lista
        lista.remove(1); // Remove o elemento no índice 1
        System.out.println("Lista após remoção: " + lista);

        // Verificar o tamanho da lista
        int tamanho = lista.size();
        System.out.println("Tamanho da lista: " + tamanho);

        // Verificar se a lista está vazia
        boolean isEmpty = lista.isEmpty();
        System.out.println("A lista está vazia? " + isEmpty);
    }
}

/* Explicação de Lista:
Lista (List) é uma estrutura de dados que permite armazenar elementos em uma sequência, permitindo acessos e modificações por índice.
Os principais métodos são:
add(): Adiciona elementos à lista.
get(): Acessa um elemento pelo índice.
remove(): Remove um elemento da lista.
size(): Retorna o número de elementos na lista.
isEmpty(): Verifica se a lista está vazia. */
