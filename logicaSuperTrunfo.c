

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.


#include <stdio.h>

int main(){
         
         unsigned long int populacao1, populacao2; 
         int pontos1, pontos2, opcao, combate;
         float area1, area2, densidade1, densidade2; 
         float pib1, pib2, percapita1, percapita2;
         float superpoder1, superpoder2, resultado1, resultado2;
         char estado1, estado2, cidade1[20], cidade2[20], cod1, cod2;


    
         printf("Bem-vindo ao Super Trunfo.\n");

         printf("Menu Principal.\n");  
         printf("1) Iniciar Jogo.\n");    
         printf("2) Regras do Jogo.\n");
         printf("3) Sair do Jogo.\n");

         printf("Escolha uma opção:");
         scanf("%d", &opcao);

 switch (opcao) 
  {
  case 1: //adicionando atributos das cartas

      printf("Adicione  os dados da Carta 1\n");

      printf("Digite o estado da carta 1\n");
      scanf("%s", &estado1);

      printf("Digite o codigo da carta 1\n");
      scanf("%s", &cod1);

      printf("Digite a cidade da carta 1\n");
      scanf("%s", &cidade1);

      printf("digite a populaçao da carta 1\n");
      scanf("%lu", &populacao1); 

      printf("Digite quantidade de pontos turisticos da carta 1\n");
      scanf("%d", &pontos1); 

      printf("Digite a area km² da carta 1\n");
      scanf("%f", &area1); 

      printf("Digite o pib da carta 1\n");
      scanf("%f", &pib1);

    
      printf("Adicione  os dados da Carta 2\n");

      printf("Digite o estado da carta 2\n");
      scanf("%s", &estado2);

      printf("Digite o codigo da carta 2\n");
      scanf("%s", &cod2);

      printf("Digite a cidade da carta 2\n");
      scanf("%s", &cidade2);

      printf("Digite a populaçao da carta 2\n");
      scanf("%lu", &populacao2); 

      printf("Digite quantidade de pontos turisticos da carta 2\n");
      scanf("%d", &pontos2); 

      printf("Digite a area km² da carta 2\n");
      scanf("%f", &area2); 

      printf("Digite o pib da carta 2\n");
      scanf("%f", &pib2);



       //mostrando resultados das cartas 
      
         densidade1 = (populacao1 / area1);

         percapita1 = (pib1 / populacao1);



         printf("Resultado Carta 1\n");
         printf("Populacao: %lu - Pontos Turisticos: %d \n", populacao1, pontos1);
         printf("Area por km²: %f - PIB: %f \n", area1, pib1);

           printf("Densidade Populacional: %f \n", densidade1);
           printf("PIB per capita: %f \n",percapita1);




         densidade2 = (populacao2 / area2);

         percapita2 = (pib2 / populacao2);

         printf("Resultado carta 2\n");
         printf("Populacao: %lu - Pontos Turisticos: %d \n", populacao2, pontos2);
         printf("Area por km²: %f - PIB: %f \n", area2, pib2);

           printf("Densidade Populacional: %f \n", densidade2);
           printf("PIB per capita: %f \n",percapita2);

         

         //inicio das comparações

         printf("Iniciando combate entre as Cartas.\n");
         printf("Escolha o atributo de comparação.\n");

         printf("1) População.\n");  
         printf("2) Área.\n");   
         printf("3) PIB.\n");   
         printf("4) Pontos Turísticos.\n");
         printf("5) Densidade Demográfica.\n");

         printf("escolha uma opção:\n");
         scanf("%d", &combate);

         switch (combate) 
         {
            case 1:  //estrutura aninhada
              if(populacao1 > populacao2) {
               printf("Carta 1 %s, População:%d \n", cidade1, populacao1);
               printf("Resultado Carta 1 %s ganhou.", cidade1);
               }
               else if (populacao2 > populacao1) { 

                  printf("Carta 2 %s, População:%d \n", cidade2, populacao2);
                  printf("Resultado carta 2 %s ganhou.", cidade2);
              }
                else{
                 printf("Empate entre as cartas.\n");
              }
            
            break;

            case 2:
              if(area1 > area2) {
                printf("Carta 1 %s, Área:%f \n", cidade1, area1);
                printf("Resultado Carta 1 %s ganhou.", cidade1);
               }
                else if (area2 > area1) { 

                printf("Carta 2 %s, Área:%f \n", cidade2,area2);
                printf("Resultado carta 2 %s ganhou.", cidade2);
              }
                else{
                  printf("Empate entre as cartas.\n");
              }
           
            break;



            case 3:
              if(pib1 > pib2) {
                printf("Carta 1 %s, PIB:%f \n", cidade1, pib1);
                printf("Resultado Carta 1 %s ganhou.", cidade1);
               }
               else if (pib2 > pib1) { 
                  printf("Carta 2 %s, PIB:%f \n", cidade2, pib2);
                  printf("Resultado carta 2 %s ganhou.", cidade2);
              }
                else{
               printf("Empate entre as cartas.\n");
              }
           
            break;


            case 4:
                if(pontos1 > pontos2) {
                 printf("Carta 1 %s, Pontos Turísticos:%d\n", cidade1, pontos1);
                 printf("Resultado Carta 1 %s ganhou.", cidade1);
               }
                else if ( pontos1 > pontos2) {  
                printf("Carta 2 %s, Pontos Turísticos:%fd\n", cidade2, pontos2);
                printf("Resultado carta 2 %s ganhou.", cidade2);
               }
                 else{
                 printf("Resultado empate entre as Cartas");
               }
            
            break;

            case 5:
              if(densidade1 < densidade2) {
                printf("Carta 1 %s, densidade:%f\n", cidade1, densidade1);
                printf("Resultado Carta 1 %s ganhou.", cidade1);
               }
                else if (densidade1 > densidade2) {  
                 printf("Carta 2 %s, densidade:%f \n", cidade2, densidade2);
                 printf("Resultado carta 2 %s ganhou.", cidade2);
               }
                 else{
                  printf("Resultado empate entre as Cartas");
               }
          
            break;
         
         default:
            printf("Opção invalida!\n");
            
            break;
         }




         break;

 case 2: //Regras do jogo

         printf(" Regras Super Trunfo\n");
         printf("Cada jogador vai atribuir os valores das Cartas.\n");
         printf("Depois de atribuitos os Cartas serão analisadas e comparadas.\n");
         printf("vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor..\n");

        break;


         break;

 case 3:
       printf("Saíndo do jogo!");


         break;
      
default:
      printf("Opção invalida!\n");

      
         break;
      }


   return 0;
}