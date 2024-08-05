var object = {
    pessoas: [
        
        {nome: "Maria C", telefone: "(31) 99189-4672"},
        {nome: "Lugafe", telefone: "(31)840-052159"},
        {nome: "PlayBoy of Contagem", telefone: "(31)096-062572"},
        {nome: "Marisco", telefone: "(31) 750-636525"},
        {nome: "João Bosco", telefone: "(31)930-946251"},
        {nome: "Kaguya", telefone: "(31) 04-883148"},
        {nome: "RiverDel", telefone: "(31)044-049765"},
        {nome: "Rom-Mel", telefone: "(31) 870-953661"},
        {nome: "Devora", telefone: "(31)111-827084"},
        {nome: "20matar-70correr", telefone: "(31)111-177114"},
        {nome: "Corleone69", telefone: "(31)535-145276"},
        {nome: "Riquinha", telefone: "(31) 057-996299"},
        {nome: "cARIOCA", telefone: "(31)886-094562"},
        {nome: "SucoDeFruta", telefone: "(31)111-177114"},
        {nome: "Pedro-P0rker", telefone: "(31)111-177114"},
        {nome: "Porco-Aranha", telefone: "(31)111-177114"},
        {nome: "Smmal-Shopp", telefone: "(31)739-436794"},
        {nome: "Cavalo-aerio", telefone: "(31)356-145775"},
        {nome: "Avestrus_que_te_seduz", telefone: "(31)535-145601"},
        {nome: "Wallace", telefone: "(31)536-145601"},
        {nome: "Pulguinha-63", telefone: "(31)535-145369"}
    ]
}


onload = () => {

    localStorage.setItem ('db', JSON.stringify (object));

    var strHtml = '';
    var aux = JSON.parse (localStorage.getItem('db'));
    //<h3><button id='bte-1' type='button' onclick='busc()'>Buscar</button></h3>
    for (i=0; i< aux.pessoas.length; i++) {
        
        strHtml += `<tr><td><button id='bte-1' type='button' onclick='detale()'>${aux.pessoas[i].nome}</button></td><td>${aux.pessoas[i].telefone}</td></tr>`;
    }
    nimes.innerHTML = strHtml;

};

function a2(){
    
    alert("Realmente deseja enviar uma solicitação para este parceiro?");
};

function detale()
{
var x;
var r=confirm("Realmente deseja enviar uma solicitação para este parceiro?");
if (r==true)
  {
  alert("Solicitação enviada.");
  }
else
  {
  alert("Solicitação cancelada.");
  }

};