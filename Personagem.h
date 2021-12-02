#ifndef Personagem_H
#define Personagem_H

#include <iostream>
#include <string>

using std::string;
using std::cout;

class Personagem
{
public:
    //sobrecarga de construtores(3)

    Personagem(); //const 1
    Personagem(string, int=0); //const 2
    Personagem(int); //const 3

    void setNomePersonagem(string nomePersonagem);

    string getNomePersonagem();

    void setIdadePersonagem(int idadePersonagem);

    int getIdadePersonagem();

    void mostrarMensagem(); 
private:
    string nomePersonagem;
    int idadePersonagem;
};

#endif