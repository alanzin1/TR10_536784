#include <stdio.h>
#include <stdlib.h>

//Aluno: alan victor soares vieira 
//matricula: 536784

int main(){
    
//criação das variaveis e vetor
    
    unsigned int z[200];
    int mem;
    int saida;
    int x;
    int a; 
    int pot;
    int i;
    
//laço responsavel por zerar o vetor para usarmos o metodo bit a bit
    
    for(i = 199; i >= 0; i--){
        z[i] = 0;
        }
    
//laço principal
    
    while(1){
        
//parte responsavel por receber a entrada do usuario e usa-la para calcular alguns valores padroes usados futuramente no programa
        
        printf("insira um numero: ");
        scanf("%d",&x);
        i = 0;
        pot = 1;
        mem = x/32;
        a = mem;
        
//condiçao de continuidade do programa
        
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
            
//laço e condição responsaveis pela saida dados de entrada já processados
            
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


