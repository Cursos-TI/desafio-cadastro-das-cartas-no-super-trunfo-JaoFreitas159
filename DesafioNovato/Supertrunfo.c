/*Criando as Cartas do Super Trunfo
Neste primeiro nível, 
seu objetivo é construir a base do nosso jogo Super Trunfo de Países
um sistema para cadastrar as cartas com informações sobre as cidades.
Você vai praticar a leitura de dados do usuário, 
o armazenamento em variáveis e a exibição dessas informações na tela. */

#include <stdio.h>

int main(){

    char Estado1, Estado2;                                           //estado da cidade o numero
    char Codigo_carta1[4],Codigo_carta2[4];                          //codigo definido para a carta
    char Cidade1[40],Cidade2[40];                                     //Nome da cidade
    int populacao1, ponto_turistico1, populacao2, ponto_turistico2;  //População do local e quantida de pontos turisticos
    float area1, PIB1, area2, PIB2;                                  //area da cidade e o seu PIB
                                                                     //O numero após cada variavel representa a qual carta ele sera atribuido

        printf("Vamos Começar!!\n Para isso você vai precisar me dar algumas informações como Estado da carta, o código da carta, a cidade, a população,"
            "a quantidade de pontos turístiscos , a área da cidade e por fim o seu PIB. \n Lembrando que o Estado da carta é de A a H e o" 
            "código da carta é definido pelo ESTADO DA CARTA + UM valor de 01 a 04, por exemplo a carta x ela tem o estado A logo o codigo dela vai ser A + (01 a 04)\n" 
            "Para facilitar a criação vamos primeiro fazer a carta 1 e depois a carta 2, vamos começar !\n");
            
        printf("Defina um Estado de A a H para sua carta 1: \n");  //Aqui receberemos o estado da carta
        scanf(" %c",&Estado1);

        printf("Me indique o código da carta 1 : \n");              //Aqui receberemos o código o %3s indica que ele so recebera no máximo 3 caracteres
        scanf("%3s",Codigo_carta1);
                
        printf("Qual o nome da cidade desta carta?:\n");            //Recebemos o nome da cidade, o scanf nesta forma permete que a gente receba nomes compostos
        scanf(" %39[^\n]", Cidade1);                                //o %39 é limitando a 39 caracteres, a exemplo do Brasil a cidade com maior nome é 32 caracteres com os espaços
    
        printf("Agora me informe a população e quantos pontos turisticos tem nesta cidade:\n"); //Aqui recebemos a população e a quantidade de pontos turisticos
        scanf("%d %d", &populacao1, &ponto_turistico1);


        printf("Qual a área da cidade e qual seu PIB em bilhão?:\n");                  // Recebemos a área da cidade e o seu PIB em bilhão para melhor organizar o jogo
        scanf("%f %f",&area1,&PIB1);

        printf("Agora vamos fazer a carta 2!!\n");          //A partir daqui faremos o mesmo processo para a carta 2

        printf("Defina um Estado de A a H para sua carta 2: \n");
        scanf(" %c",&Estado2);

        printf("Me indique o código da carta 2 : \n");
        scanf("%3s",Codigo_carta2);
                
        printf("Qual o nome da cidade desta carta?:\n");
        scanf(" %39[^\n]", Cidade2);

        printf("Agora me informe a população e quantos pontos turisticos tem nesta cidade:\n");
        scanf("%d %d", &populacao2, &ponto_turistico2);


        printf("Qual a área da cidade e qual seu PIB em bilhão?:\n"); 
        scanf("%f %f",&area2,&PIB2);
                                            //Agora vamos informar as duas cartas separadas com seus atributos em ordem.
                        printf("Carta 1 :\n ESTADO : %c \n Código : %s \n Nome da Cidade: %s \n População: %d \n Área:%.2fkm² \n PIB: %.2f bilhões de reais \n Número de Pontos Turísticos: %d \n\n",
                             Estado1, Codigo_carta1, Cidade1, populacao1, area1, PIB1,ponto_turistico1);

                        printf("Carta 2 :\n ESTADO : %c \n Código : %s \n Nome da Cidade: %s \n População: %d \n Área:%.2fkm² \n PIB: %.2f bilhões de reais \n Número de Pontos Turísticos: %d",
                             Estado2, Codigo_carta2, Cidade2, populacao2, area2, PIB2,ponto_turistico2);



return 0;
}
