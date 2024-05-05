fetch ('https://api.rawg.io/api/games?key=890c25a24c8d42feb92b0284eb24b872')
.then(res => res.json ())
.then(data => {
     console.log ('Imprimindo games')
     let str = ''
     for (let i = 0; i < data.results.length; i++) {
         let games = data.results[i]
         str += `<div class="card col-md-4" style="width: 22rem;" id ="jogos">
             <img class="card-img-top" src="${data.results[i].background_image}" alt="Card image cap">
             <div class="card-body" id"name">
                 <h5 class="card-title">${data.results[i].name}</h5>
                 <p class="card-text">Avaliação Media: ⭐${data.results[i].rating}</p>
                 <p class="card-text">Data de lançamento: ${data.results[i].released}</p>
                 <p class="card-text">Tempo de jogo: ${data.results[i].playtime}H 🕗</p>
                                  <br>
                 <br>
                 <a href="https://rawg.io" target="_blank" class="btn btn-primary">Mais detalhes</a>
             </div>
             </div>`
     }
     document.getElementById('tela').innerHTML = str
})