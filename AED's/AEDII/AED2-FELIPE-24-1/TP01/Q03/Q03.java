package TP01.Q03;

import java.util.Scanner;

public class Q03 {

    public static String cifrar(int chave, String mensagem){
        String cifrada = "";
        for(int i = 0; i < mensagem.length(); i++){
            char c = mensagem.charAt(i);
            if(c != 65533){
                cifrada += (char) (c+chave);
            }else{
                cifrada +=  c;
            }
        }
        return cifrada;

    }
    
    public static void main(String[] args)
    {
        String mensagem = "";
        Scanner sc = new Scanner(System.in);

        while (!(mensagem = sc.nextLine()).equals("FIM")){
            String cripto = cifrar(3, mensagem);
            System.out.println(cripto);
        }
        sc.close();
    }
}
