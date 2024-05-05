package TP01.Q01eQ02;
class Palindromo {
    /**
     *  Verifica se a entrada é igual a "FIM".
     */
    public static boolean isFim(String s) {
        return s.equals("FIM");
    }

    /**
     *  Verifica se a string é um palíndromo.
     */
    public static boolean isPalindromo(String s) {
        int inicio = 0;
        int fim = s.length() - 1;
        
        while (inicio < fim) {
            if (s.charAt(inicio) != s.charAt(fim)) {
                return false;
            }
            inicio++;
            fim--;
        }
        return true;
    }

    /**
     *  Função principal.
     */
    public static void main(String[] args) {
        String entrada = "";

        do {
            entrada = MyIO.readLine();
            if (!isFim(entrada)) {
                if (isPalindromo(entrada)) {
                    MyIO.println("SIM");
                } else {
                    MyIO.println("NAO");
                }
            }
        } while (!isFim(entrada));
    }
}
