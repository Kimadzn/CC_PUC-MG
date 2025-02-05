import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

class Registro {
    int id;
    String name;

    public Registro(int id, String name) {
        this.id = id;
        this.name = name;
    }

    @Override
    public String toString() {
        return id + "\t" + name;
    }
}

public class OrdenacaoSelecao {
    static int comparacoes = 0;
    static int movimentacoes = 0;

    public static void selectionSort(Registro[] arr) {
        int n = arr.length;
        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < n; j++) {
                comparacoes++;
                if (arr[j].name.compareTo(arr[minIndex].name) < 0) {
                    minIndex = j;
                }
            }
            if (minIndex != i) {
                Registro temp = arr[minIndex];
                arr[minIndex] = arr[i];
                arr[i] = temp;
                movimentacoes++;
            }
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Digite sua matrícula:");
        String matricula = scanner.nextLine();
        System.out.println("Digite o número de registros:");
        int n = scanner.nextInt();
        Registro[] registros = new Registro[n];

        for (int i = 0; i < n; i++) {
            int id = scanner.nextInt();
            String name = scanner.next();
            registros[i] = new Registro(id, name);
        }

        long startTime = System.nanoTime();
        selectionSort(registros);
        long endTime = System.nanoTime();
        long duration = (endTime - startTime);

        for (Registro registro : registros) {
            System.out.println(registro);
        }

        String filename = matricula + "_selecao.txt";
        try (FileWriter writer = new FileWriter(filename)) {
            writer.write(matricula + "\t" + comparacoes + "\t" + movimentacoes + "\t" + duration);
        } catch (IOException e) {
            System.out.println("Erro ao escrever o arquivo de log: " + e.getMessage());
        }

        scanner.close();
    }
}
