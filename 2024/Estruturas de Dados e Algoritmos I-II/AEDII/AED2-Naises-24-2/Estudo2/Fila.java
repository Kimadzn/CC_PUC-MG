import java.util.LinkedList;
import java.util.Queue;

public class Fila {
    public static void main(String[] args) {
        // Criando uma fila (queue)
        Queue<Integer> fila = new LinkedList<>();

        // Inserir elementos na fila (Enqueue)
        fila.add(10);
        fila.add(20);
        fila.add(30);
        System.out.println("Fila após inserções: " + fila);

        // Remover elementos da fila (Dequeue)
        int elemento = fila.remove();
        System.out.println("Elemento removido: " + elemento);
        System.out.println("Fila após remoção: " + fila);

        // Verificar o primeiro da fila (Peek)
        int primeiro = fila.peek();
        System.out.println("Primeiro elemento da fila: " + primeiro);

        // Verificar se a fila está vazia
        boolean isEmpty = fila.isEmpty();
        System.out.println("A fila está vazia? " + isEmpty);
    }
}

/* Explicação de Fila:
Fila (Queue) é uma estrutura de dados FIFO (First In, First Out), ou seja, o primeiro elemento a ser inserido é o primeiro a ser removido.
Os principais métodos são:
add(): Insere um elemento no final da fila.
remove(): Remove o elemento no início da fila.
peek(): Verifica o primeiro elemento sem removê-lo.
isEmpty(): Verifica se a fila está vazia. */
