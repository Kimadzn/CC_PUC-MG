function leDados() {
  let strDados = localStorage.getItem("db_generos");
  let objDados = {};

  if (strDados) {
    objDados = JSON.parse(strDados);
  } else {
    objDados = {
      generos: [
        {
          ID: "1",
          nome: "FPS",
          jogos: "Valorant, Call of Duty",
          caracteristicas: "Primeira pessoa e é possível atirar",
          video: "https://www.youtube.com/watch?v=73EuM-czHfU",
          imgCadastro: "",
        },
        {
          ID: "2",
          nome: "RPG",
          jogos: "The witcher 3, Dark Souls",
          caracteristicas: "Subir de nível e vários equipamentos",
          video: "https://www.youtube.com/watch?v=t9-AIN2AqLs",
          imgCadastro: "",
        },
      ],
    };
  }

  return objDados;
}

function salvaDados(dados) {
  localStorage.setItem("db_generos", JSON.stringify(dados));
}

function converterImagem() {
  // Receber o arquivo do formulario
  var receberArquivo = document.getElementById("imgCadastro").files;
  //console.log(receberArquivo);

  // Verificar se existe o arquivo
  if (receberArquivo.length > 0) {
    // Carregar a imagem
    var carregarImagem = receberArquivo[0];
    //console.log(carregarImagem);

    // FileReader - permite ler o conteudo do arquivo do computador do usuario
    var lerArquivo = new FileReader();

    // O evento onload ocorre quando um objeto he carregado
    lerArquivo.onload = function(arquivoCarregado) {
      // Converter a imagem para base64
      imagemBase64 = arquivoCarregado.target.result;
    };

    // O metodo readAsDataURL e usado para ler o conteudo
    lerArquivo.readAsDataURL(carregarImagem);
  }
}

function imprimeGeneros() {
  let tela = document.getElementById("tela");
  let strHtml = "";
  let objDados = leDados();

  for (i = 0; i < objDados.generos.length; i++) {
    strHtml += `<p>${objDados.generos[i].ID} - ${objDados.generos[i].nome}</p> <p>${objDados.generos[i].jogos} - ${objDados.generos[i].caracteristicas}</p> <p>${objDados.generos[i].video}`;
  }

  tela.innerHTML = strHtml;
}

function incluirGenero() {
  // Ler os dados do localStorage
  let objDados = leDados();

  // Incluir um novo gênero
  let strNome = document.getElementById("nome").value;
  let strJogos = document.getElementById("jogos").value;
  let strCaracteristicas = document.getElementById("caracteristicas").value;
  let strVideo = document.getElementById("video").value;
  let strId = document.getElementById("ID").value;

  let novoGenero = {
    ID: strId,
    nome: strNome,
    jogos: strJogos,
    caracteristicas: strCaracteristicas,
    video: strVideo,
    imgCadastro: imagemBase64,
  };
  objDados.generos.push(novoGenero);
  if (strNome != "") {
    alert("Gênero cadastrado!");
    // Salvar os dados no localStorage novamente
    salvaDados(objDados);
  }
}

// Configura os botões
document.getElementById("btnEnviar").addEventListener("click", incluirGenero);
document
  .getElementById("btnImprimir")
  .addEventListener("click", imprimeGeneros);

//Cria variável global
var imagemBase64 = "";
