#include <stdio.h>


//Construa um programa que conclua, através das informações de classe, habitat
//e hábito alimentar inseridas pelo usuário, qual animal da tabela foi escolhido
//(Fazer com if-else e depois com switch). Obs: Associe valores inteiros para cada
//uma das opções. Classe: 1- Mamífero 2- Ave, Habitat: 1- Terrestre, 2- Aquático,
//3- Aéreo. Hábito alimentar: 1- Carnívoro, 2- Frutífero, 3-Herbívoro, 4-Onívoro.//


int main(){
 int animal, habita, alimentar, bicho;
 printf("Digite qual o animal vc quer classificar:(1- Carnivoro e 2 - Ave):\n");
 scanf("%d", &animal);
 printf("Digite qual o habitat:(1 - Terrestre, 2 - Aquatico, 3 - Aéreo):\n");
 scanf("%d", &habita);
 printf("Digite qual habito alimentar do animal:(1- Carnivoro, 2 - Frutifero, 3- Herbívoro, 4- Onivoro):\n");
 scanf ("%d", &alimentar);

 if(animal == 1){

 if(habita ==1 && alimentar ==1)
     printf("Leão");
 if  (habita ==1 && alimentar ==2)
         printf("Macaco");
 if (habita ==1 && alimentar== 3)
         printf("Cavalo"

 } 
 
  if
     (animal ==1 && habita ==1 && alimentar ==2){
         printf("Macaco");
     } 
     if (animal ==1 && habita ==1 && alimentar== 3){
         printf("Cavalo");
     }
     
 if(animal ==1 && habita ==2 && alimentar ==1){
     printf("Foca");
 } 
 if (animal ==1 && habita == 1 && alimentar ==3 ) {
     printf("Peixe-boi");
    
 } if (animal ==1 && habita == 3 && alimentar == 1 || alimentar ==2 || alimentar ==3){
     printf("Morcego");
 }
 if(animal == 2 && habita == 1 && alimentar == 4){
     printf("Avestruz");
 }
 if(animal ==2 && habita == 1 && alimentar == 1){
     printf("Pinguim");
 }
 if(animal==2 && habita ==2 && alimentar == 1 || alimentar ==4 ){
     printf("Pato");
 }
 if(animal ==2 && habita == 2)
 
 

}