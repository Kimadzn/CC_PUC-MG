package model;

public class Funcionario {
	private int id;
	private String nome;
	private String cargo;
	private int salario;
	
	public Funcionario() {
		this.id = -1;
		this.nome = "";
		this.cargo = "";
		this.salario = -1;
	}
	
	public Funcionario(int id, String nome, String cargo, int salario) {
		this.id = id;
		this.nome = nome;
		this.cargo = cargo;
		this.salario = salario;
	}

	public int getid() {
		return id;
	}

	public void setid(int id) {
		this.id = id;
	}

	public String getnome() {
		return nome;
	}

	public void setnome(String nome) {
		this.nome = nome;
	}

	public String getcargo() {
		return cargo;
	}

	public void setcargo(String cargo) {
		this.cargo = cargo;
	}

	public int getsalario() {
		return salario;
	}

	public void setsalario(int salario) {
		this.salario = salario;
	}

	@Override
	public String toString() {
		return "Funcionario [id=" + id + ", nome=" + nome + ", cargo=" + cargo + ", salario=" + salario + "]";
	}	
}
