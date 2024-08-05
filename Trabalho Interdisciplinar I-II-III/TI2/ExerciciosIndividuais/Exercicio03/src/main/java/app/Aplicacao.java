package app;

import java.util.List;
import java.util.Scanner;

import dao.DAO;
import dao.FuncionarioDAO;
import model.Funcionario;

public class Aplicacao {
    
    private static FuncionarioDAO funcionarioDAO = new FuncionarioDAO();
    private static Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws Exception {
        int opcao;
        
        do {
            exibirMenu();
            opcao = scanner.nextInt();
            scanner.nextLine(); // Limpar o buffer do scanner
            
            switch (opcao) {
                case 1:
                    inserirFuncionario();
                    break;
                case 2:
                    listarFuncionarios();
                    break;
                case 3:
                    atualizarFuncionario();
                    break;
                case 4:
                    excluirFuncionario();
                    break;
                case 5:
                    System.out.println("Saindo...");
                    break;
                default:
                    System.out.println("Opção inválida! Tente novamente.");
            }
        } while (opcao != 5);
        
        scanner.close();
    }
    
    private static void exibirMenu() {
        System.out.println("\n==== Menu ====");
        System.out.println("1) Inserir");
        System.out.println("2) Listar");
        System.out.println("3) Atualizar");
        System.out.println("4) Excluir");
        System.out.println("5) Sair");
        System.out.print("Escolha uma opção: ");
    }
    
    private static void inserirFuncionario() {
        System.out.println("\n==== Inserir Funcionário ====");
        System.out.print("Informe o ID: ");
        int id = scanner.nextInt();
        scanner.nextLine(); // Limpar o buffer do scanner
        
        System.out.print("Informe o nome: ");
        String nome = scanner.nextLine();
        
        System.out.print("Informe o cargo: ");
        String cargo = scanner.nextLine();
        
        System.out.print("Informe o salário: ");
        int salario = scanner.nextInt();
        scanner.nextLine(); // Limpar o buffer do scanner
        
        Funcionario funcionario = new Funcionario(id, nome, cargo, salario);
        
        if (funcionarioDAO.insert(funcionario)) {
            System.out.println("Funcionário inserido com sucesso!");
        } else {
            System.out.println("Erro ao inserir funcionário.");
        }
    }
    
    private static void listarFuncionarios() {
        System.out.println("\n==== Listar Funcionários ====");
        List<Funcionario> funcionarios = funcionarioDAO.get();
        
        if (funcionarios.isEmpty()) {
            System.out.println("Nenhum funcionário cadastrado.");
        } else {
            for (Funcionario funcionario : funcionarios) {
                System.out.println(funcionario.toString());
            }
        }
    }
    
    private static void atualizarFuncionario() {
        System.out.println("\n==== Atualizar Funcionário ====");
        System.out.print("Informe o ID do funcionário a ser atualizado: ");
        int id = scanner.nextInt();
        scanner.nextLine(); // Limpar o buffer do scanner
        
        Funcionario funcionario = funcionarioDAO.get(id);
        
        if (funcionario == null) {
            System.out.println("Funcionário não encontrado.");
        } else {
            System.out.print("Informe o novo nome: ");
            String nome = scanner.nextLine();
            
            System.out.print("Informe o novo cargo: ");
            String cargo = scanner.nextLine();
            
            System.out.print("Informe o novo salário: ");
            int salario = scanner.nextInt();
            scanner.nextLine(); // Limpar o buffer do scanner
            
            funcionario.setnome(nome);
            funcionario.setcargo(cargo);
            funcionario.setsalario(salario);
            
            if (funcionarioDAO.update(funcionario)) {
                System.out.println("Funcionário atualizado com sucesso!");
            } else {
                System.out.println("Erro ao atualizar funcionário.");
            }
        }
    }
    
    private static void excluirFuncionario() {
        System.out.println("\n==== Excluir Funcionário ====");
        System.out.print("Informe o ID do funcionário a ser excluído: ");
        int id = scanner.nextInt();
        scanner.nextLine(); // Limpar o buffer do scanner
        
        if (funcionarioDAO.delete(id)) {
            System.out.println("Funcionário excluído com sucesso!");
        } else {
            System.out.println("Erro ao excluir funcionário.");
        }
    }
}
