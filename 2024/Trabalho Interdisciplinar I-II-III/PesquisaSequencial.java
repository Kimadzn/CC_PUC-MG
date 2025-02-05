import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class PesquisaSequencial {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        List<String> vetor = new ArrayList<>();
        List<String> pesquisas = new ArrayList<>();
        String matricula = "123456";  

        String entrada;
        while (!(entrada = scanner.nextLine()).equals("FIM")) {
            vetor.add(entrada);
        }

        while (!(entrada = scanner.nextLine()).equals("FIM")) {
            pesquisas.add(entrada);
        }

        long inicioTempo = System.nanoTime();
        int comparacoes = 0;

        for (String pesquisa : pesquisas) {
            boolean encontrado = false;
            for (String elemento : vetor) {
                comparacoes++;
                if (elemento.equals(pesquisa)) {
                    encontrado = true;
                    break;
                }
            }
            if (encontrado) {
                System.out.println("SIM");
            } else {
                System.out.println("NAO");
            }
        }

        long fimTempo = System.nanoTime();
        long tempoExecucao = fimTempo - inicioTempo;

        try (BufferedWriter writer = new BufferedWriter(new FileWriter(matricula + "_sequencial.txt"))) {
            writer.write(matricula + "\t" + tempoExecucao + "\t" + comparacoes);
        } catch (IOException e) {
            System.out.println("Erro ao escrever o arquivo de log.");
        }

        scanner.close();
    }
}
