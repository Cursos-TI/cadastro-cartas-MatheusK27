  #include <stdio.h>

  // Desafio Super Trunfo - Países
  // Tema 1 - Cadastro das cartas
  int main(){
    
    char estado1[10],estado2[10];
    char nomeCidade1[10],nomeCidade2[10];
    char codigo01[04],codigo02[04];
    unsigned long int populacao1,populacao2;
    float area01,area02;
    float pib1,pib2;
    int pontosTuristicos1,pontosTuristicos2,resultado7,resultado1,resultado2,resultado3,resultado4,resultado5,resultado6;
    float densPop1,densPop2;
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
    scanf("%lu", &populacao1 );

    printf(" digite a área (km²):\n");
    scanf("%f", &area01);

    printf("Digite pib:\n");
    scanf("%f", &pib1);
    
    printf("Digite quantos pontos turísticos\n");
    scanf("%d", &pontosTuristicos1 );

    densPop1= populacao1/(float)area01;
    pibperCapita1= pib1/populacao1;
    superPoder1=populacao1+(float)area01+pibperCapita1;


    printf("--CARTA 1--\n");
    printf("Estado: %s \n ", estado1 );
    printf("Código: %s \n ", codigo01 );
    printf("Nome da cidade : %s \n", nomeCidade1);
    printf("População: %lu \n", populacao1);
    printf("Area (km²) %f \n", area01);
    printf("PIB atual: %f \n", pib1);
    printf("Numero de pontos Turísticos: %d \n", pontosTuristicos1);
    printf("a densidade populacional é : %f\n",densPop1 );
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
    scanf("%lu", &populacao2 );

    printf(" digite a área (km²):\n");
    scanf("%f", &area02);

    printf("Digite pib:\n");
    scanf("%f", &pib2);
    
    printf("Digite quantos pontos turísticos\n");
    scanf("%d", &pontosTuristicos2);

    densPop2= populacao2/(float)area02;
    pibperCapita2= pib2/populacao2;
    superPoder2=populacao2+(float)area02+pib2+pibperCapita2;

 




    printf("--CARTA 2--\n");
    printf("Estado: %s \n ", estado2 );
    printf("Código: %s \n ", codigo02 );
    printf("Nome da cidade : %s \n", nomeCidade2);
    printf("População: %.3lu\n", populacao2);
    printf("Area (km²) %.3f\n", area02);
    printf("PIB atual: %.3f\n", pib2);
    printf("Numero de pontos Turísticos: %d\n", pontosTuristicos2);
    printf("a densidade populacional é : %f\n",densPop2 );
    printf("O Pib per carpita é %f\n", pibperCapita2);
    printf(" -- FIM CARTA 02 -- \n");
    printf("================================\n");
    
    resultado1= populacao1>populacao2;
    resultado2= area01>area02;
    resultado3= pib1>pib2;
    resultado4= pontosTuristicos1>pontosTuristicos2;
    resultado5= pibperCapita1>pibperCapita2;
    resultado6= superPoder1>superPoder2;
    resultado7= densPop2>densPop1;



    printf("*comparações:*\n");
    printf("população carta 01(%d)\n",resultado1);      //carta(1) vence  - carta(0) perde.
    printf("Area km² carta 01(%d)\n",resultado2);       //carta(1) vence  - carta(0) perde.
    printf("PIB carta 01 (%d)\n",resultado3);           //carta(1) vence  - carta(0) perde.
    printf("Pontos turísticos  carta 01(%d)\n",resultado4);  //carta(1) vence  - carta(0) perde.
    printf("PIB per Capita carta 01(%d)\n",resultado5);      //carta(1) vence  - carta(0) perde.
    printf("Super poder carta 01(%d)\n",resultado6);        //carta(1) vence  - carta(0) perde.
    printf("DP carta 01 (%d)\n",resultado7);               //carta(1) perde - carta(0) vence.
    
    return 0;

    }
    
