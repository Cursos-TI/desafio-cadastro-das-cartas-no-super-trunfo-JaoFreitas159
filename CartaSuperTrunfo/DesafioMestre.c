/*Criando as Cartas do Super Trunfo
Neste ultimo nível vamos continuar onde paramos no desafio anterior e implementar um sistema de comparação e o super poder que é a soma de 
varios atributos da carta, especialmente a densidade sendo o inverso, ou seja 1/densidade. E no fim exibir a comparação para o usuario .
 */

#include <stdio.h>

int main(){
    unsigned long long int populacao1, populacao2;                  //População do local utilizando unsigned long long para podermos deixar o numero armazenado maior e sempre positivo.
    char Estado1, Estado2;                                          //estado da cidade o numero.
    char Codigo_carta1[4],Codigo_carta2[4];                         //codigo definido para a carta.
    char Cidade1[40],Cidade2[40];                                   //Nome da cidade.
    int  ponto_turistico1, ponto_turistico2;                        //quantida de pontos turisticos.
    float area1, PIB1, area2, PIB2;                                 //area da cidade e o seu PIB.
                                                                    //O numero após cada variavel representa a qual carta ele sera atribuido.
    float Den1, Den2,PIBC1, PIBC2;                                  //Essas variaveis irão servir para armazenar a densidade demográfica das cartas e o PIB per carpita.
    float Super1, Super2;                                           //Essas são as variaveis do super poder.

    int resutadoPopulacao, resultadoArea, resultadoPib, resultadoTuristico, resultadoDen, resultadoPPC, resultadoSuper; //Esses são as variaveis usadas para a comparação dos resultados
        printf("Vamos Começar!!\n Para isso você vai precisar me dar algumas informações como Estado da carta, o código da carta, a cidade, a população,"
            "a quantidade de pontos turístiscos , a área da cidade e por fim o seu PIB. \n Lembrando que o Estado da carta é de A a H e o" 
            "código da carta é definido pelo ESTADO DA CARTA + UM valor de 01 a 04, por exemplo a carta x ela tem o estado A logo o codigo dela vai ser A + (01 a 04)\n" 
            "Para facilitar a criação vamos primeiro fazer a carta 1 e depois a carta 2, vamos começar !\n");
            
        printf("Defina um Estado de A a H para sua carta 1: \n");
        scanf(" %c",&Estado1);                                                                      //Estamos recebendo nos scanf o valor de cada variavel

        printf("Me indique o código da carta 1 : \n");
        scanf("%3s",Codigo_carta1);
                
        printf("Qual o nome da cidade desta carta?:\n");
        scanf(" %39[^\n]", Cidade1);                                                                //Utilizadmos o %39[^ para poder receber um nome composto de cidade e o 39 sendo o limite de caractere contando o espaço.

        printf("Agora me informe a população e quantos pontos turisticos tem nesta cidade:\n");
        scanf("%llu %d", &populacao1, &ponto_turistico1);                                           //llu se refere ao unsigned long long int que estamos recebendo , utilizei long long para melhor conversão em diferente IDE


        printf("Qual a área da cidade e seu PIB?:\n");
        scanf("%f %f",&area1,&PIB1);

        printf("Agora vamos fazer a carta 2!!\n");

        printf("Defina um Estado de A a H para sua carta 2: \n");
        scanf(" %c",&Estado2);

        printf("Me indique o código da carta 2 : \n");
        scanf("%3s",Codigo_carta2);                                                                 // Quando uso %3s estou dizendo que a variavel estado tera no maximo 3 caracteres 
                
        printf("Qual o nome da cidade desta carta?:\n");
        scanf(" %39[^\n]", Cidade2);

        printf("Agora me informe a população e quantos pontos turisticos tem nesta cidade:\n");
        scanf("%llu %d", &populacao2, &ponto_turistico2);


        printf("Qual a área da cidade e seu PIB?:\n");
        scanf("%f %f",&area2,&PIB2);

        Den1 = populacao1 / area1 ;                                                                 //Aqui calculamos o valor de Densidade
        Den2 = populacao2 / area2 ;

        PIBC1= PIB1 / populacao1;                                                                   // Calculo do PIB per capita
        PIBC2= PIB2 / populacao2;
        
        Super1 = (float)populacao1 + area1 + PIB1 + (float)ponto_turistico1 + PIBC1 + ( 1 /Den1 ) ; // Calculo do super poder com a conversão de variavel para otimizar o calculo e a den invertida.
        Super2 = (float)populacao2 + area2 + PIB2 + (float)ponto_turistico2 + PIBC2 + ( 1 /Den2 ) ;

            printf("Carta 1 :\n ESTADO : %c \n Código : %s \n Nome da Cidade: %s \n População: %llu \n Área:%.2fkm² \n PIB: %.2f bilhões de reais \n Número de Pontos Turísticos: %d \n Densidade Populacional: %.2fhab/km² \n PIB per Capita: %.2freais \n Super Poder: %.2f \n" , 
                Estado1, Codigo_carta1, Cidade1, populacao1, area1, PIB1,ponto_turistico1, Den1, PIBC1, Super1);

            printf("Carta 2 :\n ESTADO : %c \n Código : %s \n Nome da Cidade: %s \n População: %llu \n Área:%.2fkm² \n PIB: %.2f bilhões de reais \n Número de Pontos Turísticos: %d \n Densidade Populacional: %.2fhab/km² \n PIB per Capita: %.2freais \n Super Poder: %.2f \n"
                , Estado2, Codigo_carta2, Cidade2, populacao2, area2, PIB2,ponto_turistico2, Den2, PIBC2, Super2); //Aqui mostramos ao usuário as cartas inseridas

            resutadoPopulacao = populacao1 > populacao2;                                            // Aqui é onde a comparação dos resultados esta sendo feita.
            resultadoArea = area1 > area2;
            resultadoPib = PIB1 > PIB2;
            resultadoPPC = PIBC1 > PIBC2;
            resultadoDen = Den1 < Den2;
            resultadoTuristico = ponto_turistico1 > ponto_turistico2;
            resultadoSuper = Super1 > Super2;
            printf("\n **************Agora vamos aos resultados de qual carta ganha em cada modalidade, lembrando que se o resultador for 1 então a Carta 1 ganhou se for 0 a Carta 2 ganhou**************\n");
            printf("Vencedor modalidade população: %d \nVencedor modalidade Área: %d \nVencedor modalidade PIB: %d \nVencedor modalidade Pontos Turísticos: %d \nVencedor modalidade Densidade Populacional: %d \nVencedor modalidade PIB per Capita: %d \nVencedor modalidade Super poder: %d \n" ,
            resutadoPopulacao, resultadoArea, resultadoPib, resultadoTuristico, resultadoDen, resultadoPPC, resultadoSuper );  //Aqui mostramos a comparação das cartas

return 0;
}
