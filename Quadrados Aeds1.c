#include <stdio.h>

int main (){

int lado, lin, col;
char comando;

printf("Insira o lado:");
scanf("%d%*c", &lado);
printf("Digite o comando:");
scanf("%c%*c", &comando);

switch(comando){
    case 'c': // Quadrado totalmente preenchido
        for (lin =0; lin<lado; lin++){
            for(col = 0; col<lado; col++){
        printf("*");
        }
    printf("\n");
    }
        break;
    case 'b': // Somente as bordas do quadrado
        for(lin =0; lin<lado;lin++){
            for(col=0; col<lado; col++){
                if (lin== 0 || lin==lado-1 || col ==0 || col== lado-1){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
            printf("\n");
        }
        break;
    case 'p': // Bordas e a diagonal principal
        for(lin =0; lin<lado;lin++){
            for(col=0; col<lado; col++){
                if (lin== 0 || lin==lado-1 || col ==0 || col== lado-1 || col == lin){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
            printf("\n");
        }
        break;
    case 's': // Bordas e a diagonal secundária
        for(lin =0; lin<lado;lin++){
            for(col=0; col<lado; col++){
                if (lin== 0 || lin==lado-1 || col ==0 || col== lado-1 || col == lado-lin-1){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
            printf("\n");
        }
        break;
    case 'h': // Bordas e sua divisão horizontal (no meio)
            for(lin =0; lin<lado;lin++){
            for(col=0; col<lado; col++){
                if (lin== 0 || lin==lado-1 || col ==0 || col== lado-1 || lin== lado/2){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
            printf("\n");
        }
        break;
    case 'v': // Bordas e sua divisão vertical (no meio)
            for(lin =0; lin<lado;lin++){
            for(col=0; col<lado; col++){
                if (lin== 0 || lin==lado-1 || col ==0 || col== lado-1 || col == lado/2){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
            printf("\n");
        }

        break;
    default:
        printf("Nao conheco\n");
        break;
}

return 0;
}