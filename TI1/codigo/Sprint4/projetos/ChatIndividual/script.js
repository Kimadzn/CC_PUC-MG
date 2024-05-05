var aux = 0;
let objDados = {};

function leDados() {
  let strDados = localStorage.getItem("db_amigos");

  if (strDados) {
    objDados = JSON.parse(strDados);
  } else {
    objDados = {
      amigos: [
        {
          ID: "1",
          nome: "Ana",
          chat: [],
        },
        {
          ID: "2",
          nome: "Rafael",
          chat: [],
        },
        {
          ID: "3",
          nome: "Maicon",
          chat: [],
        },
        {
          ID: "4",
          nome: "Júlia",
          chat: [],
        },
        {
          ID: "5",
          nome: "Roberto",
          chat: [],
        },
      ],
    };
  }
  salvaDados(objDados);
  return objDados;
}

function salvaDados(dados) {
  localStorage.setItem("db_amigos", JSON.stringify(dados));
}

onload = () => {
  let strDados = localStorage.getItem("db_amigos");
  let obj = leDados();
  let strHtml = "";
  if (obj) {
    for (i = 0; i < obj.amigos.length; i++) {
      strHtml += `<div class="row"><div class="col-12"><button id="${i}" onclick="iniciaConversa(this.id)">${obj.amigos[i].nome}</button></div></div>`;
    }
    document.getElementById("amigos").innerHTML = strHtml;
  }
  document.getElementById(
    "nome_amigo"
  ).innerHTML = `<p>${obj.amigos[0].nome}</p>`;

  if (!strDados) {
    for (i = 0; i < obj.amigos.length; i++) {
      for (u = 0; u < 20; u++) {
        let novoChat = {
          msg: "",
        };
        obj.amigos[i].chat.push(novoChat);
      }
    }

    let z = 0;
    novoChat = {
      msg: `<b>${obj.amigos[z].nome}</b>: Bora jogar?`,
    };
    obj.amigos[z].chat.push(novoChat);
    z++;

    novoChat = {
      msg: `<b>${obj.amigos[z].nome}</b>: Ta rolando o vava?`,
    };
    obj.amigos[z].chat.push(novoChat);
    z++;

    novoChat = {
      msg: `<b>${obj.amigos[z].nome}</b>: Nossa mano, amassei no comp ontem`,
    };
    obj.amigos[z].chat.push(novoChat);
    novoChat = {
      msg: `<b>${obj.amigos[z].nome}</b>: Joguei de Fade`,
    };
    obj.amigos[z].chat.push(novoChat);
    obj.amigos[z].chat.shift();
    z++;

    novoChat = {
      msg: `<b>${obj.amigos[z].nome}</b>: Já comprou o the forest???`,
    };
    obj.amigos[z].chat.push(novoChat);
    z++;

    novoChat = {
      msg: `<b>${obj.amigos[z].nome}</b>: Ta on mano?`,
    };
    obj.amigos[z].chat.push(novoChat);
    novoChat = {
      msg: `<b>${obj.amigos[z].nome}</b>: To querendo jogar um mine`,
    };
    obj.amigos[z].chat.push(novoChat);
    obj.amigos[z].chat.shift();
  }

  salvaDados(obj);
  iniciaConversa(aux);
};

function iniciaConversa(id_clicado) {
  aux = id_clicado;
  document.getElementById("nome_amigo").innerHTML = `<p>${document.getElementById(id_clicado).textContent
    }</p>`;
  let strHtml = "";
  let obj = JSON.parse(localStorage.getItem("db_amigos"));

  for (i = 0; i < obj.amigos[id_clicado].chat.length; i++) {
    strHtml += `${obj.amigos[id_clicado].chat[i].msg}<br>`;
  }
  tela.innerHTML = strHtml;
  strHtml = "";

  for (i = 0; i < obj.amigos.length; i++) {
    if (i != aux) {
      document.getElementById(i).style.backgroundColor = "rgb(153, 74, 227)";
      document.getElementById(i).style.color = "black";
    } else {
      document.getElementById(id_clicado).style.backgroundColor = "black";
      document.getElementById(id_clicado).style.color = "white";
    }
  }
}

function enviar() {
  if ((window.event ? event.keyCode : event.wich) == 13) {
    if (mensagem.value != "") {
      let str = document.getElementById("mensagem").value;
      let chatMsg = { msg: `<b>User:</b> ${str}` };

      objDados.amigos[aux].chat.push(chatMsg);
      objDados.amigos[aux].chat.shift();
      localStorage.setItem("db_amigos", JSON.stringify(objDados));

      let strHtml = "";
      let obj = JSON.parse(localStorage.getItem("db_amigos"));

      for (i = 0; i < obj.amigos[aux].chat.length; i++) {
        strHtml += `${obj.amigos[aux].chat[i].msg}<br>`;
      }
      tela.innerHTML = strHtml;
      strHtml = "";

      mensagem.value = "";
    }
  }
}
