package service; // Adicionando declaração do pacote

import java.io.File;
import java.util.List;
import java.util.Scanner;

import model.Funcionario; // Importando a classe Funcionario do pacote model
import dao.FuncionarioDAO; // Importando a classe FuncionarioDAO do pacote dao
import spark.Request;
import spark.Response;


public class FuncionarioService {

    private FuncionarioDAO funcionarioDAO = new FuncionarioDAO();
    private String form;
    private final int FORM_INSERT = 1;
    private final int FORM_DETAIL = 2;
    private final int FORM_UPDATE = 3;
    private final int FORM_ORDERBY_ID = 1;
    private final int FORM_ORDERBY_DESCRICAO = 2;
    private final int FORM_ORDERBY_PRECO = 3;

    public FuncionarioService() {
        makeForm();
    }

    public void makeForm() {
        makeForm(FORM_INSERT, new Funcionario(), FORM_ORDERBY_DESCRICAO);
    }

    public void makeForm(int orderBy) {
        makeForm(FORM_INSERT, new Funcionario(), orderBy);
    }

    public void makeForm(int tipo, Funcionario funcionario, int orderBy) {
        String nomeArquivo = "form.html";
        form = "";
        try {
            Scanner entrada = new Scanner(new File(nomeArquivo));
            while (entrada.hasNext()) {
                form += (entrada.nextLine() + "\n");
            }
            entrada.close();
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }

        String umFuncionario = "";
        if(tipo != FORM_INSERT) 
		{
			umFuncionario += "\t<table width=\"80%\" bgcolor=\"#f3f3f3\" align=\"center\">";
			umFuncionario += "\t\t<tr>";
			umFuncionario += "\t\t\t<td align=\"left\"><font size=\"+2\"><b>&nbsp;&nbsp;&nbsp;<a href=\"/funcionario/list/1\">Novo funcionario</a></b></font></td>";
			umFuncionario += "\t\t</tr>";
			umFuncionario += "\t</table>";
			umFuncionario += "\t<br>";			
		} // end if
        
		
		if(tipo == FORM_INSERT || tipo == FORM_UPDATE) 
		{
			
			String action = "/funcionario/";
			String name, nome, cargo, buttonLabel;
			if (tipo == FORM_INSERT)
			{
				action += "insert";
				name = "Inserir Funcionario";
				nome = "nome";
				cargo = "cargo";
				buttonLabel = "Inserir";
			} 
			else 
			{
				action += "update/" + funcionario.getid();
				name = "Atualizar Funcionario (Codigo " + funcionario.getid() + ")";
				nome = funcionario.getnome();
				cargo = funcionario.getcargo();
				buttonLabel = "Atualizar";
			} // end if
			umFuncionario += "\t<form class=\"form--register\" action=\"" + action + "\" method=\"post\" id=\"form-add\">";
			umFuncionario += "\t<table width=\"80%\" bgcolor=\"#f3f3f3\" align=\"center\">";
			umFuncionario += "\t\t<tr>";
			umFuncionario += "\t\t\t<td colspan=\"3\" align=\"left\"><font size=\"+2\"><b>&nbsp;&nbsp;&nbsp;" + name + "</b></font></td>";
			umFuncionario += "\t\t</tr>";
			umFuncionario += "\t\t<tr>";
			umFuncionario += "\t\t\t<td colspan=\"3\" align=\"left\">&nbsp;</td>";
			umFuncionario += "\t\t</tr>";
			umFuncionario += "\t\t<tr>";
			umFuncionario += "\t\t\t<td>&nbsp;nome: <input class=\"input--register\" type=\"text\" name=\"nome\" value=\""+ nome +"\"></td>";
			umFuncionario += "\t\t\t<td>cargo: <input class=\"input--register\" type=\"text\" name=\"cargo\" value=\""+ cargo +"\"></td>";
			umFuncionario += "\t\t\t<td>salario: <input class=\"input--register\" type=\"text\" name=\"salario\" value=\""+ funcionario.getsalario() +"\"></td>";
			umFuncionario += "\t\t</tr>";
			umFuncionario += "\t\t<tr>";
			umFuncionario += "\t\t\t<td align=\"center\"><input type=\"submit\" value=\""+ buttonLabel +"\" class=\"input--main__style input--button\"></td>";
			umFuncionario += "\t\t</tr>";
			umFuncionario += "\t</table>";
			umFuncionario += "\t</form>";		
		} 
		else if ( tipo == FORM_DETAIL )
		{
			umFuncionario += "\t<table width=\"80%\" bgcolor=\"#f3f3f3\" align=\"center\">";
			umFuncionario += "\t\t<tr>";
			umFuncionario += "\t\t\t<td colspan=\"3\" align=\"left\"><font size=\"+2\"><b>&nbsp;&nbsp;&nbsp;Detalhes do Funcionario ( Codigo " + funcionario.getid() + " )</b></font></td>";
			umFuncionario += "\t\t</tr>";
			umFuncionario += "\t\t<tr>";
			umFuncionario += "\t\t\t<td colspan=\"3\" align=\"left\">&nbsp;</td>";
			umFuncionario += "\t\t</tr>";
			umFuncionario += "\t\t<tr>";
			umFuncionario += "\t\t\t<td>&nbsp;id: "+ funcionario.getid() +"</td>";
			umFuncionario += "\t\t\t<td>nome: "+ funcionario.getnome() +"</td>";
			umFuncionario += "\t\t\t<td>cargo: "+ funcionario.getcargo() +"</td>";
			umFuncionario += "\t\t\t<td>salario: "+ funcionario.getsalario() +"</td>";
			umFuncionario += "\t\t</tr>";
			umFuncionario += "\t\t<tr>";
			umFuncionario += "\t\t\t<td>&nbsp;</td>";
			umFuncionario += "\t\t</tr>";
			umFuncionario += "\t</table>";		
		}
		else 
		{
			System.out.println("ERRO: Tipo nÃ£o identificado " + tipo);
		} // end if
        form = form.replaceFirst("<UM-FUNCIONARIO>", umFuncionario);

        String listaFuncionarios = "<table width=\"80%\" align=\"center\" bgcolor=\"#f3f3f3\">";
        listaFuncionarios += "\n<tr><td colspan=\"6\" align=\"left\"><font size=\"+2\"><b>&nbsp;&nbsp;&nbsp;Relação de Funcionários</b></font></td></tr>\n" +
                "\n<tr><td colspan=\"6\">&nbsp;</td></tr>\n" +
                "\n<tr>\n" +
                "\t<td><a href=\"/funcionario/list/" + FORM_ORDERBY_ID + "\"><b>ID</b></a></td>\n" +
                "\t<td><a href=\"/funcionario/list/" + FORM_ORDERBY_DESCRICAO + "\"><b>Nome</b></a></td>\n" +
                "\t<td><a href=\"/funcionario/list/" + FORM_ORDERBY_DESCRICAO + "\"><b>Cargo</b></a></td>\n" +
                "\t<td><a href=\"/funcionario/list/" + FORM_ORDERBY_DESCRICAO + "\"><b>Salário</b></a></td>\n" +
                "\t<td width=\"100\" align=\"center\"><b>Detalhar</b></td>\n" +
                "\t<td width=\"100\" align=\"center\"><b>Atualizar</b></td>\n" +
                "\t<td width=\"100\" align=\"center\"><b>Excluir</b></td>\n" +
                "</tr>\n";

        List<Funcionario> funcionarios;
        if (orderBy == FORM_ORDERBY_ID) {
            funcionarios = funcionarioDAO.getOrderByid();
        } else if (orderBy == FORM_ORDERBY_DESCRICAO) {
            funcionarios = funcionarioDAO.getOrderBynome();
        } else if (orderBy == FORM_ORDERBY_PRECO) {
            funcionarios = funcionarioDAO.getOrderBysalario();
        } else {
            funcionarios = funcionarioDAO.get();
        }

        int i = 0;
        String bgcolor = "";
        for (Funcionario f : funcionarios) {
            bgcolor = (i++ % 2 == 0) ? "#fff5dd" : "#dddddd";
            listaFuncionarios += "\n<tr bgcolor=\"" + bgcolor + "\">\n" +
                    "\t<td>" + f.getid() + "</td>\n" +
                    "\t<td>" + f.getnome() + "</td>\n" +
                    "\t<td>" + f.getcargo() + "</td>\n" +
                    "\t<td>" + f.getsalario() + "</td>\n" +
                    "\t<td align=\"center\" valign=\"middle\"><a href=\"/funcionario/" + f.getid() + "\"><img src=\"/image/detail.png\" width=\"20\" height=\"20\"/></a></td>\n" +
                    "\t<td align=\"center\" valign=\"middle\"><a href=\"/funcionario/update/" + f.getid() + "\"><img src=\"/image/update.png\" width=\"20\" height=\"20\"/></a></td>\n" +
                    "\t<td align=\"center\" valign=\"middle\"><a href=\"javascript:confirmarDeleteFuncionario('" + f.getid() + "', '" + f.getnome() + "');\"><img src=\"/image/delete.png\" width=\"20\" height=\"20\"/></a></td>\n" +
                    "</tr>\n";
        }
        listaFuncionarios += "</table>";

        form = form.replaceFirst("<LISTAR-FUNCIONARIO>", listaFuncionarios);
    }

