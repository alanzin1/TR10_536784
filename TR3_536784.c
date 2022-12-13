#include <stdio.h>
#include <stdlib.h>

//Aluno: alan victor soares vieira 
//matricula: 536784

int main(){
\\criação das variaveis
    unsigned int z[200];
    int mem;
    int saida;
    int x;
    int a; 
    int pot;
    int i;
    
    for(i = 199; i >= 0; i--){
        z[i] = 0;
        }

    while(1){
        printf("insira um numero: ");
        scanf("%d",&x);
        i = 0;
        pot = 1;
        mem = x/32;
        a = mem;

        if(x != -1){

            a = x - (a*32);
            
            while(i < a){
                pot = pot*2;
                i++;
            }
        
        i = z[mem];
        i = i|pot;
        z[mem] = i;
        }

        else{

            for(saida = 0; saida < 200; saida++){
                for(i = 0; i < 32; i++) {
                    mem = z[saida] >> i;
                    if(mem & 1){
                        printf("%u \n", (i)+32*(saida));
                    }
                }
            }
            break;
        }
    }
    return 0;
}


