CREATE TABLE Estudantes (
    id INT,
    nome VARCHAR(255),
    email VARCHAR(255),
    idade INT
);

ALTER TABLE Estudantes ADD COLUMN endereco VARCHAR(255);

RENAME TABLE Estudantes TO Alunos;

ALTER TABLE Alunos DROP COLUMN idade;

CREATE TABLE Professores (
    id INT,
    nome VARCHAR(255),
    email VARCHAR(255),
    disciplina VARCHAR(255)
);

ALTER TABLE Professores ADD COLUMN salario DECIMAL(10, 2);

DROP TABLE Professores;

CREATE TABLE Autores (
    id INT,
    nome VARCHAR(255)
);

CREATE TABLE Livros (
    id INT,
    titulo VARCHAR(255),
    autor_id INT
);

ALTER TABLE Livros ADD CONSTRAINT fk_autor FOREIGN KEY (autor_id) REFERENCES Autores(id);

CREATE TABLE Clientes (
    id INT,
    nome VARCHAR(255)
);

CREATE TABLE Pedidos (
    id INT,
    produto VARCHAR(255),
    quantidade INT,
    cliente_id INT
);

ALTER TABLE Pedidos ADD CONSTRAINT fk_cliente FOREIGN KEY (cliente_id) REFERENCES Clientes(id);

ALTER TABLE Autores
ADD PRIMARY KEY (id);
