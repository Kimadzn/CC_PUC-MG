let chat = {};
var fal = "";
var g1 = true;
var g2 = false;
var g3 = false;

// simulacao de dados providos de um servidor
onload = () => {
  chat = {
    chatover: [
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "Alguem on ai??" },
    ],
    chatcs: [
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "oii?" },
      { fala: "Alguem pra dar uma zuada" },
      { fala: "???" },
    ],
    chatval: [
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "" },
      { fala: "Quando que eh o proxmimo campionato?" },
      { fala: "DA Loud?" },
    ],
  };
  let aux = JSON.parse(localStorage.getItem("db_grupos"));
  if (aux) {
    chat = JSON.parse(localStorage.getItem("db_grupos"));
  } else {
    localStorage.setItem("db_grupos", JSON.stringify(chat));
  }

  let pessoas = {
    pover: [
      { nome: "Maria C", telefone: "(31) 99189-4672" },
      { nome: "Lugafe", telefone: "(31)840-052159" },
      { nome: "PlayBoy of Contagem", telefone: "(31)096-062572" },
      { nome: "Marisco", telefone: "(31) 750-636525" },
      { nome: "João Bosco", telefone: "(31)930-946251" },
    ],
    pcs: [
      { nome: "Riquinha", telefone: "(31) 057-996299" },
      { nome: "cARIOCA", telefone: "(31)886-094562" },
      { nome: "Smmal-Shopp", telefone: "(31)739-436794" },
      { nome: "Cavalo-aerio", telefone: "(31)356-145775" },
      { nome: "João Bosco", telefone: "(31)535-145601" },
    ],
    pval: [
      { nome: "Kaguya", telefone: "(31) 04-883148" },
      { nome: "Lugafe", telefone: "(31)828-892545" },
      { nome: "RiverDel", telefone: "(31)044-049765" },
      { nome: "Rom-Mel", telefone: "(31) 870-953661" },
      { nome: "Devora", telefone: "(31)111-827084" },
    ],
  };
  localStorage.setItem("pes", JSON.stringify(pessoas));

  over();

  campchat.onfocus = () => {
    if (campchat.value == "Escreva aqui...") {
      campchat.value = "";
    }
  };
  campchat.onblur = () => {
    if (campchat.value == "") {
      campchat.value = "Escreva aqui...";
    }
  };

  /*
    campchat.onchange = () => {
        fal = campchat.value;
    };*/
};

function enviar() {
  let srt = "";
  let addn = "";
  let addt = "";
  if (campchat.value != "Escreva aqui..." && campchat.value != "") {
    if (g1 == true) {
      srt = document.getElementById("campchat").value;
      let nchatover = { fala: `<b>${srt}<b>` };

      chat.chatover.push(nchatover);
      chat.chatover.shift();
      localStorage.setItem("db_grupos", JSON.stringify(chat));
      over();
    }
    if (g2 == true) {
      srt = document.getElementById("campchat").value;
      let nchatcs = { fala: `<b>${srt}<b>` };

      chat.chatcs.push(nchatcs);
      chat.chatcs.shift();
      localStorage.setItem("db_grupos", JSON.stringify(chat));
      cs();
    }
    if (g3 == true) {
      srt = document.getElementById("campchat").value;
      let nchatval = { fala: `<b>${srt}<b>` };

      chat.chatval.push(nchatval);
      chat.chatval.shift();
      localStorage.setItem("db_grupos", JSON.stringify(chat));
      val();
    }
    campchat.value = "Escreva aqui...";
  }
}

function over() {
  pp = true;
  g1 = true;
  g2 = false;
  g3 = false;

  let strHtml = "";
  let chat = JSON.parse(localStorage.getItem("db_grupos"));

  for (i = 0; i < chat.chatover.length; i++) {
    strHtml += `${chat.chatover[i].fala}<br>`;
  }
  barraM.innerHTML = strHtml;
  strHtml = "";

  let pessoas = JSON.parse(localStorage.getItem("pes"));
  for (i = 0; i < pessoas.pover.length; i++) {
    strHtml += `<button id="p-1" type="button" onclick="aa()">${pessoas.pover[i].nome}</button>`;
  }

  barraD.innerHTML = strHtml;
}

function cs() {
  pp = true;
  g1 = false;
  g2 = true;
  g3 = false;

  let strHtml = "";
  let chat = JSON.parse(localStorage.getItem("db_grupos"));

  for (i = 0; i < chat.chatcs.length; i++) {
    strHtml += `${chat.chatcs[i].fala}<br>`;
  }
  barraM.innerHTML = strHtml;
  strHtml = "";

  let pessoas = JSON.parse(localStorage.getItem("pes"));
  for (i = 0; i < pessoas.pcs.length; i++) {
    strHtml += `<button id="p-2" type="button" onclick="aa();">${pessoas.pcs[i].nome}</button>`;
  }
  barraD.innerHTML = strHtml;
}

function val() {
  pp = true;
  g1 = false;
  g2 = false;
  g3 = true;

  let strHtml = "";
  let chat = JSON.parse(localStorage.getItem("db_grupos"));

  for (i = 0; i < chat.chatval.length; i++) {
    strHtml += `${chat.chatval[i].fala}</br>`;
  }
  barraM.innerHTML = strHtml;
  strHtml = "";

  let pessoas = JSON.parse(localStorage.getItem("pes"));
  for (i = 0; i < pessoas.pval.length; i++) {
    strHtml += `<button id="p-3" type="button" onclick="aa();">${pessoas.pval[i].nome}</button>`;
  }
  barraD.innerHTML = strHtml;
}

function aa() {
  if (pp == true) {
    pp = false;
    let p1 = g1;
    let p2 = g2;
    let p3 = g3;
    g1 = false;
    g2 = false;
    g3 = false;
    let pessoas = JSON.parse(localStorage.getItem("pes"));
    let strHtml = "";

    if (p3 == true) {
      for (i = 0; i < pessoas.pval.length; i++) {
        strHtml += `Nome: ${pessoas.pval[i].nome} - Telefone: ${pessoas.pval[i].telefone} <br><br>`;
      }
    }
    if (p2 == true) {
      for (i = 0; i < pessoas.pcs.length; i++) {
        strHtml += `Nome: ${pessoas.pcs[i].nome} - Telefone: ${pessoas.pcs[i].telefone} <br><br>`;
      }
    }
    if (p1 == true) {
      for (i = 0; i < pessoas.pover.length; i++) {
        strHtml += `Nome: ${pessoas.pover[i].nome} - Telefone: ${pessoas.pover[i].telefone} <br><br>`;
      }
    }
    barraM.innerHTML = strHtml;
    //alert(`No momento nao eh possivel acessar o perfil`);
  }
}
