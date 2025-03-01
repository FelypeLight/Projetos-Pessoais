#include <stdio.h>
#define ex12
#ifdef ex01
    int main(){
        int num1, num2, num3, num4, res=num4*num4+num3*num3+num2*num2+num1*num1, contador=0;

        do{
            printf("Escreva um numero maior que 10 e menor que 25\n");
            scanf("%d", &num1);


        }while(num1<=10 || num1>=25);
        do{
            printf("Escreva um numero maior ou igueal a zero\n");
            scanf("%d", &num2);
        }while(num2<=0 );

        num3=num1+num2;
        num4=num1*num2*num3;


        if(res>50000){
            printf("%d", &res);
        }else{
             do{
        do{
            printf("2.Escreva um numero maior que 10 e menor que 25\n");
            scanf("%d", &num1);


        }while(num1<10 || num1>25);
        do{
            printf("2.Escreva um numero maior ou igueal a zero\n");
            scanf("%d", &num2);
        }while(num2<=0 && res<50000);
        }while(res<50000);
        }

    }
#endif // ex00

#ifdef ex02
    int main(){
        int vetora[15];
        int cont;
        for(int cont=0;cont<15;cont++){
            printf("Digite um numero:\n");
            scanf("%d", &vetora[cont]);
        }
        printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", vetora[0], vetora[1], vetora[2], vetora[3], vetora[4], vetora[5], vetora[6], vetora[7], vetora[8], vetora[9], vetora[10], vetora[11], vetora[12], vetora[13], vetora[14]);
    }
#endif // ex02

#ifdef ex03
    int main(){
        int vetora[12];
        int cont;
            for(cont=0;cont<12;cont++){
                printf("Digite um numero\n");
                scanf("%d", &vetora[cont]);
                if(vetora[cont]<0){
                    do{
                        printf("2.Digite um numero positivo\n");
                        scanf("%d", &vetora[cont]);
                    }while(vetora[cont]<0);
            }
            }
                for(cont=0;cont<12;cont++){
                    if(vetora[cont]>121){
                    printf("%d", vetora[cont]);
                    }else{
                    do{
                        printf("Preencha novamente\n");
                        scanf("%d", &vetora[cont]);
                    }while(vetora[cont]<121);
                    }
                }
                for(cont=0;cont<12;cont++){
                    printf("%d", vetora[cont]);
                    }
    }
#endif // ex03

#ifdef ex04
int main(){
    int vetora[8];
    int vetorb[8];
    int cont;
    for(cont=0;cont<8;cont++){
        printf("preencha com um numero\n");
        scanf("%d", &vetora[cont]);
    }
    for(cont=0;cont<8;cont++){
        int mult=vetora[cont]*3;
        printf("o numero multiplicado e%d\n", mult);
    }
}
#endif // ex04

#ifdef ex05
int main(){
    int vetora[6];
    int cont;
    for(cont=0;cont<6;cont++){
            printf("Digite um numero\n");
            scanf("%d", &vetora[cont]);
    if(vetora[cont]<0){
        vetora[cont]=vetora[cont]*vetora[cont];
    }else{
        while(vetora[cont]>0 || vetora[cont]==0){
            printf("Digite um numero negativo\n");
            scanf("%d", &vetora[cont]);
        }
        vetora[cont]=vetora[cont]*vetora[cont];
    }
    }
    int soma=vetora[0]+vetora[1]+vetora[2]+vetora[3]+vetora[4]+vetora[5];
    if(soma>1000){
        printf("%d", soma);
    }else{
        printf("Erro\n");
    }
}

#endif // ex05

#ifdef ex06
    int main(){
        int vetora[10];
        int maior=vetora[0]=0;
        int cont;
        int pos=1;
        for(cont=0;cont<10;cont++){
            printf("Digite um numero\n");
            scanf("%d", &vetora[cont]);
            if(vetora[cont]>maior){
                maior=vetora[cont];
            }
        }
        for(cont=0;cont<10;cont++){
            printf("Conteudo vetor:%d\n", vetora[cont]);
        }
        for(cont=0;cont<10;cont++){
            if(vetora[cont]==maior){
                pos++;
                printf("O maior apareceu nesta posição:%d\n", cont);
            }
        }
        pos=pos-1;
        printf("A quantidade de vezes que apareceu no vetor foi:%d\n", pos);
    }
#endif // ex06

#ifdef ex07
int main(){
    int vetora[15];
    int cont;
    int resposta=1;
    int contador=1;
    for(cont=0;resposta==1;cont++){

            printf("Digite um numero\n");
            scanf("%d", &vetora[cont]);
            printf("Deseja continuar digitando?");
            scanf("%d", &resposta);
            switch(resposta){
                    case 1:{
                    cont=cont+1;
                    printf("Digite um numero\n");
                    scanf("%d", &vetora[cont]);
                    break;
                    }
                    case 2:{
                    do{
                    printf("%d\n", vetora[cont]);
                    contador++;
                    }while(contador<cont);
                    break;
                }
            }
    }

}
#endif // ex07

