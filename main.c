#include <stdio.h>
#include <string.h>

#define MAX_NAME_SIZE 25
#define MAX_RANK_NAME_SIZE 25
#define MAX_STATUS_FRASE_SIZE 200
#define MAX_STOCK_SIZE 3

typedef struct{
    char nome[MAX_NAME_SIZE],
        ranque[MAX_RANK_NAME_SIZE],
        status[MAX_STATUS_FRASE_SIZE];
    int custoInGoldPieces,
        stock;
} Item;

int searchAndShowTheItem(char *valueToSearch, Item *stock){
    for(int index = 0; index< MAX_STOCK_SIZE; index++)
    {
        if(strcmp(stock[index].nome, valueToSearch)==0)
        {
            printf("---%s encontrado---\n\tRanke:%s,\n\tStatus:\n\t\t%s\n\tCusto:%dGP\n\t,Stock:%du\n",
                    stock[index].nome,
                    stock[index].ranque,
                    stock[index].status,
                    stock[index].custoInGoldPieces,
                    stock[index].stock);
            return 0;
        }        

    }
    return 1;
}

void showStock(Item stock[]){
    printf("--- Item atualmente Disponiveis ---\n"); 
    for (int index=0; index< MAX_STOCK_SIZE;index++ ) {
        printf("\t%s\n", stock[index].nome );
    }

}

int main(void){
    Item Stock[3] = {
        {"Espada", "Ouro"  , "Dano:20,\n\t\tDurabilidade:50\\50,",20,10},
        {"Escudo", "Prata" , "Defesa:30,\n\t\tDurabilidade:60\\60,\n\t\tPeso:2,",5,30},
        {"Armadura"      , "Commun", "Defesa:5,\n\t\tAgilidade:-10,\n\t\tDurabilidade:100\\100,\n\t\tPeso:10,",2,50}
    }; 

    
    char searchedItem[MAX_NAME_SIZE];
    showStock(Stock);
    printf("Qual o nome do item que deseja olhar: ");scanf(" %s", searchedItem);
    
    if(searchAndShowTheItem(searchedItem,Stock)==1){printf("Item não encontrado");}
    return 0;
}

/*Item Stock[3] = {
        {"Espada Simples", "Ouro"  , "Dano:20,\n\t\tDurabilidade:50\\50,",20,10},
        {"Escudo Sagrado", "Prata" , "Defesa:30,\n\t\tDurabilidade:60\\60,\n\t\tPeso:2",5,30},
        {"Armadura"      , "Commun", "Defesa:5,\n\t\tAgilidade:-10,\n\t\tDurabilidade:100\\100,\n\t\tPeso:10",2,50}
    };
*/
