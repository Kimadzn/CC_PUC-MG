
function exibePessoas(rank, func) {
  let str = "";
  let img = ["../../imagens/yuri.png", "../../imagens/jv.png", "../../imagens/artur.png", "../../imagens/maria.png", "../../imagens/luiz.png", "../../imagens/lygia.png"];

  for (i = 0; i < 6; i++) {
    str += `<div class="col-12 col-sm-12 col-md-6 col-lg-4">
                  <div class="card" style="width: 20rem;">
                    <img src="${img[i]}" class="card-img-top" alt="...">
                    
                      
                    </div>
                  </div>
                </div>`;

  }

  document.getElementById("tela").innerHTML = str;
}

function solicita() {
  alert("Solicitação enviada!");
}
