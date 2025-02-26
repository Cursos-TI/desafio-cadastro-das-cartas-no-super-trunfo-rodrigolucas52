#include <stdio.h>

int main(){
    char estado;
    int codigo[3];
    int cidade[30];
    int populacao;
    float area;
    float PIB;
    int pontosturisticos;

    
    printf("digite o codigo: \n");
    scanf("%s", &codigo);

    printf("Digite o estado: \n");
    scanf("%s", &estado);

    printf("digite a cidade: \n");
    scanf("%s", &cidade);
    
    printf("digite a populacao: \n");
    scanf("%d", &populacao);

    printf("digite a area: \n");
    scanf("%f", &area);

    printf("digite o PIB: \n");
    scanf("%f", &PIB);

    printf("digite o pontos turisticos: \n");
    scanf("%f", &pontosturisticos);

    return 0;

}
