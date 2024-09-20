import java.util.Stack;

public class Pilha {
    public static void main(String[] args) {
        // Criando uma pilha (stack)
        Stack<Integer> pilha = new Stack<>();

        // Empilhar (Push)
        pilha.push(10);
        pilha.push(20);
        pilha.push(30);
        System.out.println("Pilha após empilhar: " + pilha);

        // Desempilhar (Pop)
        int elemento = pilha.pop();
        System.out.println("Elemento desempilhado: " + elemento);
        System.out.println("Pilha após desempilhar: " + pilha);

        // Verificar o topo da pilha (Peek)
        int topo = pilha.peek();
        System.out.println("Elemento no topo: " + topo);

        // Verificar se a pilha está vazia
        boolean isEmpty = pilha.isEmpty();
        System.out.println("A pilha está vazia? " + isEmpty);
    }
}

/* Explicação de Pilha:
Pilha (Stack) é uma estrutura de dados LIFO (Last In, First Out), ou seja, o último elemento a ser inserido é o primeiro a ser removido.
Os principais métodos são:
push(): Insere um elemento no topo.
pop(): Remove o elemento do topo.
peek(): Verifica qual é o elemento no topo sem removê-lo.
isEmpty(): Verifica se a pilha está vazia. */
