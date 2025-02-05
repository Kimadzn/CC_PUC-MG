CREATE DATABASE Biblioteca;
USE Biblioteca;

CREATE TABLE Livro (
    ISBN VARCHAR(13) PRIMARY KEY,
    Titulo VARCHAR(255) NOT NULL,
    Autor VARCHAR(255) NOT NULL,
    Ano_Publicacao YEAR NOT NULL
);

CREATE TABLE Usuario (
    ID_Usuario INT AUTO_INCREMENT PRIMARY KEY,
    Nome VARCHAR(255) NOT NULL,
    Endereco VARCHAR(255),
    Telefone VARCHAR(20)
);

CREATE TABLE Emprestimo (
    ID_Emprestimo INT AUTO_INCREMENT PRIMARY KEY,
    ID_Usuario INT,
    ISBN VARCHAR(13),
    Data_Emprestimo DATE NOT NULL,
    Data_Devolucao DATE,
    FOREIGN KEY (ID_Usuario) REFERENCES Usuario(ID_Usuario),
    FOREIGN KEY (ISBN) REFERENCES Livro(ISBN)
);
