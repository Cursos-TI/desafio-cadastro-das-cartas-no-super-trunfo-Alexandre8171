#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Criado pelo Aluno Alexandre Siqueira 
int main (){
   int Carta1;
    char letra = 'A'; // representa um estado
    char estado [10] = "A01"; // código de cada estado
    char cidade [20] = "Rio de Janeiro"; // nome da cidade
    double população = 6211.42; //população
    float área = 1255.30; //Área por KM2
    float pib = 1.052; // Produto Interno Bruto
    int pontos = 58; //pontos turisticos
 
    printf("Carta 1:\nestado: %c\ncodigo: %s\n",letra, estado); //Exibi o estado e o código do estado 
      printf("Nome da Cidade: %s\nPopulação: %.2f\nÁrea: %.2f KM2\n",cidade, população, área); // Exibe a cidade, população e área
         printf("PIB: %.3f Trilhões de Reais\nNúmero de Pontos Turisticos: %d\n",pib, pontos); //Exibe o PIB e pontos turisticos
    
   int Carta2;     
    char Letra = 'B';
    char Estado [10] = "B02";
    char Cidade [20] = "São Paulo"; // nome da cidade
    double População = 11895.578; //população
    float Área = 1521.00; //Área por KM2
    float Pib = 828.9; // Produto Interno Bruto
    int Pontos = 37; //pontos turisticos
    printf("Carta 2:\nestado: %c\ncodigo: %s\nNome da Cidade: %s",Letra, Estado, Cidade); // imprime a carta, o estado, o codigo 
      printf("\nPopulação: %.2f\nÁrea: %.2f KM2\n", População, Área); // imprime a população e Área
        printf("PIB: %.2f Bilhoes de Reais\nNúmero de Pontos Turisticos: %d\n",Pib, Pontos); // imprime o PIB e pontos turisticos


         return 0;
}


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    