    public Object insert(Request request, Response response) {
        String nome = request.queryParams("nome"); // Alterado para "login" em vez de "nome"
        String cargo = request.queryParams("cargo"); // Alterado para "senha" em vez de "cargo"
        int salario = Integer.parseInt(request.queryParams("salario"));

        Funcionario funcionario = new Funcionario(1, nome, cargo, salario);
        String resp;

        if (funcionarioDAO.insert(funcionario)) {
            resp = "Funcionário (" + nome + ") inserido!";
            response.status(201); // 201 Created
        } else {
            resp = "Funcionário (" + nome + ") não inserido!";
            response.status(404); // 404 Not Found
        }

        makeForm();
        return form.replaceFirst("<input type=\"hidden\" id=\"msg\" name=\"msg\" value=\"\">", "<input type=\"hidden\" id=\"msg\" name=\"msg\" value=\"" + resp + "\">");
    }

    public Object getById(Request request, Response response) {
        int id = Integer.parseInt(request.params(":id"));
        Funcionario funcionario = funcionarioDAO.get(id);

        if (funcionario != null) {
            response.status(200); // 200 OK
            makeForm(FORM_DETAIL, funcionario, FORM_ORDERBY_DESCRICAO);
        } else {
            response.status(404); // 404 Not Found
            String resp = "Funcionário " + id + " não encontrado.";
            makeForm();
            form = form.replaceFirst("<input type=\"hidden\" id=\"msg\" name=\"msg\" value=\"\">", "<input type=\"hidden\" id=\"msg\" name=\"msg\" value=\"" + resp + "\">");
        }

        return form;
    }

