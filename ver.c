//Piazza Samuele
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int main(){
    int p;
    p=fork();
    if(p==0){//figlio
        int pidFiglio=getpid(),pidPadre=getppid();
        printf("\nIl figlio ha un pid di %d",pidFiglio);
        printf("\tIl padre ha un pid di %d",pidPadre);
        
        float b,a,area;
        printf("\nInserisci la base: ");
        
        scanf("%f",&b);
        sleep(3);
        
        printf("\nInserisci l'altezza: ");
        scanf("%f",&a);
        sleep(3);
        area=b*a;
        printf("\nL'area vale: %.2f",area);
    }
    else{//padre
        int pidFiglio=getpid(),pidPadre=getppid();
        sleep(1);
        printf("\nIl figlio ha un pid di %d",p);
        printf("\nIl padre ha un pid di %d",pidFiglio);
        printf("\tIl nonno ha un pid di %d",pidPadre);
        sleep(15);
        float media=(3+4+5)/3;
        printf("\nMedia %.2f",media);
    }


    return 0;
}