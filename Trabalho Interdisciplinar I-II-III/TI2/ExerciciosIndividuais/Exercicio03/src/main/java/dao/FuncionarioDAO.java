package dao;

import java.sql.*;
import java.util.ArrayList;
import java.util.List;

import model.Funcionario;

public class FuncionarioDAO extends DAO {
	
	public FuncionarioDAO() {
		super();
		conectar();
	}

	public void finalize() {
		close();
	}
	
	
	public boolean insert(Funcionario funcionario) {
		boolean status = false;
		try {  
			Statement st = conexao.createStatement();
			String sql = "INSERT INTO funcionario (nome, cargo, salario) "
				       + "VALUES ('" + funcionario.getnome() + "', '"  
				       + funcionario.getcargo() + "', '" + funcionario.getsalario() + "');";
			System.out.println(sql);
			st.executeUpdate(sql);
			st.close();
			status = true;
		} catch (SQLException u) {  
			throw new RuntimeException(u);
		}
		return status;
	}

	
	public Funcionario get(int id) {
		Funcionario funcionario = null;
		
		try {
			Statement st = conexao.createStatement(ResultSet.TYPE_SCROLL_INSENSITIVE,ResultSet.CONCUR_READ_ONLY);
			String sql = "SELECT * FROM funcionario WHERE id=" + id;
			System.out.println(sql);
			ResultSet rs = st.executeQuery(sql);	
	        if(rs.next()){            
	        	 funcionario = new Funcionario(rs.getInt("id"), rs.getString("nome"), rs.getString("cargo"), rs.getInt("salario"));
	        }
	        st.close();
		} catch (Exception e) {
			System.err.println(e.getMessage());
		}
		return funcionario;
	}
	
	
	public List<Funcionario> get() {
		return get("");
	}

	
	public List<Funcionario> getOrderByid() {
		return get("id");		
	}
	
	
	public List<Funcionario> getOrderBynome() {
		return get("nome");		
	}
	
	
	public List<Funcionario> getOrderBysalario() {
		return get("salario");		
	}
	
	
	private List<Funcionario> get(String orderBy) {	
	
		List<Funcionario> funcionario = new ArrayList<Funcionario>();
		
		try {
			Statement st = conexao.createStatement(ResultSet.TYPE_SCROLL_INSENSITIVE,ResultSet.CONCUR_READ_ONLY);
			String sql = "SELECT * FROM funcionario" + ((orderBy.trim().length() == 0) ? "" : (" ORDER BY " + orderBy));
			System.out.println(sql);
			ResultSet rs = st.executeQuery(sql);	           
	        while(rs.next()) {	            	
	        	Funcionario u = new Funcionario(rs.getInt("id"), rs.getString("nome"), rs.getString("cargo"), rs.getInt("salario"));
	            funcionario.add(u);
	        }
	        st.close();
		} catch (Exception e) {
			System.err.println(e.getMessage());
		}
		return funcionario;
	}


	
	
	
	public boolean update(Funcionario funcionario) {
		boolean status = false;
		try {  
			Statement st = conexao.createStatement();
			String sql = "UPDATE funcionario SET nome = '" + funcionario.getnome() + "', cargo = '"  
				       + funcionario.getcargo() + "', salario = '" + funcionario.getsalario() + "'"
					   + " WHERE id = " + funcionario.getid();
			System.out.println(sql);
			st.executeUpdate(sql);
			st.close();
			status = true;
		} catch (SQLException u) {  
			throw new RuntimeException(u);
		}
		return status;
	}
	
	public boolean delete(int id) {
		boolean status = false;
		try {  
			Statement st = conexao.createStatement();
			String sql = "DELETE FROM funcionario WHERE id = " + id;
			System.out.println(sql);
			st.executeUpdate(sql);
			st.close();
			status = true;
		} catch (SQLException u) {  
			throw new RuntimeException(u);
		}
		return status;
	}
	
	
	public boolean autenticar(String nome, String cargo) {
		boolean resp = false;
		
		try {
			Statement st = conexao.createStatement(ResultSet.TYPE_SCROLL_INSENSITIVE,ResultSet.CONCUR_READ_ONLY);
			String sql = "SELECT * FROM funcionario WHERE nome LIKE '" + nome + "' AND cargo LIKE '" + cargo  + "'";
			System.out.println(sql);
			ResultSet rs = st.executeQuery(sql);
			resp = rs.next();
	        st.close();
		} catch (Exception e) {
			System.err.println(e.getMessage());
		}
		return resp;
	}	
}