    public Object getAll(Request request, Response response) {
        int orderBy = Integer.parseInt(request.params(":orderby"));
        makeForm(orderBy);
        response.header("Content-Type", "text/html");
        response.header("Content-Encoding", "UTF-8");
        return form;
    }

    public Object getToUpdate(Request request, Response response) {
        int id = Integer.parseInt(request.params(":id"));
        Funcionario funcionario = funcionarioDAO.get(id);

        if (funcionario != null) {
            response.status(200); // 200 OK
            makeForm(FORM_UPDATE, funcionario, FORM_ORDERBY_DESCRICAO);
        } else {
            response.status(404); // 404 Not Found
            String resp = "Funcionário " + id + " não encontrado.";
            makeForm();
            form = form.replaceFirst("<input type=\"hidden\" id=\"msg\" name=\"msg\" value=\"\">", "<input type=\"hidden\" id=\"msg\" name=\"msg\" value=\"" + resp + "\">");
        }

        return form;
    }

    public Object update(Request request, Response response) {
        int id = Integer.parseInt(request.params(":id"));
        Funcionario funcionario = funcionarioDAO.get(id);
        String resp;

        if (funcionario != null) {
            funcionario.setnome(request.queryParams("nome"));
            funcionario.setcargo(request.queryParams("cargo"));
            funcionario.setsalario(Integer.parseInt(request.queryParams("salario")));
            funcionarioDAO.update(funcionario);
            response.status(200); // 200 OK
            resp = "Funcionário (ID " + funcionario.getid() + ") atualizado!";
        } else {
            response.status(404); // 404 Not Found
            resp = "Funcionário (ID " + id + ") não encontrado!";
        }

        makeForm();
        return form.replaceFirst("<input type=\"hidden\" id=\"msg\" name=\"msg\" value=\"\">", "<input type=\"hidden\" id=\"msg\" name=\"msg\" value=\"" + resp + "\">");
    }

    public Object delete(Request request, Response response) {
        int id = Integer.parseInt(request.params(":id"));
        Funcionario funcionario = funcionarioDAO.get(id);
        String resp;

        if (funcionario != null) {
            funcionarioDAO.delete(id);
            response.status(200); // 200 OK
            resp = "Funcionário (" + id + ") excluído!";
        } else {
            response.status(404); // 404 Not Found
            resp = "Funcionário (" + id + ") não encontrado!";
        }

        makeForm();
        return form.replaceFirst("<input type=\"hidden\" id=\"msg\" name=\"msg\" value=\"\">", "<input type=\"hidden\" id=\"msg\" name=\"msg\" value=\"" + resp + "\">");
    }
}
