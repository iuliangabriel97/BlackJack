#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <process.h>
#include<string.h>

#define frunza 06
#define trefla 05
#define caro 04
#define inima 03
#define RESULTS "Blackjack.txt"

struct Player{
char name[255];
int suma_disponibila;};
Player x[20];
int nr_player=0;
void adauga_player(char s[],int cash)
{
  ifstream f("lista_player.txt")

}

int k,l,d,won,loss,bet,random_carte,dealer_total;
int cash = 500;
int player_total=0;
int carte_trefla();
int carte_caro();
int carte_inima();
int carte_frunza();
int randcarte();
int pariaza();
void meniu();
void rules();
void play();
void dealer();
void stay();
void cash_test();
void continua();
void fileresults();
bool pachet_trefla[14],pachet_inima[14],pachet_caro[14],pachet_frunza[14];


int main()
{
    meniu();
    printf("\n");
    printf("\n");
    system("pause");
}
void meniu()
{
    char alegere1;
    int alegere2;
    printf("\n                    Pregatit?");
    printf("\n                ----------------");
    printf("\n                      (Y/N)\n                        ");
    scanf("\n%c",&alegere1);
    while((alegere1!='Y') && (alegere1!='y') && (alegere1!='N') && (alegere1!='n'))
    {
        printf("\n");
        printf("Alegere incorecta.Alegeti Y pentru Da sau N pentru Nu\n");
        scanf("%c",&alegere1);
    }
    if((alegere1 == 'Y') || (alegere1 == 'y'))
    {
        system("cls");
        printf("\n1-START");
        printf("\n2-EXIT");
        printf("\nAleg: ");
        scanf("%d", &alegere2);
        if((alegere2<1) || (alegere2>3))
        {
            printf("\nAlegere incorecta\n");
            scanf("%d", &alegere2);
        }
        switch(alegere2)
        {
        case 1:
            system("cls");
            play();
            break;
        case 2:
            printf("\nLa revedere!");
            system("pause");
            exit(0);
            break;
        default:
            printf("\nInvalid Input");
        }
    }
    else if((alegere1 == 'N') || (alegere1 == 'n'))
    {
        printf("\nLa revedere!.");
        system("pause");
        exit(0);
    }
    return;
}
int carte_trefla()
{
    srand((unsigned) time(NULL));
    k=rand()%13+1;
    if(k<=9)
    {
        printf("-------\n");
        printf("|%c    |\n", trefla);
        printf("|  %d  |\n", k);
        printf("|    %c|\n", trefla);
        printf("-------\n");
    }
    if(k==10)
    {
        printf("-------\n");
        printf("|%c    |\n", trefla);
        printf("|  J  |\n");
        printf("|    %c|\n", trefla);
        printf("-------\n");
    }
    if(k==11)
    {
        printf("-------\n");
        printf("|%c    |\n", trefla);
        printf("|  A  |\n");
        printf("|    %c|\n", trefla);
        printf("-------\n");
        if(player_total<=10)
        {
            k=11;
        }
        else
        {
            k=1;
        }
    }
    if(k==12)
    {
        printf("-------\n");
        printf("|%c    |\n", trefla);
        printf("|  Q  |\n");
        printf("|    %c|\n", trefla);
        printf("-------\n");
        k=10;
    }
    if(k==13)
    {
        printf("-------\n");
        printf("|%c    |\n", trefla);
        printf("|  K  |\n");
        printf("|    %c|\n", trefla);
        printf("-------\n");
        k=10;
    }
    return k;
}
int carte_caro()
{
    srand((unsigned) time(NULL));
    k=rand()%13+1;
    if(k<=9)
    {
        printf("-------\n");
        printf("|%c    |\n", caro);
        printf("|  %d  |\n", k);
        printf("|    %c|\n", caro);
        printf("-------\n");
    }
    if(k==10)
    {
        printf("-------\n");
        printf("|%c    |\n", caro);
        printf("|  J  |\n");
        printf("|    %c|\n", caro);
        printf("-------\n");
    }
    if(k==11)
    {
        printf("-------\n");
        printf("|%c    |\n", caro);
        printf("|  A  |\n");
        printf("|    %c|\n", caro);
        printf("-------\n");
        if(player_total<=10)
        {
            k=11;
        }
        else
        {
            k=1;
        }
    }
    if(k==12)
    {
        printf("-------\n");
        printf("|%c    |\n", caro);
        printf("|  Q  |\n");
        printf("|    %c|\n", caro);
        printf("-------\n");
        k=10;
    }
    if(k==13)
    {
        printf("-------\n");
        printf("|%c    |\n", caro);
        printf("|  K  |\n");
        printf("|    %c|\n", caro);
        printf("-------\n");
        k=10;
    }
    return k;
}
int carte_inima()
{
    srand((unsigned) time(NULL));
    k=rand()%13+1;
    if(k<=9)
    {
        printf("-------\n");
        printf("|%c    |\n", inima);
        printf("|  %d  |\n", k);
        printf("|    %c|\n", inima);
        printf("-------\n");
    }
    if(k==10)
    {
        printf("-------\n");
        printf("|%c    |\n", inima);
        printf("|  J  |\n");
        printf("|    %c|\n", inima);
        printf("-------\n");
    }
    if(k==11)
    {
        printf("-------\n");
        printf("|%c    |\n", inima);
        printf("|  A  |\n");
        printf("|    %c|\n", inima);
        printf("-------\n");
        if(player_total<=10)
        {
            k=11;
        }
        else
        {
            k=1;
        }
    }
    if(k==12)
    {
        printf("-------\n");
        printf("|%c    |\n", inima);
        printf("|  Q  |\n");
        printf("|    %c|\n", inima);
        printf("-------\n");
        k=10; //Set carte value to 10
    }

    if(k==13)
    {
        printf("-------\n");
        printf("|%c    |\n", inima);
        printf("|  K  |\n");
        printf("|    %c|\n", inima);
        printf("-------\n");
        k=10;
    }
    return k;
}

int carte_frunza()
{
    srand((unsigned) time(NULL));
    k=rand()%13+1;
    if(k<=9)
    {
        printf("-------\n");
        printf("|%c    |\n", frunza);
        printf("|  %d  |\n", k);
        printf("|    %c|\n", frunza);
        printf("-------\n");
    }
    if(k==10)
    {
        printf("-------\n");
        printf("|%c    |\n", frunza);
        printf("|  J  |\n");
        printf("|    %c|\n", frunza);
        printf("-------\n");
    }
    if(k==11)
    {
        printf("-------\n");
        printf("|%c    |\n", frunza);
        printf("|  A  |\n");
        printf("|    %c|\n", frunza);
        printf("-------\n");
        if(player_total<=10)
        {
            k=11;
        }
        else
        {
            k=1;
        }
    }
    if(k==12)
    {
        printf("-------\n");
        printf("|%c    |\n", frunza);
        printf("|  Q  |\n");
        printf("|    %c|\n", frunza);
        printf("-------\n");
        k=10;
    }
    if(k==13)
    {
        printf("-------\n");
        printf("|%c    |\n", frunza);
        printf("|  K  |\n");
        printf("|    %c|\n", frunza);
        printf("-------\n");
        k=10;
    }
    return k;
}
int randcarte()
{
    srand((unsigned) time(NULL));
    random_carte = rand()%4+1;
    if(random_carte==1)
    {
        carte_trefla();
        l=k;
    }
    if(random_carte==2)
    {
        carte_caro();
        l=k;
    }
    if(random_carte==3)
    {
        carte_inima();
        l=k;
    }
    if(random_carte==4)
    {
        carte_frunza();
        l=k;
    }
    return l;
}