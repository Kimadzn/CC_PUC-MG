fetch ('https://api.rawg.io/api/stores?key=890c25a24c8d42feb92b0284eb24b872')
.then(res => res.json ())
.then(data => {
     console.log ('Imprimindo games')
     let str = ''
     for (let i = 0; i < data.results.length; i++) {
         let games = data.results[i]
         str += `<div class="card col-md-4" style="width: 22rem;" id ="jogos">
             <img class="card-img-top" src="${data.results[i].image_background}" alt="Card image cap">
             <div class="card-body" id"name">
                 <h5 class="card-title">${data.results[i].name}</h5>
                 <p class="card-text"href="">Site: ${data.results[i].domain}</p>

             </div>
             </div>`
     }
     document.getElementById('tela').innerHTML = str
})