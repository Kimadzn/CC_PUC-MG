function leDados () {
    let strDados = localStorage.getItem('db_rec5');
    let objDados = {};

    if (strDados) {
        objDados = JSON.parse (strDados);
    }
    else {
        objDados = { jogos: [ 
                        {nome: "jOGO X", site: "www.jogox.com"}, 
                        {nome: "jOGO y", site: "www.jogoy.com"}, 
                        {nome: "jOGO z", site: "www.jogoz.com"} 
                    ]}
    }

    return objDados;
}

function salvaDados (dados) {
    localStorage.setItem ('db_rec5', JSON.stringify (dados));
}

function incluirjogo (){
    // Ler os dados do localStorage
    let objDados = leDados();

    // Incluir um novo contato
    let strNome = document.getElementById ('campoNome').value;
    let strsite = document.getElementById ('camposite').value;
    let novojogo = {
        nome: strNome,
        site: strsite
    };
    objDados.jogos.push (novojogo);

    // Salvar os dados no localStorage novamente
    salvaDados (objDados);

    // Atualiza os dados da tela
    imprimeDados ();
}

function imprimeDados () {
    let tela = document.getElementById('tela');
    let strHtml = '';
    let objDados = leDados ();

    for (i=0; i< objDados.jogos.length; i++) {
        strHtml += `<p>${objDados.jogos[i].nome} - ${objDados.jogos[i].site}</p>`
    }

    tela.innerHTML = strHtml;
}

// Configura os botões
document.getElementById ('btnCarregajogo').addEventListener ('click', imprimeDados);
document.getElementById ('btnIncluirjogo').addEventListener ('click', incluirjogo);

