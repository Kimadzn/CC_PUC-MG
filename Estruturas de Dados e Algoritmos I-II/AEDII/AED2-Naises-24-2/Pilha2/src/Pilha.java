public class Pilha {
    int elementos[];
    int topo;

    // Construtor da pilha
    public Pilha() {
        elementos = new int[10];  // Pilha com tamanho fixo de 10 elementos
        topo = -1; // Posição inicial (indicando pilha vazia)
    }

    // Método para empilhar (push)
    public void push(int e) {
        if (isFull()) {
            System.out.println("A pilha está cheia, não é possível empilhar.");
            return;
        }
        topo++;
        elementos[topo] = e;
        System.out.println("Empilhou: " + e);
    }

    // Método para desempilhar (pop)
    public int pop() {
        if (isEmpty()) {
            System.out.println("A pilha está vazia, não é possível desempilhar.");
            return -1;  // Valor indicando pilha vazia
        }
        int e = elementos[topo];
        topo--;
        System.out.println("Desempilhou: " + e);
        return e;
    }

    // Verifica se a pilha está vazia
    public boolean isEmpty() {
        return topo == -1;
    }

    // Verifica se a pilha está cheia
    public boolean isFull() {
        return topo == 9; // Como a pilha tem 10 elementos (índice 0 a 9)
    }

    // Método para visualizar o elemento do topo
    public int top() {
        if (isEmpty()) {
            System.out.println("A pilha está vazia.");
            return -1; // Indicador de pilha vazia
        }
        return elementos[topo];
    }

    public static void main(String[] args) {
        Pilha p = new Pilha();

        // Empilhando elementos
        p.push(5);
        p.push(4);
        p.push(3);
        p.push(2);
        p.push(1);

        // Desempilhando elementos
        p.pop(); // Remove o 1
        p.pop(); // Remove o 2
        p.pop(); // Remove o 3
        p.pop(); // Remove o 4
        p.pop(); // Remove o 5

        // Tentar desempilhar em pilha vazia
        p.pop(); // Tentativa falha
    }
}
