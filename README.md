#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
int main(){
  
  char estado1[10],estado2[10];
  char nomeCidade1[10],nomeCidade2[10];
  char codigo01[04],codigo02[04];
  float populacao1,populacao2;
  float area01,area02;
  float pib1,pib2;
  int pontosTuristicos1,pontosTuristicos2,opcao;
  float densidadePopulacional,densidadePopulacional2;
  float pibperCapita1,pibperCapita2;
  float superPoder1,superPoder2;

  // Área para entrada de dados
  printf("-- CARTA 01 --\n");

  // Área para exibição dos dados da cidade
  printf("Digite o estado:\n");
  scanf("%s", estado1);

   printf("digite código:\n");
  scanf("%s", codigo01);

  printf("digite nome da cidade:\n");
  scanf("%s", nomeCidade1);

  printf("Digite a população:\n");
  scanf("%f", &populacao1 );

  printf(" digite a área (km²):\n");
  scanf("%f", &area01);

  printf("Digite pib:\n");
  scanf("%f", &pib1);
  
  printf("Digite quantos pontos turísticos\n");
  scanf("%d", &pontosTuristicos1 );

  densidadePopulacional= populacao1/area01;
  pibperCapita1= pib1/populacao1;
  superPoder1=populacao1+pib1+pibperCapita1;

  printf("--CARTA 1--\n");
  printf("Estado: %s \n ", estado1 );
  printf("Código: %s \n ", codigo01 );
  printf("Nome da cidade : %s \n", nomeCidade1);
  printf("População: %.3f \n", populacao1);
  printf("Area (km²) %.3f \n", area01);
  printf("PIB atual: %.3f \n", pib1);
  printf("Numero de pontos Turísticos: %d \n", pontosTuristicos1);
  printf("a densidade populacional é : %.2f\n",densidadePopulacional );
  printf("O Pib per carpita é %f\n", pibperCapita1);
  printf(" -- FIM CARTA 01 -- \n");
  printf("================================\n");

  // Área para entrada de dados
  printf("-- CARTA 02 --\n");

  // Área para exibição dos dados da cidade
  printf("Digite o estado:\n");
  scanf("%s", estado2);

   printf("digite código:\n");
  scanf("%s", codigo02);

  printf("digite nome da cidade:\n");
  scanf("%s", nomeCidade2);

  printf("Digite a população:\n");
  scanf("%f", &populacao2 );

  printf(" digite a área (km²):\n");
  scanf("%f", &area02);

  printf("Digite pib:\n");
  scanf("%f", &pib2);
  
  printf("Digite quantos pontos turísticos\n");
  scanf("%d", &pontosTuristicos2);

  densidadePopulacional2= populacao2/area02;
  pibperCapita2= pib2/populacao2;
  superPoder2=populacao2+pib2+pibperCapita2;

  printf("--CARTA 2--\n");
  printf("Estado: %s \n ", estado2 );
  printf("Código: %s \n ", codigo02 );
  printf("Nome da cidade : %s \n", nomeCidade2);
  printf("População: %.3f \n", populacao2);
  printf("Area (km²) %.3f \n", area02);
  printf("PIB atual: %.3f \n", pib2);
  printf("Numero de pontos Turísticos: %d \n", pontosTuristicos2);
  printf("a densidade populacional é : %.2f\n",densidadePopulacional2 );
  printf("O Pib per carpita é %f\n", pibperCapita2);
  printf(" -- FIM CARTA 02 -- \n");
  printf("================================\n");
 
  printf("escolha as opções de ataque:\n");
  printf("1. População carta 01 X população carta 02\n");
  printf("2. Área carta 01 x área cata 02\n");
  printf("3. PIB carta 01 X PIB carta 02\n");
  printf("4. num.Pontos turísticos carta 01 X num.Pontos turísticos carta 01\n");
  printf("5. Densidade populacional carta 01 X Densidade populacional carta 02\n");
  scanf("%d", &opcao);
  
  switch (opcao)
  {
  case 1:
       printf("população carta 01: - %.2f\n",populacao1);
       printf("população carta 02: -  %.2f\n",populacao2);
      
       if(populacao1>populacao2){ 
        printf("A população do %s é maior que %s \n",estado1,estado2);
        printf("**CARTA 01 VENCEDORA**");
       }else if(populacao2>pontosTuristicos1) {
        printf("A população do %s é maior que %s\n",estado2, estado1);
        printf("**CARTA 02 VENCEDORA**");
       }else{
        printf("O PIB do %s e %s são iguais!!\n",estado1,estado2);
        printf("**JOGO EMPATOU**\n");
       }
      break;

      case 2:
      printf("Área (km²) de carta 01:%.3f\n",area01);
      printf("Área (km²) de carta 02:%.3f\n",area02);

      if(area01>area02){
        printf("A área  do %s é maior que %s \n",estado1,estado2);
        printf("**CARTA 01 VENCEDORA**");
        }else if(area02>area01){
         printf("A área  do %s é maior que %s \n",estado2,estado1);
         printf("**CARTA 02 VENCEDORA**");
        }else{
         printf("A área  do %s e %s são iguais!!\n",estado1,estado2);
        printf("**JOGO EMPATOU**\n");
        }
        break;

        case 3:
        printf("PIB da carta 01 %.2f\n",pib1);
         printf("PIB da carta 02 %.2f\n",pib2);

        if (pib1>pib2){
          printf("O PIB do %s é maior que %s \n",estado1,estado2);
        printf("**CARTA 01 VENCEDORA**");
        }else if (pib2>pib1){
          printf("A área  do %s é maior que %s \n",estado2,estado1);
        printf("**CARTA 02 VENCEDORA**");
        }else{
          printf("O PIB do %s e %s são iguais!!\n",estado1,estado2);
          printf("**JOGO EMPATOU**\n");
        }
        break;

        case 4:
       printf("N.Pontos turistimos carta 01%d\n",estado1);
       printf("N.Pontos turistimos carta 02 %d\n",estado2);
       if(pontosTuristicos1>pontosTuristicos2){
        printf("N.pontos turisticos do %s é maior que %s \n",estado1,estado2);
        printf("**CARTA 01 VENCEDORA**");
       }else if(pontosTuristicos2>pontosTuristicos1){
        printf("N.pontos turisticos do %s é maior que %s \n",estado2,estado1);
        printf("**CARTA 02 VENCEDORA**");
       }else{
        printf("N.pontos turisticos do %s e %s são iguais!!\n",estado1,estado2);
          printf("**JOGO EMPATOU**\n");
       }        
      break;
      case 5:

      printf("O DP da carta 01 %.2f\n",densidadePopulacional);
      printf("O DP da carta 02 %.2f\n",densidadePopulacional2);

    if (densidadePopulacional<densidadePopulacional2){
      printf("O DP do %s é menor %s \n",estado1,estado2);
        printf("**CARTA 01 VENCEDORA**");
    }else if(densidadePopulacional2<densidadePopulacional){
       printf("O DP do %s é menor %s \n",estado2,estado1);
        printf("**CARTA 02 VENCEDORA**");

    }else{
      printf("**O JOGO EMPATOU**");
    }
    
       default:
         break;
  }
}



