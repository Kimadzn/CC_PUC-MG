function leDados() {
  let strDados = localStorage.getItem('db_suporte');
  let objDados = {};

  if (strDados) {
    objDados = JSON.parse(strDados);
  }
  else {
    objDados = {
      postagens: [
        { nome: "Usuário", problema: "Seu Problema" },
      ]
    }
  }

  return objDados;
}

function salvaDados(dados) {
  localStorage.setItem('db_suporte', JSON.stringify(dados));
}

function incluirComentario() {
  // Ler os dados do localStorage
  let objDados = leDados();

  // Incluir um novo contato
  let strNome = document.getElementById('campoNome').value;
  let strproblema = document.getElementById('campoProblema').value;
  let novoComentario = {
    nome: strNome,
    problema: strproblema,
  };
  objDados.postagens.push(novoComentario);

  // Salvar os dados no localStorage novamente
  salvaDados(objDados);

  // Atualiza os dados da tela
  imprimeDados();
}

function imprimeDados() {
  let tela = document.getElementById('tela');
  let strHtml = '';
  let objDados = leDados();

  for (i = 0; i < objDados.postagens.length; i++) {
    strHtml += `<p>${objDados.postagens[i].nome} - ${objDados.postagens[i].problema}</p>`
  }

  tela.innerHTML = strHtml;
}

// Configura os botões
document.getElementById('btnCarregaDados').addEventListener('click', imprimeDados);
document.getElementById('btnIncluirComentario').addEventListener('click', incluirComentario);

