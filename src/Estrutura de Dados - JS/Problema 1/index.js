//Importando o módulo de listaLivros
const livros = require('./listaLivros');

let maisBarato = 0;

for (let c = 0; c < livros.length; c++){

    if(livros[c].preco < livros[maisBarato].preco){
        maisBarato = c;
    }
}

console.log(`O livro mais barato é o de ${livros[maisBarato].nome}, que custa R$ ${livros[maisBarato].preco}.`);
