CREATE TABLE produto (
    id SERIAL PRIMARY KEY,
    nome VARCHAR(50),
    quantidade INTEGER
);


INSERT INTO produto (id, nome, quantidade) VALUES (1, 'banana', 150);
INSERT INTO produto (id, nome, quantidade) VALUES (2, 'maça', 10);

select * from produto

Arthur Octavio Xavier Messias 
Matricula : 800341