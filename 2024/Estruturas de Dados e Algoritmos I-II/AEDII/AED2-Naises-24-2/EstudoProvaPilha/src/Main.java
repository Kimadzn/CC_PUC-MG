import java.util.Stack;
// PILHA em java
public class Main {
    public static void main(String[] args) {
        Stack<String> carros = new Stack<String>();

        carros.push("HRV");
        carros.push("Golf");
        carros.push("Polo");
        carros.push("Camaro");
        carros.push("Tiggo 3x");

        System.out.println(carros);
        System.out.println("Topo do carro da fila " + carros.peek());
        System.out.println(carros.pop());
        System.out.println(carros);


        /*for (String c : carros) {
            System.out.println(c);
        }*/
    }
}