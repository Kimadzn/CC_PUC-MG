fetch("https://api.rawg.io/api/developers?key=890c25a24c8d42feb92b0284eb24b872")
  .then((res) => res.json())
  .then((data) => {
    let str = "";
    data.results.forEach((e) => {
      str += `<div class="card col-md-4" style="width: 22rem;">
      <img class="card-img-top" src="${e.image_background}" alt="Card image cap">
      <div class="card-body">
          <h5 class="card-title">${e.name}<br>
          Principais Jogos:</h5> `
          e.games.forEach(e => {
            str +=`
            <p class="card-text">${e.name}</p>`
            
          })
        str += `</div>
           </div>`;
           console.log(str)

    });

    document.getElementById("tela").innerHTML = str;
  });
