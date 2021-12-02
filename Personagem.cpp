#include "personagem.h"
#include <iostream>
#include <string>
using std::cout;

Personagem::Personagem()
:nomePersonagem(""), idadePersonagem(0){}

Personagem::Personagem(string nomePersonagem, int idadePersonagem){
    setNomePersonagem(nomePersonagem);
    setIdadePersonagem(idadePersonagem);
}

Personagem::Personagem(int idadePersonagem)
:nomePersonagem(""){
    setIdadePersonagem(idadePersonagem);
}

void Personagem::setNomePersonagem(string nomePersonagem){
    nomePersonagem = nomePersonagem;
}

string Personagem::getNomePersonagem(){
    return nomePersonagem;
}

void Personagem::setIdadePersonagem(int idadePersonagem){
    if (idadePersonagem > 0)
        this->idadePersonagem = idadePersonagem;
    else
        this->idadePersonagem = 0;
}
int Personagem::getIdadePersonagem(){
    return idadePersonagem;
} 

void Personagem::mostrarMensagem(){
    if (nomePersonagem.size() > 0){
        cout << "Nome do personagem: "<< nomePersonagem <<"\n";
    }
    else
    {
        cout << "Pesonagem sem nome :|" << "\n";
    }
    
    cout << "Idade do personagem: "<<idadePersonagem<<"\n";

}