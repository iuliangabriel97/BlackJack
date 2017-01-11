#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <process.h>

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
