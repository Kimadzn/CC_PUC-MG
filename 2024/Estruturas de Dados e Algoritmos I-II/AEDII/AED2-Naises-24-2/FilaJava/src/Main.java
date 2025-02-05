import java.util.LinkedList;
import java.util.Queue;


// FILA EM JAVA First in first out

public class Main {
    public static void main(String[] args) {

        Queue<String> carros = new LinkedList<>();
        carros.add("HRV");
        carros.add("Golf");
        carros.add("Polo");
        carros.add("Camaro");
        carros.add("Tiggo 3x");

        System.out.println("Topo da fila: " + carros.peek());
        System.out.println(carros);

    }
}