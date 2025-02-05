function mudaSite() {
  let rank = document.getElementById("inp-rank").value;
  let funcao = document.getElementById("inp-func").value;
  window.location.href = `pessoas.html?rank=${rank}&func=${funcao}`;
}

function exibePessoas(rank, func) {
  let str = "";
  let nome = ["Ana", "João", "José"];
  let img = ["../../imagens/Ana.jpg", "../../imagens/Joao.jpg", "../../imagens/Jose.jpg"];
  for (i = 0; i < 3; i++) {
    str += `<div class="col-12 col-sm-12 col-md-4 col-lg-4">
                  <div class="card" style="width: 18rem;">
                    <img src="${img[i]}" class="card-img-top" alt="...">
                    <div class="card-body">
                     <h5 class="card-title">${nome[i]}</h5>
                      <p class="card-text"><p><b>Rank:</b> ${rank}</p>
                      <p><b>Função:</b> ${func}</p>
                      <button class="btn btn-dark" onclick="solicita()">Adicionar</button>
                    </div>
                  </div>
                </div>`;
  }

  document.getElementById("tela").innerHTML = str;
}

function solicita() {
  alert("Solicitação enviada!");
}
