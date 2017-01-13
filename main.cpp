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
void play()
{
    int p=0;
    int i=1;
    char alegere3;
    cash = cash;
    cash_test();
    printf("\nCash: $%d\n",cash);
    randcarte();
    player_total = p + l;
    p = player_total;
    printf("\nTotal player: %d\n", p);
    dealer();
    pariaza();
    while(i<=21)
    {
        if(p==21)
        {
            printf("\nAi castigat!\n");
            won = won+1;
            cash = cash+bet;
            printf("\nAi %d victorii si  %d infrangeri.\n", won, loss);
            dealer_total=0;
            continua();
        }
        if(p>21)
        {
            printf("\nAi depasit 21.\n");
            loss = loss+1;
            cash = cash - bet;
            printf("\nAi %d victorii si  %d infrangeri.\n", won, loss);
            dealer_total=0;
            continua();
        }
        if(p<=21)
        {
            printf("\n\nHit(h) / Stay(s)");
            scanf("%c", &alegere3);
            while((alegere3!='H') && (alegere3!='h') && (alegere3!='S') && (alegere3!='s'))
            {
                printf("\n");
                scanf("%c",&alegere3);
                system("cls");

            }
            if((alegere3=='H') || (alegere3=='h'))
            {
                randcarte();
                player_total = p + l;
                p = player_total;
                printf("\nTotal player: %d\n", p);
                dealer();
                if(dealer_total==21)
                {
                    printf("\nAi pierdut!\n");
                    loss = loss+1;
                    cash = cash - bet;
                    printf("\nAi %d victorii si  %d infrangeri.\n", won, loss);
                    dealer_total=0;
                    continua();
                }
                if(dealer_total>21)
                {
                    printf("\nAi castigat!\n");
                    won = won+1;
                    cash = cash+bet;
                    printf("\nAi %d victorii si  %d infrangeri.\n", won, loss);
                    dealer_total=0;
                    continua();
                }
            }
            if((alegere3=='S') || (alegere3=='s'))
            {
                printf("\n->Stay<-\n Total player: %d", player_total);
                stay();
            }
        }
        i++;
    }
}
void dealer()
{
    int z;
    if(dealer_total<17)
    {
        srand((unsigned) time(NULL) + 1);
        z=rand()%13+1;
        printf("\nDealerul trage %d", z);
        if(z<=10)
        {
            d=z;
        }
        if(z>11)
        {
            d=10;
        }
        if(z==11)
        {
            if(dealer_total<=10)
            {
                d=11;
            }

            else
            {
                d=1;
            }
        }
        dealer_total = dealer_total + d;
        printf("\nTotal dealer: %d", dealer_total);
    }
}
void stay()
{
    dealer();
    if(dealer_total>=17)
    {
        if(dealer_total>21)
        {
            printf("\nAi castigat!\n");
            printf("\nTotal dealer: %d", dealer_total);
            won = won+1;
            cash = cash+bet;
            printf("\nAi %d victorii si  %d infrangeri.\n", won, loss);
            dealer_total=0;
            continua();
        }
        if(player_total>=dealer_total)
        {
            printf("\nAi castigat!\n");
            printf("\nTotal dealer: %d", dealer_total);
            won = won+1;
            cash = cash+bet;
            printf("\nAi %d victorii si  %d infrangeri.\n", won, loss);
            dealer_total=0;
            continua();
        }
        if(player_total<dealer_total)
        {
            printf("\nAi pierdut!\n");
            printf("\nTotal dealer: %d", dealer_total);
            loss = loss+1;
            cash = cash - bet;
            printf("\nAi %d victorii si  %d infrangeri.\n", won, loss);
            dealer_total=0;
            continua();
        }
    }
    else
    {
        stay();
    }

}

void cash_test()
{
    if (cash <= 0)
    {
        printf("Game Over");
        cash = 500;
        continua();
    }
}

int pariaza()
{
    printf("\n\nBet: $");
    scanf("%d", &bet);
    if (bet > cash)
    {
        printf("\nNu ai suficienti bani.");
        printf("\nBet: ");
        scanf("%d", &bet);
        return bet;
    }
    else return bet;
}

void continua()
{
    char alegere1;

    printf("\nReluati?");
    printf("\nY/N?\n");
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
        play();
    }

    else if((alegere1 == 'N') || (alegere1 == 'n'))
    {
        fileresults();
        printf("\nLa revedere!\n\n");
        system("pause");
        exit(0);
    }
    return;
}
void fileresults()
{
    FILE *fpresults;
    fpresults = fopen(RESULTS, "w");
    if(fpresults == NULL)
    {
        printf("\nError: File Missing\n");
        system("pause");
        exit(1);
    }
    else
    {
        fprintf(fpresults,"\n\t RESULTS");
        fprintf(fpresults,"\n\t---------\n");
        fprintf(fpresults,"\nAi castigat de %d ori\n", won);
        fprintf(fpresults,"\nAi pierdut de %d ori\n", loss);
    }
    fclose(fpresults);
    return;
}
