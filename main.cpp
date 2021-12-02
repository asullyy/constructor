#include "Personagem.h"
#include "Personagem.cpp"
#include<iostream>

using std::cout;

//This is where the execution of program begins
int main()
{
   
   Personagem pers1;
   Personagem pers2 ("Mario Bros", 10);
   Personagem pers3 ("Bomberman");
   Personagem pers4 (20);


   pers1.mostrarMensagem();
   pers2.mostrarMensagem();
   pers3.mostrarMensagem();
   pers4.mostrarMensagem();

   return 0;
}