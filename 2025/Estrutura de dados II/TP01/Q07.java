import java.io.*;

public class Q07 {

    public static String inverterString(String s) {
        StringBuilder sb = new StringBuilder();
        for (int i = s.length() - 1; i >= 0; i--) {
            sb.append(s.charAt(i));
        }
        return sb.toString();
    }

    public static void main(String[] args) {
        String nome = "";
        while (true) {
            nome = MyIO.readLine();
            if (isFim(nome)) {
                break;
            }
            String nomeInvertido = inverterString(nome);
            MyIO.println(nomeInvertido);
        }
    }

    public static boolean isFim(String s) {
        return s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M';
    }
}