#ifdef ex08
    int main(){
        int vetora[20];
        int cont;
        int result=1;
        int contador=0;
        for(cont=0;cont<=4 || result==1;cont++){
                printf("Deseja digitar um numero?\n");
                scanf("%d", &result);
                if(result==1){
                    do{
                    printf("Digite um numero\n");
                    scanf("%d", &vetora[cont]);
                    contador++;
                    cont++;
                    }while(contador<4);

                }if(result==2){
                    for(cont=0;cont<contador;cont++){
                        printf("%d\n", vetora[cont]);
                    }
                    printf("Esse é o vetor b:\n");
                    contador=contador-1;
                    for(cont=contador;cont>=0;cont--){
                        printf("%d\n", vetora[cont]);
                    }
        }
        }
        }
#endif // ex08

#ifdef ex09
int main(){
    int vetora[5], vetorb[5], vetorc[5];
    int vetord[15];
    int cont, contador=0;


        for(cont=0;cont<5;cont++){
            printf("Digite um numero a\n");
            scanf("%d", vetora[cont]);
            vetord[contador]=vetora[cont];
            contador++;
        }

        for(cont=6;cont<10;cont++){
            contador=6;
            printf("Digite um numero b\n");
            scanf("%d", vetorb[cont]);
            vetord[contador]=vetorb[cont];
            contador++;
        }

        for(cont=11;cont<15;cont++){
            contador=11;
            printf("Digite um numero a\n");
            scanf("%d", vetorc[cont]);
            vetord[contador]=vetorc[cont];
            contador++;
        }

        for(contador=0;contador<15;cont++){
        printf("%d", vetord[contador]);

        }



    }

#endif // ex09

#ifdef ex10
int main(){
int cont, contador, vetora[10], vetorb[10];

for(cont=0;cont<10;cont++){
    do{
        printf("Digite um numero\n");
        scanf("%d\n", &vetora[cont]);
    }while(vetora[cont]<0);
    vetorb[cont]=vetora[cont]/2;
}
for(cont=0;cont<10;cont++){
    if(vetora[cont]>4){
        printf("A posicao do numero maior que quatro no Vetor A e:%d\n", cont);
    }else{
        printf("Vetor A\n");
        printf("%d\n", vetora[cont]);
    }
}
for(cont=0;cont<10;cont++){
    if(vetora[cont]>4){
        printf("A posicao do numero maior que quatro no Vetor B e:%d\n", cont);
    }else{
        printf("Vetor B\n");
        printf("%d\n", vetorb[cont]);
    }

}

}
#endif // ex10

#ifdef ex11
int main(){
    int tempmmes[12];
    int i, maior=tempmmes[0], menor=tempmmes[0];
    for(i=0;i<=11;i++){
        printf("Digite a temperatura media do mes %d\n", i);
        scanf("%d", &tempmmes[i]);
    }
    for(i=0;i<=11;i++){
        if(tempmmes[i]>maior){
            maior = tempmmes[i];
            printf("O maior e: %d\n", maior);
        }
        if(tempmmes[i]<menor){
            menor = tempmmes[i];
            printf("O menor e: %d\n", menor);
        }
    }
    int media=(tempmmes[0]+tempmmes[1]+tempmmes[2]+tempmmes[3]+tempmmes[4]+tempmmes[5]+tempmmes[6]+tempmmes[7]+tempmmes[8]+tempmmes[9]+tempmmes[10]+tempmmes[11])/10;
    printf("%d", media);
}
#endif // ex11

#ifdef ex12
int main(){

}
#endif // ex12

#ifdef ex9
    main(){
        int vetora[10], vetorb[10];
        int i;
        for(i=0;i<=10;i++){
            printf("Digite um numero\n");
            scanf("%d", &vetora[i]);
            vetorb[i]=vetora[i]/2;
        }
        printf("Vetor A\n");
        for(i=0;i<=10;i++){
            if(vetora[i]>4){
                printf("Maior que 4 no vetor A e na posicao %d o valor %d\n", i, vetora[i]);
            }else{
                printf("%d\n", vetora[i]);
            }
        }
        printf("Vetor B\n");
        for(i=0;i<=10;i++){
            if(vetorb[i]>4){
                printf("Maior que 4 no vetor B e na posicao %d o valor %d\n", i, vetorb[i]);
            }else{
                printf("%d\n", vetorb[i]);
            }
        }
    }
#endif // ex13
