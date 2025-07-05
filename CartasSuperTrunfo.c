#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
int main (){
char letra = 'A'; // representa um estado
    char estado [10] = "A01"; // código de cada estado
    char cidade [20] = "Rio de Janeiro"; // nome da cidade
    double população = 6211.42; //população
    float área = 1255.30; //Área por KM2
    float pib = 1.052; // Produto Interno Bruto
    int pontos = 58; //pontos turisticos
 
    printf("Carta 1:\nestado: %c\ncodigo: %s\n",letra, estado); 
      printf("Nome da Cidade: %s\nPopulação: %.2f\nÁrea: %.2f KM2\n",cidade, população, área);
         printf("PIB: %.3f Trilhões de Reais\nNúmero de Pontos Turisticos: %d\n",pib, pontos);
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

    
