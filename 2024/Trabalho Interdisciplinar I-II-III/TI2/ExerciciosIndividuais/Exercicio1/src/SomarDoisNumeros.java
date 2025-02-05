import java.util.Scanner;

class SomarDoisNumeros {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int num1 = 0;
		int num2 = 0;
		int soma = 0;

		System.out.println("Digite o primeiro valor");
		num1 = sc.nextInt();

		System.out.println("Digite o segundo valor");
		num2 = sc.nextInt();

		soma = num1 + num2;
		System.out.println("Soma dos dois numeros e igual a:" + soma);

		sc.close();
	}
}