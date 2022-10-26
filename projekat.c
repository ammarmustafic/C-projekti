//glavni kod
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <windows.h>
int get_first_weekDay(int year)
{
    int day;
    day = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;
    return day;
}
int main(){
    system("cls");
    int a,b,c,d,e,bela,k,k1,k2,k3,k4,k5,k6;
    int pokusaj = 4;
    int pogodiBroj;
    int broj;
    int jedinica;
    int sifra = 1234;
    int sifra1;
    int odabir,odabir2;
    char nazad [1000];
    int lozinka;
    		system("CLS");
    		sifra:
		    printf("\t\t\t\t\t _______________________\n");
		    printf("\t\t\t\t\t(  --      (O)       -- )\n");
		    printf("\t\t\t\t\t(_______________________)\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t|      1    2    3      |\n");
		    printf("\t\t\t\t\t|      4    5    6      |\n");
		    printf("\t\t\t\t\t|      7    8    9      |\n");
		    printf("\t\t\t\t\t|      #    0    +      |\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t|     Unesite sifru:    |\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t(___    ___( )___    ___)\n"); 
		    printf("\t\t\t\t\t(_______________________)\n\n"); 
		    printf("\t\t\t\t\t\t  ");
		    scanf("%i",&sifra1);
    
    
    if (sifra1 == sifra){
    	system("CLS");
		    printf("\t\t\t\t\t _______________________\n");
		    printf("\t\t\t\t\t(  --      (O)       -- )\n");
		    printf("\t\t\t\t\t(_______________________)\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t|    Tacno ste uneli    |\n");
		    printf("\t\t\t\t\t|         sifru.        |\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t(___    ___( )___    ___)\n"); 
		    printf("\t\t\t\t\t(_______________________)\n"); 
	    Sleep(450);
	    odabir:
	    system("CLS");
		    printf("\t\t\t\t\tIzaberite sta zelite od navedenog:\n");
		    printf("\t\t\t\t\t _______________________\n");
		    printf("\t\t\t\t\t(  --      (O)       -- )\n");
		    printf("\t\t\t\t\t(_______________________)\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t| 1)Igrice    2)Mail    |\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t| 3)Wiki      4)Phone   |\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t| 5)Settings  6)Beleske |\n");
			printf("\t\t\t\t\t|                       |\n");	
		    printf("\t\t\t\t\t| 7)Amazon    8)Atlas   |\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t| 9)Vreme    10)Kalendar|\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t(___    ___( )___    ___)\n"); 
		    printf("\t\t\t\t\t(_______________________)\n"); 
	    printf("\t\t\t\t\t\t    ");
	    scanf("%d",&odabir);

		}
	    //igrice
	    
	    if(odabir == 1){
	    	system("CLS");
		    printf("\t\t\t\t\t _______________________\n");
		    printf("\t\t\t\t\t(  --      (O)       -- )\n");
		    printf("\t\t\t\t\t(_______________________)\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t| 1)Hangman    2)P.K.M  |\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t| 3)Guess num           |\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t| 4)Izbegni mine        |\n");
			printf("\t\t\t\t\t|                       |\n");	
		    printf("\t\t\t\t\t| 5)Back                |\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t(___    ___( )___    ___)\n"); 
		    printf("\t\t\t\t\t(_______________________)\n"); 
		    printf("\t\t\t\t\t\t    ");
		    scanf("%d",&odabir2);
		    // PAPIR KAMEN MAKAZE
		    if(odabir2 == 2){
		    	again:
		    	#define KAMEN 1
				#define PAPIR 2
				#define MAKAZE 3	
		    	system("cls");
 
 
    srand( time(NULL) );
    
    int player_throw = 0;
    int ai_throw = 0;
    bool draw = false;
    
    do
    {
      
        printf("Sta zelite da igrate.\n");
        printf("1. Kamen\n");
        printf("2. Papir\n");
        printf("3. Makaze\n");
        printf("Izaberite: ");
        scanf("%d", &player_throw);
      
        sleep(1);
      
      
        ai_throw = (rand() % 3) + 1;
      
    
        if (ai_throw == KAMEN)
            printf("\nAI je izabrao Kamen.\n");
        else if (ai_throw == PAPIR)
            printf("\nAI je izabrao Papir.\n");
        else if (ai_throw == MAKAZE)
            printf("\nAI je izabrao Makaze.\n");
      
        sleep(1);
        
        draw = false;
        if (player_throw == KAMEN && ai_throw == MAKAZE)
            printf("\nKAMEN pobedjuje MAKAZE. Pobedio si.\n\n");
        else if (player_throw == KAMEN && ai_throw == PAPIR)
            printf("\nPAPIR pobedjuje KAMEN. Izgubio si.\n\n");
        else if (player_throw == MAKAZE && ai_throw == PAPIR)
            printf("\nMAKAZE pobedjuje PAPIR. Pobedio si.\n\n");
        else if (player_throw == MAKAZE && ai_throw == KAMEN)
            printf("\nKAMEN pobedjuje MAKAZE. Izgubio si.\n\n");
        else if (player_throw == PAPIR && ai_throw == KAMEN)
            printf("\nPAPIR pobedjuje KAMEN. Pobedio si.\n\n");
        else if (player_throw == PAPIR && ai_throw == MAKAZE)
            printf("\nMAKAZE pobedjuje PAPIR. Izgubio si.\n\n");
        else
        {
            printf("\nJednako! Igraj ponovo.\n\n");
        draw = true;
        }
        
        sleep(1);
        
    } while (draw);
    
    printf("Da li zelite da se vratite nazad, ili da igrate ponovo?\nUnesite 'back' ako zelite da se vratite nazad, ili 'again' ako zelite da igrate ponovo.\n");
    scanf("%s",&nazad);
    if(strcmp(nazad,"back")== 0){
    	goto odabir;
	}
	if(strcmp(nazad,"again")== 0){
		goto again;
	}
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------//			
//	POGODI BROJ			
		if(odabir2 == 3){
			again2:
	system("cls");
    
   
 
    srand(time(NULL));
 
    broj = (rand() % 100);
    jedinica = broj % 10;
 
    while(pokusaj > 0)
    {
        sleep(1);
        printf("\n\nPogodite broj izmedju 1-99: ");
        
        scanf("%d", &pogodiBroj);
        sleep(1);
 
        if (pogodiBroj != broj)
        {
            pokusaj--;
            printf("\nNiste pogodili broj, imate jos: %d pokusaj/a; ", pokusaj);
            sleep(1);
            
        } else if (pogodiBroj == broj) 
        {
            printf("\nPogodili ste broj, broj je %d. ", broj);
            goto pogodibroj;
        }
 
        if (pokusaj == 2)
        {
            printf("\nhint: desetica tog broja je: %d; ", broj / 10);
            sleep(1);
        } else if (pokusaj == 1 && jedinica % 2 == 0)
        {
            sleep(1);
            printf("\nhint: jedinica tog broja je paran broj. \n");
        } else if (pokusaj == 1 && jedinica % 2 == 1) {
            sleep(1);
            printf("\nhint: jedinica tog broja je neparan broj. \n");
        }
 
        if (pokusaj == 0)
        {   
            
            printf("\nNemate vise pokusaja. ");
            printf("\nBroj je: %d.", broj);
            sleep(1);  
        }
        if(pogodiBroj >= 100)
        {
            sleep(1);
            printf("\n\n!!Error, broj je veci od limita, pokusaj vam se vraca!! \n");
            pokusaj++;
        } else if (pogodiBroj <= 0)
        {
            sleep(1);
            printf("\n\n!!Error, broj je manji od pocetnog broja, pokusaj vam se vraca!! \n");
            pokusaj++;
        }
    }
    pogodibroj:
    printf("\n");
    printf("\nDa li zelite da se vratite nazad, ili da igrate ponovo?\nUnesite 'Back' ako zelite da se vratite nazad, ili 'Again' ako zelite da igrate ponovo.\n");
    scanf("%s",&nazad);
    if(strcmp(nazad,"Back")== 0){
    	goto odabir;
	}
	if(strcmp(nazad,"Again")== 0){
		goto again2;
	}

		}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
	//IZBEGNI MINE
	else if(odabir2 == 4){
		system("CLS");
		int n,d,s,t,r,e;
 
	    printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|  1  |   2   |  3  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  4  |   5   |  6  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  7  |   8   |  9  |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
 
 
 
 
	printf("\n\t unesite broj = ");
	scanf("%d", &n);
	if (n == 1 || n == 2 || n == 3 || n == 4 || n == 5 || n == 6 || n == 7 || n == 8 || n == 9 ){
 
switch(n){
 
 
	case 1:
			system("CLS");
		printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|     |   2   |  3  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  4  |   5   |  6  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  7  |   8   |  9  |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
 
	printf("unesite broj = ");
	scanf("%d", &t);
 
 
 
	if(t==3){
			system("CLS");
 
		printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|     |   2   |     |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  4  |   5   |  6  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  7  |   8   |  9  |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    printf("unesite broj = ");
	scanf("%d", &e);
 
	    if(e==5||e==7||e==9){
	    		system("CLS");
	    	printf("\n\n\t\t\t\t\t USPESNO STE PRESKOCILI MINE , POBEDA");
	    printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|     |   *   |     |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  *  |       |  *  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|     |   *   |     |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    exit(0);
	    
		}else{
				system("CLS");
			printf("\n\n\t\t\t\t\t GAME OVER , nagazili ste na minu");
			exit(0);
		}
 
	}
	if(t==5){
			system("CLS");
		printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|     |   2   |  3  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  4  |       |  6  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  7  |   8   |  9  |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    printf("unesite broj = ");
	scanf("%d", &e);
 
	    if(e==3||e==7||e==9){
	    		system("CLS");
	    	printf("\n\n\t\t\t\t\t USPESNO STE PRESKOCILI MINE , POBEDA");
	    printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|     |   *   |     |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  *  |       |  *  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|     |   *   |     |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    exit(0);
		}else{
				system("CLS");
			printf("\n\n\t\t\t\t\t GAME OVER , nagazili ste na minu");
			exit(0);
		}
	}
	if(t==7){
			system("CLS");
		printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|     |   2   |  3  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  4  |   5   |  6  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|     |   8   |  9  |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    printf("unesite broj = ");
	scanf("%d", &e);
 
	    if(e==5||e==3||e==9){
	    		system("CLS");
	    	printf("\n\n\t\t\t\t\t USPESNO STE PRESKOCILI MINE , POBEDA");
	    printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|     |   *   |     |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  *  |       |  *  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|     |   *   |     |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    exit(0);
		}else{
				system("CLS");
			printf("\n\n\t\t\t\t\t GAME OVER , nagazili ste na minu");
			exit(0);
		}
	}
	if(t==9){
 
			system("CLS");
 
		printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|     |   2   |  3  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  4  |   5   |  6  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  7  |   8   |     |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    printf("unesite broj = ");
	scanf("%d", &e);
 
	    if(e==3||e==5||e==7){
	    		system("CLS");
	    	printf("\n\n\t\t\t\t\t USPESNO STE PRESKOCILI MINE , POBEDA");
	    printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|     |   *   |     |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  *  |       |  *  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|     |   *   |     |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    exit(0);
		}else{
				system("CLS");
			printf("\n\n\t\t\t\t\t GAME OVER , nagazili ste na minu");
			exit(0);
		}
	}
 
	break;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
	case 3:
			system("CLS");
		printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|  1  |   2   |     |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  4  |   5   |  6  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  7  |   8   |  9  |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
 
	printf("unesite broj = ");
	scanf("%d", &t);
 
	if(t==1){
			system("CLS");
		printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|     |   2   |     |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  4  |   5   |  6  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  7  |   8   |  9  |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    printf("unesite broj = ");
	scanf("%d", &e);
 
	    if(e==5||e==7||e==9){
	    		system("CLS");
	    	printf("\n\n\t\t\t\t\t USPESNO STE PRESKOCILI MINE , POBEDA");
	    printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|     |   *   |     |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  *  |       |  *  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|     |   *   |     |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    exit(0);
		}else{
				system("CLS");
			printf("\n\n\t\t\t\t\t GAME OVER , nagazili ste na minu");
			exit(0);
		}
 
	}
	if(t==5){
			system("CLS");
		printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|   1 |   2   |     |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  4  |       |  6  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  7  |   8   |  9  |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    printf("unesite broj = ");
	scanf("%d", &e);
 
	    if(e==1||e==7||e==9){
	    		system("CLS");
	    	printf("\n\n\t\t\t\t\t USPESNO STE PRESKOCILI MINE , POBEDA");
	    printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|     |   *   |     |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  *  |       |  *  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|     |   *   |     |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    exit(0);
		}else{
				system("CLS");
			printf("\n\n\t\t\t\t\t GAME OVER , nagazili ste na minu");
			exit(0);
		}
	}
	if(t==7){
			system("CLS");
		printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|  1  |   2   |     |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  4  |   5   |  6  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|     |   8   |  9  |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    printf("unesite broj = ");
	scanf("%d", &e);
 
	    if(e==5||e==1||e==9){
	    		system("CLS");
	    	printf("\n\n\t\t\t\t\t USPESNO STE PRESKOCILI MINE , POBEDA");
	    printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|     |   *   |     |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  *  |       |  *  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|     |   *   |     |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    exit(0);
		}else{
				system("CLS");
			printf("\n\n\t\t\t\t\t GAME OVER , nagazili ste na minu");
			exit(0);
		}
	}
	if(t==9){
			system("CLS");
		printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|  1  |   2   |     |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  4  |   5   |  6  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  7  |   8   |     |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    printf("unesite broj = ");
	scanf("%d", &e);
 
	    if(e==1||e==5||e==7){
	    		system("CLS");
	    	printf("\n\n\t\t\t\t\t USPESNO STE PRESKOCILI MINE , POBEDA");
	    printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|     |   *   |     |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  *  |       |  *  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|     |   *   |     |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    exit(0);
		}else{
				system("CLS");
			printf("\n\n\t\t\t\t\t GAME OVER , nagazili ste na minu");
			exit(0);
		}
	}
 
	break;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
	case 5:
			system("CLS");
		printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|  1  |   2   |  3  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  4  |       |  6  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  7  |   8   |  9  |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
 
	printf("unesite broj = ");
	scanf("%d", &t);
 
 
	if(t==3){
			system("CLS");
		printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|  1  |   2   |     |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  4  |       |  6  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  7  |   8   |  9  |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    printf("unesite broj = ");
	scanf("%d", &e);
 
	    if(e==1||e==7||e==9){
	    		system("CLS");
	    	printf("\n\n\t\t\t\t\t USPESNO STE PRESKOCILI MINE , POBEDA");
	    printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|     |   *   |     |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  *  |       |  *  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|     |   *   |     |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    exit(0);
		}else{
				system("CLS");
			printf("\n\n\t\t\t\t\t GAME OVER , nagazili ste na minu");
			exit(0);
		}
 
	}
	if(t==1){
			system("CLS");
		printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|     |   2   |  3  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  4  |       |  6  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  7  |   8   |  9  |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    printf("unesite broj = ");
	scanf("%d", &e);
 
	    if(e==3||e==7||e==9){
	    		system("CLS");
	    	printf("\n\n\t\t\t\t\t USPESNO STE PRESKOCILI MINE , POBEDA");
	    printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|     |   *   |     |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  *  |       |  *  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|     |   *   |     |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    exit(0);
		}else{
				system("CLS");
			printf("\n\n\t\t\t\t\t GAME OVER , nagazili ste na minu");
			exit(0);
		}
	}
	if(t==7){
			system("CLS");
		printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|  1  |   2   |  3  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  4  |       |  6  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|     |   8   |  9  |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    printf("unesite broj = ");
	scanf("%d", &e);
 
	    if(e==1||e==3||e==9){
	    		system("CLS");
	    	printf("\n\n\t\t\t\t\t USPESNO STE PRESKOCILI MINE , POBEDA");
	    printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|     |   *   |     |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  *  |       |  *  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|     |   *   |     |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    exit(0);
		}else{
				system("CLS");
			printf("\n\n\t\t\t\t\t GAME OVER , nagazili ste na minu");
			exit(0);
		}
	}
	if(t==9){
			system("CLS");
		printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|  1  |   2   |  3  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  4  |       |  6  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  7  |   8   |     |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    printf("unesite broj = ");
	scanf("%d", &e);
 
	    if(e==3||e==1||e==7){
	    		system("CLS");
	    	printf("\n\n\t\t\t\t\t USPESNO STE PRESKOCILI MINE , POBEDA");
	    printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|     |   *   |     |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  *  |       |  *  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|     |   *   |     |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    exit(0);
		}else{
				system("CLS");
			printf("\n\n\t\t\t\t\t GAME OVER , nagazili ste na minu");
			exit(0);
		}
	}
 
	break;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
	case 7:
			system("CLS");
		printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|  1  |   2   |  3  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  4  |   5   |  6  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|     |   8   |  9  |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
 
	printf("unesite broj = ");
	scanf("%d", &t);
 
	if(t==3){
			system("CLS");
		printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|  1  |   2   |     |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  4  |   5   |  6  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|     |   8   |  9  |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    printf("unesite broj = ");
	scanf("%d", &e);
 
	    if(e==5||e==1||e==9){
	    		system("CLS");
	    	printf("\n\n\t\t\t\t\t USPESNO STE PRESKOCILI MINE , POBEDA");
	    printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|     |   *   |     |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  *  |       |  *  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|     |   *   |     |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    exit(0);
		}else{
				system("CLS");
			printf("\n\n\t\t\t\t\t GAME OVER , nagazili ste na minu");
			exit(0);
		}
 
	}
	if(t==5){
			system("CLS");
		printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|  1  |   2   |  3  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  4  |       |  6  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|     |   8   |  9  |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    printf("unesite broj = ");
	scanf("%d", &e);
 
	    if(e==3||e==1||e==9){
	    		system("CLS");
	    	printf("\n\n\t\t\t\t\t USPESNO STE PRESKOCILI MINE , POBEDA");
	   	printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|     |   *   |     |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  *  |       |  *  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|     |   *   |     |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    exit(0);
		}else{
				system("CLS");
			printf("\n\n\t\t\t\t\t GAME OVER , nagazili ste na minu");
			exit(0);
		}
	}
	if(t==1){
			system("CLS");
		printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|     |   2   |  3  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  4  |   5   |  6  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|     |   8   |  9  |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    printf("unesite broj = ");
	scanf("%d", &e);
 
	    if(e==5||e==3||e==9){
	    		system("CLS");
	    	printf("\n\n\t\t\t\t\t USPESNO STE PRESKOCILI MINE , POBEDA");
	    printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|     |   *   |     |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  *  |       |  *  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|     |   *   |     |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    exit(0);
		}else{
				system("CLS");
			printf("\n\n\t\t\t\t\t GAME OVER , nagazili ste na minu");
			exit(0);
		}
	}
	if(t==9){
			system("CLS");
		printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|  1  |   2   |  3  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  4  |   5   |  6  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|     |   8   |     |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    printf("unesite broj = ");
	scanf("%d", &e);
 
	    if(e==3||e==5||e==1){
	    		system("CLS");
	    	printf("\n\n\t\t\t\t\t USPESNO STE PRESKOCILI MINE , POBEDA");
	    printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|     |   *   |     |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  *  |       |  *  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|     |   *   |     |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    exit(0);
		}else{
				system("CLS");
			printf("\n\n\t\t\t\t\t GAME OVER , nagazili ste na minu");
			exit(0);
		}
	}
 
	break;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
	case 9:
			system("CLS");
		printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|  1  |   2   |  3  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  4  |   5   |  6  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  7  |   8   |     |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
 
	printf("unesite broj = ");
	scanf("%d", &t);
 
	if(t==3){
			system("CLS");
		printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|  1  |   2   |     |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  4  |   5   |  6  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  7  |   8   |     |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    printf("unesite broj = ");
	scanf("%d", &e);
 
	    if(e==5||e==7||e==1){
	    		system("CLS");
	    	printf("\n\n\t\t\t\t\t USPESNO STE PRESKOCILI MINE , POBEDA");
	    printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|     |   *   |     |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  *  |       |  *  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|     |   *   |     |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    exit(0);
		}else{
				system("CLS");
			printf("\n\n\t\t\t\t\t GAME OVER , nagazili ste na minu");
			exit(0);
		}
 
	}
	if(t==5){
			system("CLS");
		printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|  1  |   2   |  3  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  4  |       |  6  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  7  |   8   |     |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    printf("unesite broj = ");
	scanf("%d", &e);
 
	    if(e==3||e==7||e==1){
	    		system("CLS");
	    printf("\n\n\t\t\t\t\tUSPESNO STE PRESKOCILI MINE , POBEDA");
	    printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|     |   *   |     |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  *  |       |  *  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|     |   *   |     |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    exit(0);
		}else{
				system("CLS");
			printf("\n\n\t\t\t\t\t GAME OVER , nagazili ste na minu");
			exit(0);
		}
	}
	if(t==7){
			system("CLS");
		printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|  1  |   2   |  3  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  4  |   5   |  6  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|     |   8   |     |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    printf("unesite broj = ");
	scanf("%d", &e);
 
	    if(e==5||e==3||e==1){
	    		system("CLS");
	    	printf("\n\n\t\t\t\t\t USPESNO STE PRESKOCILI MINE , POBEDA");
 
		printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|     |   *   |     |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  *  |       |  *  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|     |   *   |     |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    exit(0);
		}else{
				system("CLS");
			printf("\n\n\t\t\t\t\t GAME OVER , nagazili ste na minu");
			exit(0);
		}
	}
	if(t==1){
 
			system("CLS");
 
		printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|     |   2   |  3  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  4  |   5   |  6  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  7  |   8   |     |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    printf("unesite broj = ");
	scanf("%d", &e);
 
	    if(e==3||e==5||e==7){
	    		system("CLS");
	    	printf("\n\n\t\t\t\t\t USPESNO STE PRESKOCILI MINE , POBEDA");
	    printf("\n\t\t\t\t\t ___________________");
	    printf("\n\t\t\t\t\t|     |       |     |");
     	printf("\n\t\t\t\t\t|     |   *   |     |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|  *  |       |  *  |");
		printf("\n\t\t\t\t\t|_____|_______|_____|");
		printf("\n\t\t\t\t\t|     |       |     |");
		printf("\n\t\t\t\t\t|     |   *   |     |");
	    printf("\n\t\t\t\t\t|_____|_______|_____|");
	    exit(0);
		}else{
				system("CLS");
			printf("\n\n\t\t\t\t\t GAME OVER , nagazili ste na minu");
			exit(0);
		}
 
 
	}
 
	break;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
	case 2:
		system("CLS");
	printf("\n GAME OVER , nagazili ste na minu");
	printf("\n\t\t\t\t\t ___________________");
	printf("\n\t\t\t\t\t|     |       |     |");
    printf("\n\t\t\t\t\t|     |   *   |     |");
	printf("\n\t\t\t\t\t|_____|_______|_____|");
	printf("\n\t\t\t\t\t|     |       |     |");
	printf("\n\t\t\t\t\t|  *  |       |  *  |");
	printf("\n\t\t\t\t\t|_____|_______|_____|");
	printf("\n\t\t\t\t\t|     |       |     |");
	printf("\n\t\t\t\t\t|     |   *   |     |");
	printf("\n\t\t\t\t\t|_____|_______|_____|");
	exit(0);
	break;
 
	case 4:
			system("CLS");
	printf("\n GAME OVER , nagazili ste na minu");
	printf("\n\t\t\t\t\t ___________________");
	printf("\n\t\t\t\t\t|     |       |     |");
    printf("\n\t\t\t\t\t|     |   *   |     |");
	printf("\n\t\t\t\t\t|_____|_______|_____|");
	printf("\n\t\t\t\t\t|     |       |     |");
	printf("\n\t\t\t\t\t|  *  |       |  *  |");
	printf("\n\t\t\t\t\t|_____|_______|_____|");
	printf("\n\t\t\t\t\t|     |       |     |");
	printf("\n\t\t\t\t\t|     |   *   |     |");
    printf("\n\t\t\t\t\t|_____|_______|_____|");
    exit(0);
	break;
 
 
 
	case 6:
			system("CLS");
	printf("\n GAME OVER , nagazili ste na minu");
	printf("\n\t\t\t\t\t ___________________");
	printf("\n\t\t\t\t\t|     |       |     |");
    printf("\n\t\t\t\t\t|     |   *   |     |");
	printf("\n\t\t\t\t\t|_____|_______|_____|");
	printf("\n\t\t\t\t\t|     |       |     |");
	printf("\n\t\t\t\t\t|  *  |       |  *  |");
	printf("\n\t\t\t\t\t|_____|_______|_____|");
	printf("\n\t\t\t\t\t|     |       |     |");
	printf("\n\t\t\t\t\t|     |   *   |     |");
	printf("\n\t\t\t\t\t|_____|_______|_____|");
	exit(0);
	break;
 
 
 
	case 8:
			system("CLS");
	printf("\n GAME OVER , nagazili ste na minu");
	printf("\n\t\t\t\t\t ___________________");
	printf("\n\t\t\t\t\t|     |       |     |");
    printf("\n\t\t\t\t\t|     |   *   |     |");
	printf("\n\t\t\t\t\t|_____|_______|_____|");
	printf("\n\t\t\t\t\t|     |       |     |");
	printf("\n\t\t\t\t\t|  *  |       |  *  |");
	printf("\n\t\t\t\t\t|_____|_______|_____|");
	printf("\n\t\t\t\t\t|     |       |     |");
	printf("\n\t\t\t\t\t|     |   *   |     |");
	printf("\n\t\t\t\t\t|_____|_______|_____|");
	exit(0);
	break;
 
 
 
 
 
 
 
 
 
 
 
}
}
else {
    system("cls");
        printf("\n\t\t\t\t\t ___________________");
     	printf("\n\t\t\t\t\t|___________________|");
     	printf("\n\t\t\t\t\t|                   |");
		printf("\n\t\t\t\t\t|  !!   zasto   !!  |");
		printf("\n\t\t\t\t\t|  !!    ste    !!  |");
		printf("\n\t\t\t\t\t|  !!  ukucali  !!  |");
		printf("\n\t\t\t\t\t|  !!  nevazeci !!  |");
		printf("\n\t\t\t\t\t|  !!    znak   !!  |");
		printf("\n\t\t\t\t\t|___________________|");
	    printf("\n\t\t\t\t\t|___________________|");
 
 
 
}
	}
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
	// HANGMAN
	 if(odabir2 == 1){
	system("CLS");
 	char nazadhangman[50];
 
 
         printf("\t\t\t\t _______________________________ \n");
    printf("\t\t\t\t(  --          (O)           -- )\n");
    printf("\t\t\t\t(_______________________________)\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|  ****     **    **  **  ****  |\n");
    printf("\t\t\t\t|  * ***   ****   * ** *  ****  |\n");
    printf("\t\t\t\t|  *****  *    *  *    *  ****  |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t(___         ___( )___       ___)\n"); 
    printf("\t\t\t\t(_______________________________)\n"); 
 
 
 
    system("color 01");
    Sleep(300);
    system("CLS");
    printf("\t\t\t\t _______________________________ \n");
    printf("\t\t\t\t(  --          (O)           -- )\n");
    printf("\t\t\t\t(_______________________________)\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|  ****     **    **  **  ****  |\n");
    printf("\t\t\t\t|  * ***   ****   * ** *  ****  |\n");
    printf("\t\t\t\t|  *****  *    *  *    *  ****  |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|           loading             |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t(___         ___( )___       ___)\n"); 
    printf("\t\t\t\t(_______________________________)\n"); 
 
    system("color 02");
    Sleep(300);
    system("CLS");
    printf("\t\t\t\t _______________________________ \n");
    printf("\t\t\t\t(  --          (O)           -- )\n");
    printf("\t\t\t\t(_______________________________)\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|  ****     **    **  **  ****  |\n");
    printf("\t\t\t\t|  * ***   ****   * ** *  ****  |\n");
    printf("\t\t\t\t|  *****  *    *  *    *  ****  |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|           loading             |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|        [            ]         |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t(___         ___( )___       ___)\n"); 
    printf("\t\t\t\t(_______________________________)\n"); 
 
    system("color 04");
    Sleep(300);
    system("CLS");
    printf("\t\t\t\t _______________________________ \n");
    printf("\t\t\t\t(  --          (O)           -- )\n");
    printf("\t\t\t\t(_______________________________)\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|  ****     **    **  **  ****  |\n");
    printf("\t\t\t\t|  * ***   ****   * ** *  ****  |\n");
    printf("\t\t\t\t|  *****  *    *  *    *  ****  |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|           loading             |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|        [/           ]         |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t(___         ___( )___       ___)\n"); 
    printf("\t\t\t\t(_______________________________)\n"); 
 
    system("color 06");
    Sleep(300);
    system("CLS");
    printf("\t\t\t\t _______________________________ \n");
    printf("\t\t\t\t(  --          (O)           -- )\n");
    printf("\t\t\t\t(_______________________________)\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|  ****     **    **  **  ****  |\n");
    printf("\t\t\t\t|  * ***   ****   * ** *  ****  |\n");
    printf("\t\t\t\t|  *****  *    *  *    *  ****  |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|           loading             |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|        [//          ]         |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t(___         ___( )___       ___)\n"); 
    printf("\t\t\t\t(_______________________________)\n"); 
 
    system("color 03");
    Sleep(300);
    system("CLS");
    printf("\t\t\t\t _______________________________ \n");
    printf("\t\t\t\t(  --          (O)           -- )\n");
    printf("\t\t\t\t(_______________________________)\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|  ****     **    **  **  ****  |\n");
    printf("\t\t\t\t|  * ***   ****   * ** *  ****  |\n");
    printf("\t\t\t\t|  *****  *    *  *    *  ****  |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|           loading             |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|        [///         ]         |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t(___         ___( )___       ___)\n"); 
    printf("\t\t\t\t(_______________________________)\n"); 
 
    system("color 05");
    Sleep(300);
    system("CLS");
    printf("\t\t\t\t _______________________________ \n");
    printf("\t\t\t\t(  --          (O)           -- )\n");
    printf("\t\t\t\t(_______________________________)\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|  ****     **    **  **  ****  |\n");
    printf("\t\t\t\t|  * ***   ****   * ** *  ****  |\n");
    printf("\t\t\t\t|  *****  *    *  *    *  ****  |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|           loading             |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|        [///         ]         |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t(___         ___( )___       ___)\n"); 
    printf("\t\t\t\t(_______________________________)\n"); 
 
    system("color 07");
    Sleep(300);
    system("CLS");
    printf("\t\t\t\t _______________________________ \n");
    printf("\t\t\t\t(  --          (O)           -- )\n");
    printf("\t\t\t\t(_______________________________)\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|  ****     **    **  **  ****  |\n");
    printf("\t\t\t\t|  * ***   ****   * ** *  ****  |\n");
    printf("\t\t\t\t|  *****  *    *  *    *  ****  |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|           loading             |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|        [////        ]         |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t(___         ___( )___       ___)\n"); 
    printf("\t\t\t\t(_______________________________)\n"); 
 
    system("color 08");
    Sleep(300);
    system("CLS");
    printf("\t\t\t\t _______________________________ \n");
    printf("\t\t\t\t(  --          (O)           -- )\n");
    printf("\t\t\t\t(_______________________________)\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|  ****     **    **  **  ****  |\n");
    printf("\t\t\t\t|  * ***   ****   * ** *  ****  |\n");
    printf("\t\t\t\t|  *****  *    *  *    *  ****  |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|           loading             |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|        [/////       ]         |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t(___         ___( )___       ___)\n"); 
    printf("\t\t\t\t(_______________________________)\n"); 
 
    system("color 09");
    Sleep(300);
    system("CLS");
    printf("\t\t\t\t _______________________________ \n");
    printf("\t\t\t\t(  --          (O)           -- )\n");
    printf("\t\t\t\t(_______________________________)\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|  ****     **    **  **  ****  |\n");
    printf("\t\t\t\t|  * ***   ****   * ** *  ****  |\n");
    printf("\t\t\t\t|  *****  *    *  *    *  ****  |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|           loading             |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|        [/////       ]         |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t(___         ___( )___       ___)\n"); 
    printf("\t\t\t\t(_______________________________)\n"); 
 
    system("color 0A");
    Sleep(300);
    system("CLS");
    printf("\t\t\t\t _______________________________ \n");
    printf("\t\t\t\t(  --          (O)           -- )\n");
    printf("\t\t\t\t(_______________________________)\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|  ****     **    **  **  ****  |\n");
    printf("\t\t\t\t|  * ***   ****   * ** *  ****  |\n");
    printf("\t\t\t\t|  *****  *    *  *    *  ****  |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|           loading             |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|        [//////      ]         |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t(___         ___( )___       ___)\n"); 
    printf("\t\t\t\t(_______________________________)\n"); 
 
    system("color 0B");
    Sleep(300);
    system("CLS");
    printf("\t\t\t\t _______________________________ \n");
    printf("\t\t\t\t(  --          (O)           -- )\n");
    printf("\t\t\t\t(_______________________________)\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|  ****     **    **  **  ****  |\n");
    printf("\t\t\t\t|  * ***   ****   * ** *  ****  |\n");
    printf("\t\t\t\t|  *****  *    *  *    *  ****  |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|           loading             |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|        [///////     ]         |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t(___         ___( )___       ___)\n"); 
    printf("\t\t\t\t(_______________________________)\n"); 
 
    system("color 0C");
    Sleep(300);
system("CLS");
    printf("\t\t\t\t _______________________________ \n");
    printf("\t\t\t\t(  --          (O)           -- )\n");
    printf("\t\t\t\t(_______________________________)\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|  ****     **    **  **  ****  |\n");
    printf("\t\t\t\t|  * ***   ****   * ** *  ****  |\n");
    printf("\t\t\t\t|  *****  *    *  *    *  ****  |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|           loading             |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|        [///////     ]         |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t(___         ___( )___       ___)\n"); 
    printf("\t\t\t\t(_______________________________)\n"); 
 
    system("color 0D");
    Sleep(300);
    system("CLS");
    printf("\t\t\t\t _______________________________ \n");
    printf("\t\t\t\t(  --          (O)           -- )\n");
    printf("\t\t\t\t(_______________________________)\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|  ****     **    **  **  ****  |\n");
    printf("\t\t\t\t|  * ***   ****   * ** *  ****  |\n");
    printf("\t\t\t\t|  *****  *    *  *    *  ****  |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|           loading             |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|        [////////    ]         |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t(___         ___( )___       ___)\n"); 
    printf("\t\t\t\t(_______________________________)\n"); 
 
    system("color 0E");
    Sleep(300);
    system("CLS");
    printf("\t\t\t\t _______________________________ \n");
    printf("\t\t\t\t(  --          (O)           -- )\n");
    printf("\t\t\t\t(_______________________________)\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|  ****     **    **  **  ****  |\n");
    printf("\t\t\t\t|  * ***   ****   * ** *  ****  |\n");
    printf("\t\t\t\t|  *****  *    *  *    *  ****  |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|           loading             |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|        [////////    ]         |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t(___         ___( )___       ___)\n"); 
    printf("\t\t\t\t(_______________________________)\n"); 
 
    system("color 0F");
    Sleep(300);
 
    system("CLS");
    printf("\t\t\t\t _______________________________ \n");
    printf("\t\t\t\t(  --          (O)           -- )\n");
    printf("\t\t\t\t(_______________________________)\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|  ****     **    **  **  ****  |\n");
    printf("\t\t\t\t|  * ***   ****   * ** *  ****  |\n");
    printf("\t\t\t\t|  *****  *    *  *    *  ****  |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|           loading             |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|        [/////////   ]         |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t(___         ___( )___       ___)\n"); 
    printf("\t\t\t\t(_______________________________)\n"); 
 
 
    system("color 04");
    Sleep(300);
 
    system("CLS");
    printf("\t\t\t\t _______________________________ \n");
    printf("\t\t\t\t(  --          (O)           -- )\n");
    printf("\t\t\t\t(_______________________________)\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|  ****     **    **  **  ****  |\n");
    printf("\t\t\t\t|  * ***   ****   * ** *  ****  |\n");
    printf("\t\t\t\t|  *****  *    *  *    *  ****  |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|           loading             |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|        [//////////  ]         |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t(___         ___( )___       ___)\n"); 
    printf("\t\t\t\t(_______________________________)\n"); 
 
    system("color 03");
    Sleep(300);
 
    system("CLS");
    printf("\t\t\t\t _______________________________ \n");
    printf("\t\t\t\t(  --          (O)           -- )\n");
    printf("\t\t\t\t(_______________________________)\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|  ****     **    **  **  ****  |\n");
    printf("\t\t\t\t|  * ***   ****   * ** *  ****  |\n");
    printf("\t\t\t\t|  *****  *    *  *    *  ****  |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|           loading             |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|        [//////////  ]         |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t(___         ___( )___       ___)\n"); 
    printf("\t\t\t\t(_______________________________)\n"); 
 
 
 
 
    system("color 05");
    Sleep(300);
 
    system("CLS");
    printf("\t\t\t\t _______________________________ \n");
    printf("\t\t\t\t(  --          (O)           -- )\n");
    printf("\t\t\t\t(_______________________________)\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|  ****     **    **  **  ****  |\n");
    printf("\t\t\t\t|  * ***   ****   * ** *  ****  |\n");
    printf("\t\t\t\t|  *****  *    *  *    *  ****  |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|           loading             |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|        [//////////  ]         |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t(___         ___( )___       ___)\n"); 
    printf("\t\t\t\t(_______________________________)\n"); 
 
 
    system("color 06");
    Sleep(300);
 
    system("CLS");
    printf("\t\t\t\t _______________________________ \n");
    printf("\t\t\t\t(  --          (O)           -- )\n");
    printf("\t\t\t\t(_______________________________)\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|  ****     **    **  **  ****  |\n");
    printf("\t\t\t\t|  * ***   ****   * ** *  ****  |\n");
    printf("\t\t\t\t|  *****  *    *  *    *  ****  |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|           loading             |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|        [/////////// ]         |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t(___         ___( )___       ___)\n"); 
    printf("\t\t\t\t(_______________________________)\n"); 
 
 
    system("color 09");
    Sleep(300);
 
    system("CLS");
    printf("\t\t\t\t _______________________________ \n");
    printf("\t\t\t\t(  --          (O)           -- )\n");
    printf("\t\t\t\t(_______________________________)\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|  ****     **    **  **  ****  |\n");
    printf("\t\t\t\t|  * ***   ****   * ** *  ****  |\n");
    printf("\t\t\t\t|  *****  *    *  *    *  ****  |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|           loading             |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|        [////////////]         |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t(___         ___( )___       ___)\n"); 
    printf("\t\t\t\t(_______________________________)\n"); 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
        int s; 
        int lvl;
 
        system("color 02");
 
        printf("\t\n\n Dobro Dosli u HANGMAN game \n\n\n pritisni 1 za [ucitavanje] levela: ");
        scanf("%d", &lvl);
        system("color 02");
        system("CLS");
 
 
    char t[10];
 
    switch(lvl){
 
    case 1:
    system("CLS");
    system("color 01");
    printf("\t\t\t\t _______________________________ \n");
    printf("\t\t\t\t(  --          (O)           -- )\n");
    printf("\t\t\t\t(_______________________________)\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|            LOADING            |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|              lvl.             |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|            [ 1/10 ]           |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t(___         ___( )___       ___)\n"); 
    printf("\t\t\t\t(_______________________________)\n"); 
 
 
 
 
    system("color 02");
    Sleep(300);
    system("CLS");
    printf("\t\t\t\t _______________________________ \n");
    printf("\t\t\t\t(  --          (O)           -- )\n");
    printf("\t\t\t\t(_______________________________)\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|            LOADING            |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|              lvl.             |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|            [ 2/10 ]           |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t(___         ___( )___       ___)\n"); 
    printf("\t\t\t\t(_______________________________)\n"); 
 
 
 
 
 
 
 
    system("color 03");
    Sleep(300);
    system("CLS");
    printf("\t\t\t\t _______________________________ \n");
    printf("\t\t\t\t(  --          (O)           -- )\n");
    printf("\t\t\t\t(_______________________________)\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|            LOADING            |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|              lvl.             |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|            [ 3/10 ]           |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t(___         ___( )___       ___)\n"); 
    printf("\t\t\t\t(_______________________________)\n"); 
 
 
 
 
    system("color 04");
    Sleep(300);
    system("CLS");
    printf("\t\t\t\t _______________________________ \n");
    printf("\t\t\t\t(  --          (O)           -- )\n");
    printf("\t\t\t\t(_______________________________)\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|            LOADING            |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|              lvl.             |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|            [ 4/10 ]           |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t(___         ___( )___       ___)\n"); 
    printf("\t\t\t\t(_______________________________)\n"); 
 
 
 
    system("color 05");
    Sleep(300);
    system("CLS");
    printf("\t\t\t\t _______________________________ \n");
    printf("\t\t\t\t(  --          (O)           -- )\n");
    printf("\t\t\t\t(_______________________________)\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|            LOADING            |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|              lvl.             |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|            [ 5/10 ]           |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t(___         ___( )___       ___)\n"); 
    printf("\t\t\t\t(_______________________________)\n"); 
 
 
 
 
 
 
 
 
 
    system("color 06");
    Sleep(300);
    system("CLS");
    printf("\t\t\t\t _______________________________ \n");
    printf("\t\t\t\t(  --          (O)           -- )\n");
    printf("\t\t\t\t(_______________________________)\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|            LOADING            |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|              lvl.             |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|            [ 6/10 ]           |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t(___         ___( )___       ___)\n"); 
    printf("\t\t\t\t(_______________________________)\n"); 
 
 
 
 
 
 
 
 
 
 
    system("color 07");
    Sleep(300);
    system("CLS");
    printf("\t\t\t\t _______________________________ \n");
    printf("\t\t\t\t(  --          (O)           -- )\n");
    printf("\t\t\t\t(_______________________________)\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|            LOADING            |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|              lvl.             |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|            [ 7/10 ]           |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t(___         ___( )___       ___)\n"); 
    printf("\t\t\t\t(_______________________________)\n"); 
 
 
 
 
 
 
 
 
    system("color 08");
    Sleep(300);
    system("CLS");
    printf("\t\t\t\t _______________________________ \n");
    printf("\t\t\t\t(  --          (O)           -- )\n");
    printf("\t\t\t\t(_______________________________)\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|            LOADING            |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|              lvl.             |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|            [ 8/10 ]           |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t(___         ___( )___       ___)\n"); 
    printf("\t\t\t\t(_______________________________)\n"); 
 
 
 
 
 
    system("color 0D");
    Sleep(300);
    system("CLS");
    printf("\t\t\t\t _______________________________ \n");
    printf("\t\t\t\t(  --          (O)           -- )\n");
    printf("\t\t\t\t(_______________________________)\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|            LOADING            |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|              lvl.             |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|            [ 9/10 ]           |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t(___         ___( )___       ___)\n"); 
    printf("\t\t\t\t(_______________________________)\n"); 
 
 
 
 
 
 
    system("color 0C");
    Sleep(300);
    system("CLS");
    printf("\t\t\t\t _______________________________ \n");
    printf("\t\t\t\t(  --          (O)           -- )\n");
    printf("\t\t\t\t(_______________________________)\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|            LOADING            |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|              lvl.             |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|            [ 10/10 ]          |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t(___         ___( )___       ___)\n"); 
    printf("\t\t\t\t(_______________________________)\n"); 
 
 
 
 
 
 
 
    system("color 0A");
    Sleep(300);
    system("CLS");
    printf("\t\t\t\t _______________________________ \n");
    printf("\t\t\t\t(  --          (O)           -- )\n");
    printf("\t\t\t\t(_______________________________)\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|            LOADING            |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|              lvl.             |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|            [ 10/10 ]          |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t(___         ___( )___       ___)\n"); 
    printf("\t\t\t\t(_______________________________)\n"); 
 
 
 
 
 
 
    system("color 0A");
    Sleep(300);
    system("CLS");
    printf("\t\t\t\t _______________________________ \n");
    printf("\t\t\t\t(  --          (O)           -- )\n");
    printf("\t\t\t\t(_______________________________)\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|            LOADING            |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|              lvl.             |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|            [ 10/10 ]          |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t|                               |\n");
    printf("\t\t\t\t(___         ___( )___       ___)\n"); 
    printf("\t\t\t\t(_______________________________)\n"); 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
        char t[7];
        char l[9];
        char d[5];
        char f[10];
        char m[7];
        char n[8];
        char z[15];
        char o[19];
 
 
            system("CLS");
            printf("Odabrali ste 1 lvl. : ");
            printf("            _______________________________");
              printf("\t\t\t\t \n");
           printf("\t\t\t\t (  --          (O)           -- )\n");
           printf("\t\t\t\t (_______________________________)\n");
           printf("\t\t\t\t |                               |\n");
           printf("\t\t\t\t |    ___________________        |\n");
           printf("\t\t\t\t |   |                   |       |\n");
           printf("\t\t\t\t |   |                   |       |\n");
           printf("\t\t\t\t |   |                   |       |\n");
           printf("\t\t\t\t |   |                   |       |\n");
           printf("\t\t\t\t |   |                 __|__     |\n");
           printf("\t\t\t\t |   |                | * * |    |\n");
           printf("\t\t\t\t |   |                |_____|    |\n");
           printf("\t\t\t\t |   |                   |       |\n");
           printf("\t\t\t\t |   |                  _|__     |\n");
           printf("\t\t\t\t |   |                 / | /     |\n");
           printf("\t\t\t\t |   |                /  |/      |\n");
           printf("\t\t\t\t |   |                  _|__     |\n");
           printf("\t\t\t\t |   |                 /   /     |\n");
           printf("\t\t\t\t |   |              __/ __/      |\n");
           printf("\t\t\t\t |   |                           |\n");
           printf("\t\t\t\t |  _|_                          |\n");
           printf("\t\t\t\t | |___|                         |\n");
           printf("\t\t\t\t (___         ___( )___       ___)\n"); 
           printf("\t\t\t\t (_______________________________)\n"); 
 
           printf("\n\n\t\t\t\tVasa zadata rec jr [H,_,R,_,U,L,_,S]");
 
    printf("\n\n\t\t\t\t\tUNESITE slovo koje nedostaje ovoj reci : ");
    scanf("%s", &t);
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    if(strcmp(t, "k")==0) { //od if za k glavna
 
    system("CLS");
 
        printf("\n    _______________________                      ");
     printf("\n   |                       |                     ");
     printf("\n   |                       |                     ");
     printf("\n   |                       |                     "); 
     printf("\n   |                     __|__                   ");
     printf("\n   |                    | * * |                  ");
     printf("\n   |                    |_____|                  ");
     printf("\n   |                       |                     ");
     printf("\n   |                      _|__                  ");
     printf("\n   |                     / | /                   ");
     printf("\n   |                    /  |/                  ");
     printf("\n   |                      _|__               ");
     printf("\n   |                     /   /                   ");
     printf("\n   |                  __/ __/               ");  
     printf("\n   |                                             "); 
     printf("\n   |                                             "); 
printf("\n  _|_                                            ");  
printf("\n |___|                                   ");
    printf("\t\t\tPogodili ste !\n\n\t (H_R[[K]]RUL_S), Preostalo vam je 2 pokusaja");
 
 
 
    printf("\n\n\t\t\tUNESITE slovo koje nedostaje ovoj reci: ");
    scanf("%s", &l);
 
    if(strcmp(l, "e")==0){
        system("CLS");
 
        printf("\n    _______________________                      ");
     printf("\n   |                       |                     ");
     printf("\n   |                       |                     ");
     printf("\n   |                       |                     "); 
     printf("\n   |                     __|__                   ");
     printf("\n   |                    | * * |                  ");
     printf("\n   |                    |_____|                  ");
     printf("\n   |                       |                     ");
     printf("\n   |                      _|__                  ");
     printf("\n   |                     / | /                   ");
     printf("\n   |                    /  |/                  ");
     printf("\n   |                      _|__               ");
     printf("\n   |                     /   /                   ");
     printf("\n   |                  __/ __/               ");  
     printf("\n   |                                             "); 
     printf("\n   |                                             "); 
printf("\n  _|_                                            ");  
printf("\n |___|                                   ");
        printf("\t\t\tPogodili ste !\n\n\t (H[[E]]RKUL[[E]]S)");
        printf("\n");
        printf("Ako zelite da se vratite nazad upisite 'Back', a ako zelite da izadjete iz programa upisite 'Exit'\n123");
        scanf("%s",&nazadhangman);
        if(strcmp(nazadhangman,"Back")== 0){
        	system("CLS");
			goto odabir;
		}
		if(strcmp(nazadhangman,"Exit")== 0){
			system("CLS");
			printf("Odabrali ste opciju da izadjete iz programa.");
			exit(0);
		}
 
    }else{
        system("CLS");
        int art=2;
        printf("\t\t\tPromasili ste , imate jos %i pokusaja",--art);
        printf("\n    _______________________                      ");
     printf("\n   |                       |                     ");
     printf("\n   |                       |                     ");
     printf("\n   |                       |                     "); 
     printf("\n   |                     __|__                   ");
     printf("\n   |                    | * * |                  ");
     printf("\n   |                    |_____|                  ");
     printf("\n   |                       |                     ");
     printf("\n   |                      _|__                  ");
     printf("\n   |                     / | /                   ");
     printf("\n   |                    /  |/                  ");
     printf("\n   |                      _|                  ");
     printf("\n   |                     /                      ");
     printf("\n   |                  __/                  ");   
     printf("\n   |                                             "); 
     printf("\n   |                                             "); 
printf("\n  _|_                                            ");  
printf("\n |___|                                   ");
 
printf("\n\n\t\t\tUnesite slovo koje nedostaje ovoj reci: ");
    scanf("%s", &m);
 
if(strcmp(m, "e")==0){
system("CLS");
        printf("Pogodili ste !\n\n\t\t\t [[HERKULES]]");
        printf("\n");
        printf("Ako zelite da se vratite nazad upisite 'Back', a ako zelite da izadjete iz programa upisite 'Exit'\n");
        scanf("%s",&nazadhangman);
        if(strcmp(nazadhangman,"Back")== 0){
        	system("CLS");
			goto odabir;
		}
		if(strcmp(nazadhangman,"Exit")== 0){
			system("CLS");
			printf("Odabrali ste opciju da izadjete iz programa.");
			exit(0);
		}
 
}else{
    system("CLS");
        int art=3;
        printf("\t\t\tPromasili ste, preostalo vam je 0 pokusaja.\n");
        printf("\t\t\t\tG A M E  O V E R");
        printf("\n    _______________________                      ");
     printf("\n   |                       |                     ");
     printf("\n   |                       |                     ");
     printf("\n   |                       |                     "); 
     printf("\n   |                     __|__                   ");
     printf("\n   |                    | * * |                  ");
     printf("\n   |                    |_____|                  ");
     printf("\n   |                       |                     ");
     printf("\n   |                      _|__                  ");
     printf("\n   |                     / | /                   ");
     printf("\n   |                    /  |/                  ");
     printf("\n   |                       |                  ");
     printf("\n   |                                           ");
     printf("\n   |                                    ");  
     printf("\n   |                                             "); 
     printf("\n   |                                             "); 
printf("\n  _|_                                            ");  
printf("\n |___|                                   ");
 
}
 
    }//else za e 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    }else if(strcmp(t, "e")==0) { //od if za k glavna
 
    system("CLS");
    printf("\n    _______________________                      ");
     printf("\n   |                       |                     ");
     printf("\n   |                       |                     ");
     printf("\n   |                       |                     "); 
     printf("\n   |                     __|__                   ");
     printf("\n   |                    | * * |                  ");
     printf("\n   |                    |_____|                  ");
     printf("\n   |                       |                     ");
     printf("\n   |                      _|__                  ");
     printf("\n   |                     / | /                   ");
     printf("\n   |                    /  |/                  ");
     printf("\n   |                      _|__                  ");
     printf("\n   |                     /   /                VASA ZADATA REC JE (H_R_UL_S)    ");
     printf("\n   |                  __/ __/                   ");  
     printf("\n   |                                             "); 
     printf("\n   |                                             "); 
printf("\n  _|_                                            ");  
printf("\n |___|                                           ");      
    printf("\t\t\tPogodili ste!");
    printf("\t\t(H E R _ U L E S) je vasa rec.\n\n");
 
 
 
    printf("\t\t\tUnesite slovo koje nedostaje ovoj reci: ");
    scanf("%s", &d);
 
    if(strcmp(d, "k")==0){
        system("CLS");
        printf("\n    _______________________                      ");
     printf("\n   |                       |                     ");
     printf("\n   |                       |                     ");
     printf("\n   |                       |                     "); 
     printf("\n   |                     __|__                   ");
     printf("\n   |                    | * * |                  ");
     printf("\n   |                    |_____|                  ");
     printf("\n   |                       |                     ");
     printf("\n   |                      _|__                  ");
     printf("\n   |                     / | /                   ");
     printf("\n   |                    /  |/                  ");
     printf("\n   |                      _|__                  ");
     printf("\n   |                     /   /                VASA ZADATA REC JE (H_R_UL_S)    ");
     printf("\n   |                  __/ __/                   ");  
     printf("\n   |                                             "); 
     printf("\n   |                                             "); 
printf("\n  _|_                                            ");  
printf("\n |___|                                           ");      
 
        printf("\t\t\tPogodili ste!\n");
        printf("\t\t( H E R K U L E S" );
        printf("\n");
        printf("Ako zelite da se vratite nazad upisite 'Back', a ako zelite da izadjete iz programa upisite 'Exit'\n");
        scanf("%s",&nazadhangman);
        if(strcmp(nazadhangman,"Back")== 0){
        	system("CLS");
			goto odabir;
		}
		if(strcmp(nazadhangman,"Exit")== 0){
			system("CLS");
			printf("Odabrali ste opciju da izadjete iz programa.");
			exit(0);
		}
 
    }else{
        system("CLS");
        int art=2;
        printf("\t\t\tPromasili ste, imate jos %i pokusaja",--art);
        printf("\n    _______________________                      ");
     printf("\n   |                       |                     ");
     printf("\n   |                       |                     ");
     printf("\n   |                       |                     "); 
     printf("\n   |                     __|__                   ");
     printf("\n   |                    | * * |                  ");
     printf("\n   |                    |_____|                  ");
     printf("\n   |                       |                     ");
     printf("\n   |                      _|__                  ");
     printf("\n   |                     / | /                   ");
     printf("\n   |                    /  |/                  ");
     printf("\n   |                      _|                  ");
     printf("\n   |                     /                      ");
     printf("\n   |                  __/                  ");   
     printf("\n   |                                             "); 
     printf("\n   |                                             "); 
printf("\n  _|_                                            ");  
printf("\n |___|                                   ");
 
printf("\n\n\t\t\tUnesite  slovo koje nedostaje ovoj reci: ");
    scanf("%s", &f);
 
if(strcmp(f, "k")==0){
 
system("CLS");
 
        printf("\n    _______________________                      ");
     printf("\n   |                       |                     ");
     printf("\n   |                       |                     ");
     printf("\n   |                       |                     "); 
     printf("\n   |                     __|__                   ");
     printf("\n   |                    | * * |                  ");
     printf("\n   |                    |_____|                  ");
     printf("\n   |                       |                     ");
     printf("\n   |                      _|__                  ");
     printf("\n   |                     / | /                   ");
     printf("\n   |                    /  |/                  ");
     printf("\n   |                      _|                  ");
     printf("\n   |                     /                      ");
     printf("\n   |                  __/                  ");   
     printf("\n   |                                             "); 
     printf("\n   |                                             "); 
printf("\n  _|_                                            ");  
printf("\n |___|                                   ");
        printf("\t\t\tPogodili ste !\n");
        printf("\t\t( H E R K U L E S )");
 
}else{
    system("CLS");
        int art=3;
        printf("\t\t\tPromasili ste.\n");
        printf("\t\t\tG A M E  O V E R");
        printf("\n    _______________________                      ");
     printf("\n   |                       |                     ");
     printf("\n   |                       |                     ");
     printf("\n   |                       |                     "); 
     printf("\n   |                     __|__                   ");
     printf("\n   |                    | * * |                  ");
     printf("\n   |                    |_____|                  ");
     printf("\n   |                       |                     ");
     printf("\n   |                      _|__                  ");
     printf("\n   |                     / | /                   ");
     printf("\n   |                    /  |/                  ");
     printf("\n   |                       |                  ");
     printf("\n   |                                           ");
     printf("\n   |                                    ");  
     printf("\n   |                                             "); 
     printf("\n   |                                             "); 
printf("\n  _|_                                            ");  
printf("\n |___|                                   ");
 
}
 
    }//else za e 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    }else{
        system("CLS");
        printf("\t\t\tPromasili ste, imate jos 1 pokusaj");
        printf("\n    _______________________                      ");
     printf("\n   |                       |                     ");
     printf("\n   |                       |                     ");
     printf("\n   |                       |                     "); 
     printf("\n   |                     __|__                   ");
     printf("\n   |                    | * * |                  ");
     printf("\n   |                    |_____|                  ");
     printf("\n   |                       |                     ");
     printf("\n   |                      _|__                  ");
     printf("\n   |                     / | /                   ");
     printf("\n   |                    /  |/                  ");
     printf("\n   |                      _|                  ");
     printf("\n   |                     /                      ");
     printf("\n   |                  __/                  ");   
     printf("\n   |                                             "); 
     printf("\n   |                                             "); 
printf("\n  _|_                                            ");  
printf("\n |___|                                   ");
 
        printf("\t\t\tPogresili ste, imate samo jos 1 pokusaj\n");
        printf("\t\t\tUnesite slovo koje nedostaje ovoj reci: ");
 
 
    scanf("%s", &n);
 
 
        if(strcmp(n, "k")==0){
 
        system("CLS");
 
        printf("\n    _______________________                      ");
     printf("\n   |                       |                     ");
     printf("\n   |                       |                     ");
     printf("\n   |                       |                     "); 
     printf("\n   |                     __|__                   ");
     printf("\n   |                    | * * |                  ");
     printf("\n   |                    |_____|                  ");
     printf("\n   |                       |                     ");
     printf("\n   |                      _|__                  ");
     printf("\n   |                     / | /                   ");
     printf("\n   |                    /  |/                  ");
     printf("\n   |                      _|                  ");
     printf("\n   |                     /                      ");
     printf("\n   |                  __/                  ");   
     printf("\n   |                                             "); 
     printf("\n   |                                             "); 
printf("\n  _|_                                            ");  
printf("\n |___|                                   ");
    printf("\t\t\tPogodili ste!\n");
    printf("\t\t\t( H _ R K U L _ S ), i imate jos 1 pokusaj\n");
    printf("\t\t\tUnesite slovo koje nedostaje ovoj reci: ");
    scanf("%s", &z);
 
 
 
 
        }if(strcmp(z, "e")==0){
 
 
 
        printf("\n    _______________________                      ");
     printf("\n   |                       |                     ");
     printf("\n   |                       |                     ");
     printf("\n   |                       |                     "); 
     printf("\n   |                     __|__                   ");
     printf("\n   |                    | * * |                  ");
     printf("\n   |                    |_____|                  ");
     printf("\n   |                       |                     ");
     printf("\n   |                      _|__                  ");
     printf("\n   |                     / | /                   ");
     printf("\n   |                    /  |/                  ");
     printf("\n   |                      _|                  ");
     printf("\n   |                     /                      ");
     printf("\n   |                  __/                  ");   
     printf("\n   |                                             "); 
     printf("\n   |                                             "); 
printf("\n  _|_                                            ");  
printf("\n |___|                                   ");
        printf("\t\t\tPogodili ste !");
        printf("\t\t\t( H E R K U L E S )");
 
        }else{
            printf("\t\t\tPromasili ste, imate jos 0 pokusaja");
        printf("\n    _______________________                      ");
     printf("\n   |                       |                     ");
     printf("\n   |                       |                     ");
     printf("\n   |                       |                     "); 
     printf("\n   |                     __|__                   ");
     printf("\n   |                    | * * |                  ");
     printf("\n   |                    |_____|                  ");
     printf("\n   |                       |                     ");
     printf("\n   |                      _|__                  ");
     printf("\n   |                     / | /                   ");
     printf("\n   |                    /  |/                  ");
     printf("\n   |                                          ");
     printf("\n   |                                           ");
     printf("\n   |                                      ");    
     printf("\n   |                                             "); 
     printf("\n   |                                             "); 
printf("\n  _|_                                            ");  
printf("\n |___|                                   ");
            printf("\t\t\tGAME OVER , NEMATE VISE POKUSAJA ");
 
 
        }if(strcmp(n, "e")==0){
 
        system("CLS");
 
        printf("\n    _______________________                      ");
     printf("\n   |                       |                     ");
     printf("\n   |                       |                     ");
     printf("\n   |                       |                     "); 
     printf("\n   |                     __|__                   ");
     printf("\n   |                    | * * |                  ");
     printf("\n   |                    |_____|                  ");
     printf("\n   |                       |                     ");
     printf("\n   |                      _|__                  ");
     printf("\n   |                     / | /                   ");
     printf("\n   |                    /  |/                  ");
     printf("\n   |                      _|                  ");
     printf("\n   |                     /                      ");
     printf("\n   |                  __/                  ");   
     printf("\n   |                                             "); 
     printf("\n   |                                             "); 
printf("\n  _|_                                            ");  
printf("\n |___|                                   ");
 
    printf("\t\t\tPogodili ste !\n\n\t\t\t ( H E R _ U L E S ), i imate jos 1 pokusaj");
    printf("\n\n\t\t\t\t\tUnesite  slovo koje nedostaje ovoj reci: ");
    scanf("%s", &o);
 
 
        }if(strcmp(o, "k")==0){
 
        printf("\t\t\tPogodili ste !\n\n\t\t\t ( H E R K U L E S )");
 
 
    }
    }
}
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
		// SETTINGS
		if(odabir == 5){		
			system("CLS");
	char  opcija[100];
	char pitanje[1000];
	char opcija2[1000];
	char mitro;
	char opcija3[1000];
    char iopcija[1000];
	char ilozinka1[1000];
    char sopcija[1000];
	char disable[1000];
	char update[1000];
    float jton, jslika;
    int i = 1;
    int k = 100;
		
			 
    
    printf("\t\t________________________________________________________________\n\n");
    mitro:
    printf("\t\t\t\t _________________________ \n");
    printf("\t\t\t\t( --       (O)       --  )\n");
    printf("\t\t\t\t(________________________)\n");
    printf("\t\t\t\t|                        |\n");
    printf("\t\t\t\t|   Connections          |\n");
    printf("\t\t\t\t|   ________________     |\n");
    printf("\t\t\t\t|                        |\n");
    printf("\t\t\t\t|   Sound                |\n");
    printf("\t\t\t\t|   Display              |\n");
    printf("\t\t\t\t|   Informacije          |\n");
    printf("\t\t\t\t|   Screen               |\n");
    printf("\t\t\t\t|   _________________    |\n");
    printf("\t\t\t\t|                        |\n");
    printf("\t\t\t\t|   Back                 |\n");
    printf("\t\t\t\t|                        |\n");
    printf("\t\t\t\t|                        |\n");
    printf("\t\t\t\t(___     ___( )___    ___)\n"); 
    printf("\t\t\t\t(________________________)\n\n"); 
    
    printf("\t\t________________________________________________________________\n\n\n");
    
    printf("\t\t\t\tIzaberite koju opciju zelite: ");
    scanf("%s", &opcija);
    
    printf("\n\n");
    system("CLS");
    
    if(strcmp(opcija, "Connections") == 0)
    {
        printf("\t\t_____________________________________________________________\n\n");
        printf("\t\t\tTrenutno ste povezani na 'Gimnazija' internet\n");
        
        printf("\t\t\t\tIP Adressa je 205.92.85.251.\n\n");
        printf("\t\t_____________________________________________________________\n\n");
        
        
        printf("\t\t\tUkucajte 'Back' ako zelite da se vratite nazad: ");
        scanf("%s", opcija3);
        
        if(strcmp(opcija3,"Back")== 0)
        {
        system("CLS");
        printf("\t\t_____________________________________________________________\n\n");
        printf("\t\t\tTrenutno ste povezani na 'Gimnazija' internet\n");
        printf("\t\t\t\t-Takodje dostupno - \n\n");
        printf("\t\t\t\tTaksim - === - Locked\n");
        printf("\t\t\t\tNBA - == - Unlocked\n");
        printf("\t\t\t\tiPhone - === - Unlocked\n");
        printf("\t\t\t\tKlupa - === - Unlocked\n");
        printf("\t\t\t\tKomsija - === - \n\n");
        printf("\t\t_____________________________________________________________\n\n");
        }
        
        printf("\t\t\tUnesite ime interneta na koji zelite da se povezete: ");
        scanf("%s", iopcija);
        
        if(strcmp(iopcija,"Taksim")== 0)
        {
        system("CLS");
        printf("\t\t_____________________________________________________________\n\n");
        
       
        taksim: 
        printf("\t\t\tInternet Taksim je zakljucan!\n");
        printf("\t\t\tUnesite lozinku da bi ste pristupili internetu: ");
        scanf("%s", ilozinka1);
        if(strcmp(ilozinka1, "Taksim2016")== 0)
        {
        printf("\t\t\tPovezani ste na internet Taksim");
        Sleep(850);
        system("CLS");
        goto mitro;
    }
        
        else 
        {
            printf("\t\t_____________________________________________________________\n\n");
            printf("\t\t\tSifra nije tacna pokusajte ponovo.");
            Sleep(850);
            system("CLS");
            goto taksim;
    
        }
    }
        
        if(strcmp(iopcija, "Komsija")== 0)
        {
        printf("\t\t\tPovezali ste se na internet 'Komsija'!\n");
        Sleep(850);
        system("CLS");
        goto mitro; 
    }
        if(strcmp(iopcija, "iPhone")== 0)
        {
        printf("\t\t\tPovezali ste se na internet 'iPhone'!\n");
        Sleep(850);
        system("CLS");
        goto mitro;
    }
        if(strcmp(iopcija, "NBA")== 0)
        {
        printf("\t\t\tPovezali ste se na internet 'NBA'!\n");
        Sleep(850);
        system("CLS");
        goto mitro;     
    }
        if(strcmp(iopcija, "Klupa")== 0)
        {
        printf("\t\t\tPovezali ste se na internet 'Klupa'!\n");
        Sleep(850);
        system("CLS");
        goto mitro; 
        
    
        
    }
}
    
        if(strcmp(opcija, "Informacije") == 0)
    {
        printf("\t\t_____________________________________________________________\n\n");
        
        printf("\t\t\tModel vaseg telefona je iPhone X\n");
        printf("\t\t\tVas telefon je proizveden November 3, 2017\n");
        printf("\t\t\tVas provider je 'Telenor'\n");
        printf("\t\t\tVas broj telefona je +381 062123123\n");
        printf("\t\t\tVerzija vaseg uredjaje je 15.0.1\n");
        printf("\t\t\t=UPDATE= je dostupan!\n");
        printf("\t\t_____________________________________________________________\n\n");
        printf("\t\t\tUkucajte 'Update' da bi ste updajtovali verziju: ");
        scanf("%s", update);
        if(strcmp(update, "Update")== 0)
        {
            printf("\t\t\t\tUredjaj se updajtuje molimo vas sacekajte!\n\n");
            while ( i <= 100 )
            {
                printf("\t\t\tUredjaj se trenutno Updejtuje molimo vas sacekajte!\n");
                printf("\t\t\t\t\t __________\n");
                printf("\t\t\t\t\t|____%i%%____|\n", i);
                printf("\t\t\t\t\t\t \n");
                Sleep(250); 
                if ( i <= 100 )
                i++;
                system("CLS");
            }
            
        }
        
        
        
        printf("\t\t_____________________________________________________________\n\n");
        printf("\t\t\tVas uredjaj se updateovo, vasa nova verzija je 15.0.2");
        printf("\n\t\t\tUkucajte 'Back' ako zelite da se vratite nazad: ");
        scanf("%s", sopcija);
        printf("\t\t_____________________________________________________________\n");
        if(strcmp(sopcija, "Back")== 0)
        system("CLS");
        goto mitro;
        
        
    }
    
    if(strcmp(opcija, "Screen") == 0)
    {
    printf("\t\t_____________________________________________________________\n\n");
    
 
    printf("\t\t\t\t _________________________ \n");
    printf("\t\t\t\t( --       (O)       --  )\n");
    printf("\t\t\t\t(________________________)\n");
    printf("\t\t\t\t|                        |\n");
    printf("\t\t\t\t|        Password        |\n");
    printf("\t\t\t\t|                        |\n");
    printf("\t\t\t\t|      1    2    3       |\n");
    printf("\t\t\t\t|      4    5    6       |\n");
    printf("\t\t\t\t|      7    8    9       |\n");
    printf("\t\t\t\t|           0            |\n");
    printf("\t\t\t\t|                        |\n");
    printf("\t\t\t\t|                        |\n");
    printf("\t\t\t\t|  Unesite Vas Password  |\n");
    printf("\t\t\t\t|                        |\n");
    printf("\t\t\t\t|                        |\n");
    printf("\t\t\t\t(___     ___( )___    ___)\n"); 
    printf("\t\t\t\t(________________________)\n\n"); 
    printf("\t\t\t\tUnesite Vas Password: ");
    scanf("%i", &lozinka);
    
        printf("\t\t________________________________________________________________\n\n\n");
    
    if ( lozinka == 2005 )
    {
        printf("\t\t\t\tLozinka je Tacna!\n");
        printf("\t\t\t\tUkucajte 'Disable' ako zelite da onemogucite lozinku na ovom uredjaju: ");
        scanf("%s", disable);
        if(strcmp(disable, "Disable")== 0)
        printf("\t\t\t\tOnemogucili ste lozinku na ovom uredjaju!\n");
        
        
        printf("\t\t\t\tUkucajte 'Back' ako zelite da se vratite: ");
        scanf("%s", sopcija);
        if(strcmp(sopcija, "Back")== 0)
        system("CLS");
        goto mitro;
            
        
    }
    
    else
    {
    printf("\t\t\t\t ______________________ \n");
    printf("\t\t\t\t(  --      (O)       -- )\n");
    printf("\t\t\t\t(_______________________)\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t|   -Settings Locked-   |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t|       Uneli ste       |\n");
    printf("\t\t\t\t|    pogresnu lozinku.  |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t(___    ___( )___    ___)\n"); 
    printf("\t\t\t\t(_______________________)\n"); 
    }
    
    printf("\t\t________________________________________________________________\n\n\n");
    
    
    
        
        printf("\t\t_____________________________________________________________\n\n");
        
        printf("\n\n");
        
        
        
        if(strcmp(opcija2,"Exit")== 0)
        {
        system("CLS");
        }
        }
    
    if(strcmp(opcija, "Sound") == 0)
    {
        printf("\t\t_____________________________________________________________\n\n");
        
        printf("\t\t\t\tJacina tona je trenutno 50 %%\n");
        printf("\t\t\t\tSound Mode je On\n\n");
        printf("\t\t_____________________________________________________________\n\n");
        printf("\t\t\t\tUpisite zeljenu jacinu tona: ");
        scanf("%f", &jton);
        
        printf("");
            printf("\t\t_____________________________________________________________\n\n");
        if ( jton == 50)
        {
        printf("\t\t\t\tTon je vec na 50 %%.\n");
        printf("\t\t\t\tUkucajte 'Back' ako zelite da se vratite nazad: ");
        scanf("%s", sopcija);
        if(strcmp(sopcija, "Back")== 0)
        system("CLS");
        goto mitro;
        
    }
        else if ( jton ==75)
        {
        printf("\t\t\t\tTon je sada na 75 %%.\n");
        printf("\t\t\t\tUkucajte 'Back' ako zelite da se vratite nazad: ");
        scanf("%s", sopcija);
        if(strcmp(sopcija, "Back")== 0)
        system("CLS");
        goto mitro;
        
    }
        else if ( jton == 100)
        {
        printf("\t\t\t\tTon je sada na 100 %%.\n");
        printf("\t\t\t\tUkucajte 'Back' ako zelite da se vratite nazad: ");
        scanf("%s", sopcija);
        if(strcmp(sopcija, "Back")== 0)
        system("CLS");
        goto mitro;
        
    }   
        else if ( jton == 25)
        {
        printf("\t\t\t\tTon je sada na 25 %%.\n");
        printf("\t\t\t\tUkucajte 'Back' ako zelite da se vratite nazad: ");
        scanf("%s", sopcija);
        if(strcmp(sopcija, "Back")== 0)
        system("CLS");
        goto mitro;
    
    }
    
        else if ( jton = 0)
        {
        printf("\t\t\t\tTon je sada na 0 %%.\n");
        printf("\t\t\t\tUkucajte 'Back' ako zelite da se vratite nazad: ");
        scanf("%s", sopcija);
        if(strcmp(sopcija, "Back")== 0)
        system("CLS");
        goto mitro;
        
    }
        
        printf("\t\t_____________________________________________________________\n\n");
    }
    
    if(strcmp(opcija, "Display") == 0)
    {
        printf("\t\t_____________________________________________________________\n\n");
        printf("\t\t\t\tBrightness je trenutno 50%0%\n");
        printf("\t\t\t\tJacina svetlosti trenutno nije stetna.\n");
        
            printf("\t\t_____________________________________________________________\n\n");
        printf("\t\t\t\tUpisite zeljenu jacinu svetlosti na ekranu: ");
        scanf("%f", &jslika);
        
        printf("");
            printf("\t\t_____________________________________________________________\n\n");
        if ( jslika == 100)
        {
        printf("\t\t\t\tJacina je sada na 100%%.\n");
        printf("\t\t\t\tJacina svetlosti trenutno je stetna!\n");
        printf("\t\t\t\tUkucajte 'Back' ako zelite da se vratite nazad: ");
        scanf("%s", sopcija);
        if(strcmp(sopcija, "Back")== 0)
        system("CLS");
        goto mitro;
    }
     else if ( jslika == 75)
        {
        printf("\t\t\t\tJacina je sada na 75 %%.\n");
        printf("\t\t\t\tJacina svetlosti trenutno je stetna.\n");
        printf("\t\t\t\tUkucajte 'Back' ako zelite da se vratite nazad: ");
        scanf("%s", sopcija);
        if(strcmp(sopcija, "Back")== 0){
        system("CLS");
        goto mitro;
    }
	}
    
     else if ( jslika == 50)
        {
        printf("\t\t\t\tJacina je vec na 50 %%.\n");
        printf("\t\t\t\tJacina svetlosti trenutno nije stetna.\n");
        printf("\t\t\t\tUkucajte 'Back' ako zelite da se vratite nazad: ");
        scanf("%s", sopcija);
        if(strcmp(sopcija, "Back")== 0)
        system("CLS");
        goto mitro;
    }
    
     else if ( jslika == 25)
        {
        printf("\t\t\t\tJacina je sada na 25 %%.\n");
        printf("\t\t\t\tJacina svetlosti trenutno nije stetna.\n");
        printf("\t\t\t\tUkucajte 'Back' ako zelite da se vratite nazad: ");
        scanf("%s", sopcija);
        if(strcmp(sopcija, "Back")== 0)
        system("CLS");
        goto mitro;
    }
    
     else if ( jslika == 0)
        {
        printf("\t\t\t\tJacina je sada na 0 %%.\n");
        printf("\t\t\t\tJacina svetlosti trenutno nije stetna.\n");
        printf("\t\t\t\tUkucajte 'Back' ako zelite da se vratite nazad: ");
        scanf("%s", sopcija);
        if(strcmp(sopcija, "Back")== 0)
        system("CLS");
        goto mitro;
    }
    
    
        
 
    }
    if(strcmp(opcija,"Back")== 0){
    	system("CLS");
		goto odabir;
	}
 else
     {
            printf("\t\t________________________________________________________________\n\n");
        printf("\t\t\t\tIzabrali ste nepostojecu funkciju.");
        Sleep(1000);
        system("CLS");
        goto mitro;
		}
		}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------//		
		// MAIL
		else if(odabir == 2){
		char regorlog[30];
	system("CLS");
	printf("Dobrodosli!\n");
	printf("Da li zelite da se registrujete ili prijavite?\nUkucajte 'register' za register ili 'login' za prijavu.\n");
	printf("\n");
	scanf("%s",&regorlog);
	if(strcmp(regorlog,"register")==0){
		system("CLS");
	int opcija;
	int opcija1;
	int nazad;
	char c;
	char username[12];
	char usernamechange[12];
	char passwordchange[12];
	char password[12];
	char usernamen[12];
	char passwordn[12];
	char email[50];
	char poruka[50];
	char back[50];
	printf("Unesite vase korisnicko ime: ");
	scanf("%s",&username);
	printf("Unesite vasu sifru: ");
	scanf("%s",&password);
	printf("Uspesno ste se registrovali, molimo vas sada se prijavite.\n");
	printf("\n");
	printf("Unesite vase korisnicko ime: ");
	scanf("%s",&usernamen);
	printf("Unesite vasu sifru: ");
	scanf("%s",&passwordn);
	if(strcmp(username,usernamen)==0 && strcmp(password,passwordn)==0){
	FILE * fpointer = fopen("accounts.txt", "a");
	fprintf(fpointer, "Username: %s, Password: %s \n",usernamen,passwordn);
	fclose(fpointer);
		printf("\n");
		system("CLS");
		printf("Uspesno ste se prijavili.");
		opcija:
			system("CLS");
		printf("\nOd ponudjenih opcija imate:\n");
		printf("1 - Podesavanje naloga\n2 - Posaljite Mail\n3 - Izadjite iz Programa\n4 - Vratite se nazad");
		printf("\n");
		printf("\nOdaberite zeljenu opciju: ");
		scanf("%d",&opcija); 
		if (opcija == 1){
		system("CLS");
		printf("Odabrali ste opciju pod nazivom 'Podesavanje naloga'.\n");
		printf("\n");
		printf("Od ponudjenih opcija imate:\n");
		printf("1 - Provera podataka\n2 - Promena korisnickog imena\n3 - Promena loznike\n");
		printf("\n");
		scanf("%d",&opcija1);
		if (opcija1 == 1){
			system("CLS");
			printf("Odabrali ste opciju pod nazivom 'Provera podataka.'\n");
			printf("\nVase korisnicko ime je: %s\nVasa lozinka je: %s",username,password);
			printf("\n");
			printf("\nDa li zelite da se vratite u postavke, ili da izadjete iz programa?\nUnesite 1 - za vracanje u postavke, 2 - za izlazak iz programa\n");
			printf("\n");
			scanf("%d",&nazad);
			if(nazad == 1){
				system("CLS");
				goto opcija;
			}
			if(nazad == 2){
				printf("Odabrali ste opciju izazak iz programa.");
				exit(0);
			}
		}
		if (opcija1 == 2){
			system("CLS");
		printf("Odabrali ste opciju za promenu korisnickog imena.\n");
		promenaimena:
		printf("Unesite vase staro korisnicko ime: ");
		scanf("%s",&usernamen);
		if(strcmp(username,usernamen)!= 0){
		printf("Uneli ste pogresno staro korisnicko ime.\n");
		exit(0);
	}
		printf("Unesite vase novo korisnicko ime: ");
		scanf("%s",&usernamechange);
		if(strcmp(usernamen,usernamechange)== 0){
			printf("\n");
			printf("Ne mozete promeniti korisnicko ime u isto koje je i sada, pokusajte ponovo.");
			Sleep(780);
			system("CLS");
			goto promenaimena;
		} 
		else {
		system("CLS");
		printf("Vase novo korisnicko ime je sada: %s",usernamechange);
		}
	}
	 	if (opcija1 == 3){
	 		system("CLS");
			printf("Odabrali ste opciju za promenu lozinke.\n");
			promenasifre:
			printf("Unesite vasu staru lozinku: ");
			scanf("%s",&passwordn);
			if(strcmp(password,passwordn)!= 0){
			printf("Uneli ste netacnu staru lozinku.");
			exit(0);
		}
			printf("Unesite novu lozinku: ");
			scanf("%s",&passwordchange);
			if(strcmp(password,passwordchange)== 0){
				printf("\n");
			printf("Ne mozete promeniti lozinku u istu koja vam je i sada.");
			Sleep(780);
			system("CLS");
			goto promenasifre;
		}
		else {
			system("CLS");
			printf("Vasa nova lozinka je sada: %s",passwordchange);
			printf("\n");
		}
		}
		if (opcija1 >= 4){
			printf("Uneli ste nepostojecu opciju.");
		}
	}
	else if (opcija == 2){
		system("CLS");
		printf("Odabrali ste opciju da posaljete mail.");
		printf("\nUnesite e-mail adresu na koju zelite da posaljete mail:");
		scanf("%s",email);
		printf("Unesite poruku koju zelite da posaljete na dati email: ",poruka);
		scanf(" %[^\n]%*c",poruka);
		printf("\n");
		printf("Uspesno ste poslali poruku: %s, na dati mail %s",poruka,email);
		printf("\n");
		printf("\nUkoliko zelite da se vratite nazad u podesavanja ukucajte 'Back'.\n");
		scanf("%s",&back);
		if(strcmp(back,"Back")== 0){
			goto opcija;
		}
	}
	else if(opcija == 3){
		system("CLS");
		printf("Odabrali ste opciju izlazak iz programa.");
		exit(0);
	}
	else if(opcija == 4){
		system("CLS");
		goto odabir;
	}
	if (opcija >= 5){
		printf("Uneli ste nepostojecu opciju.");
	}
}
	if(strcmp(username,usernamen)!=0){
 	system("CLS");
 	printf("Uneli ste netacno korisnicko ime.");
 }
	if (strcmp(password,passwordn)!=0) {
	system("CLS");
	printf("Uneli ste netacnu sifru.");
	}
}
	else if (strcmp(regorlog, "login")== 0){
		system("CLS");
	char l[50];
	char username[12];
	char passwordn[12];
	char usernamen[12];
	char usernamechange[12];
	char passwordchange[12];
	int opcija;
	int opcija1;
	int nazad;
	char password[12];
	char c;
	char email[50];
	char poruka[50];
	char back[50];
	printf("Unesite vase korisnicko ime: ");
	scanf("%s",&username);
	printf("Unesite vasu sifru: ");
	scanf("%s",&password);
	system("CLS");
	printf("Uspesna prijava, dobrodosli %s.",username);
	printf("\n");
	opcijaopet:
		system("CLS");
	printf("\nOd ponudjenih opcija imate:\n");
	printf("1 - Podesavanje naloga\n2 - Posaljite Mail\n3 - Izlazak iz programa\n4 - Vratite se nazad");
	printf("\n");
	printf("\nOdaberite zeljenu opciju: ");
	scanf("%d",&opcija); 
		if (opcija == 1){
		system("CLS");
		printf("Odabrali ste opciju pod nazivom 'Podesavanje naloga'.\n");
		printf("\n");
		printf("Od ponudjenih opcija imate:\n");
		printf("1 - Provera podataka\n2 - Promena korisnickog imena\n3 - Promena loznike\n");
		printf("\n");
		scanf("%d",&opcija1);
		if (opcija1 == 1){
			system("CLS");
			printf("Odabrali ste opciju pod nazivom 'Provera podataka.'\n");
			printf("\nVase korisnicko ime je: %s\nVasa lozinka je: %s",username,password);
			printf("\n");
			printf("\nDa li zelite da se vratite u postavke, ili da izadjete iz programa?\nUnesite 1 - za vracanje u postavke, 2 - za izlazak iz programa\n");
			printf("\n");
			scanf("%d",&nazad);
			if(nazad == 1){
				system("CLS");
				goto opcijaopet;
			}
			if(nazad == 2){
				printf("Odabrali ste opciju izazak iz programa.");
				exit(0);
			}
		}
		else if(opcija1 == 2){
			system("CLS");
		printf("Odabrali ste opciju za promenu korisnickog imena.\n");
		promenaimena1:
		printf("Unesite vase staro korisnicko ime: ");
		scanf("%s",&usernamen);
		if(strcmp(username,usernamen)!= 0){
		printf("Uneli ste pogresno staro korisnicko ime.");
		exit(0);
	}
		printf("Unesite vase novo korisnicko ime: ");
		scanf("%s",&usernamechange);
		if(strcmp(usernamen,usernamechange)== 0){
			printf("Ne mozete promeniti korisnicko ime u isto koje je i sada, pokusajte ponovo.");
			Sleep(780);
			system("CLS");
			goto promenaimena1;
		} 
		else {
		system("CLS");
		printf("Vase novo korisnicko ime je sada: %s",usernamechange);
		}
	}
	 	else if (opcija1 == 3){
	 		system("CLS");
		printf("Odabrali ste opciju za promenu lozinke.\n");
		promenasifre1:
		printf("Unesite vasu staru lozinku: ");
		scanf("%s",&passwordn);
		if(strcmp(passwordn,password)!= 0){
			printf("Uneli ste netacnu staru lozinku.");
			exit(0);
		}
		printf("Unesite novu lozinku: ");
		scanf("%s",&passwordchange);
		if(strcmp(password,passwordchange)== 0){
			printf("Ne mozete promeniti lozinku u istu koja vam je i sada, pokusajte ponovo.");
			Sleep(780);
			system("CLS");
			goto promenasifre1;
		}
		else {
			system("CLS");
			printf("Vasa nova lozinka je sada: %s",passwordchange);
		}
	}
		else {
			printf("Odabrali ste nepostojecu opciju.");
		}
	}
	else if (opcija == 2){
		system("CLS");
		printf("Odabrali ste opciju da posaljete mail.");
		printf("\nUnesite e-mail adresu na koju zelite da posaljete mail:");
		scanf("%s",email);
		printf("Unesite poruku koju zelite da posaljete na dati email: ",poruka);
		scanf(" %[^\n]%*c",poruka);
		printf("\n");
		printf("Uspesno ste poslali poruku: %s, na dati mail %s",poruka,email);
		printf("\n");
		printf("\nUkoliko zelite da se vratite nazad u podesavanja ukucajte 'Back'.\n");
		scanf("%s",&back);
		if(strcmp(back,"Back")== 0){
			goto opcijaopet;
	}
}
	else if(opcija == 3){
		system("CLS");
		printf("Odabrali ste opciju izlazak iz programa.");
		exit(0);
	}
	else if(opcija == 4){
		system("CLS");
		goto odabir;
	}
	else {
		printf("Odabrali ste nepostojecu opciju.");
	}
	}
	else {
		printf("Izabrali ste nepostojecu opciju.");
	} 
	}
//---------------------------------------//
 	else if(odabir2 == 5){
 		system("CLS");
 		goto odabir;
	 }
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
// Beleske	
	else if(odabir == 6){
		int odabirtalib, odabirtalib1, odabirtalib2;
    char beleska1[10000];
    char beleska2[10000];
    char beleska3[10000];
    FILE * beleska = fopen("beleska.txt", "w");
 
    
    
    pocetak:
    system("cls");
    printf("\t\t\t\t _______________________\n");
    printf("\t\t\t\t(  --      (O)       -- )\n");
    printf("\t\t\t\t(_______________________)\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t|   1.Napravi belesku   |\n");
    printf("\t\t\t\t|   2.Pogledaj belesku  |\n");
    printf("\t\t\t\t|   3.Izadji            |\n");
    printf("\t\t\t\t|   4.Vrati se nazad    |\n"); 
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t|                       |\n");
    printf("\t\t\t\t(___    ___( )___    ___)\n"); 
    printf("\t\t\t\t(_______________________)\n");
 
    printf("\t\t\t\tOdaberi: ");
    scanf("%d",&odabirtalib);
    
    if (odabirtalib == 1)
    {
        system("cls");
        printf("Beleska: ");
        scanf(" %[^\n]%*c",beleska1);
 
        
        fprintf(beleska, "beleska 1: %s", beleska1);
        
 
        
        
        system("cls");
        printf("\t\t\t\t _______________________\n");
        printf("\t\t\t\t(  --      (O)       -- )\n");
        printf("\t\t\t\t(_______________________)\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|Ucitavanje             |\n"); 
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t(___    ___( )___    ___)\n"); 
        printf("\t\t\t\t(_______________________)\n");
 
        sleep(1);
 
        system("cls");
        printf("\t\t\t\t _______________________\n");
        printf("\t\t\t\t(  --      (O)       -- )\n");
        printf("\t\t\t\t(_______________________)\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|Ucitavanje----         |\n"); 
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t(___    ___( )___    ___)\n"); 
        printf("\t\t\t\t(_______________________)\n");
 
        sleep(1);
 
        system("cls");
        printf("\t\t\t\t _______________________\n");
        printf("\t\t\t\t(  --      (O)       -- )\n");
        printf("\t\t\t\t(_______________________)\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|Ucitavanje--------     |\n"); 
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t(___    ___( )___    ___)\n"); 
        printf("\t\t\t\t(_______________________)\n");
 
        sleep(1);
 
        system("cls");
        printf("\t\t\t\t _______________________\n");
        printf("\t\t\t\t(  --      (O)       -- )\n");
        printf("\t\t\t\t(_______________________)\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|Ucitavanje------------ |\n"); 
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t(___    ___( )___    ___)\n"); 
        printf("\t\t\t\t(_______________________)\n");
 
        sleep(1);
 
        system("cls");
        printf("\t\t\t\t _______________________\n");
        printf("\t\t\t\t(  --      (O)       -- )\n");
        printf("\t\t\t\t(_______________________)\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|Ucitavanje-------------|\n"); 
        printf("\t\t\t\t|--------               |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t(___    ___( )___    ___)\n"); 
        printf("\t\t\t\t(_______________________)\n");
 
        sleep(1);
 
        system("cls");
        printf("\t\t\t\t _______________________\n");
        printf("\t\t\t\t(  --      (O)       -- )\n");
        printf("\t\t\t\t(_______________________)\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t| Beleska napravljena.  |\n"); 
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t(___    ___( )___    ___)\n"); 
        printf("\t\t\t\t(_______________________)\n");
 
        printf("\n\n\t\t\t\tbeleska: %s",beleska1);
        
 
        
        
    }
 
    else if (odabirtalib == 2)
    {
        printf("\nBeleska 1: %s ", beleska1);
        printf("\nBeleska 2: %s ", beleska2);
        printf("\nBeleska 3: %s ", beleska3);
    }
 
    else if (odabirtalib == 3)
    {
        printf("\t\t\t\tBye Bye...");
        return 0;
    }
	else if(odabirtalib == 4){
		goto odabir;
	} 
	else {
        printf("\nUneli ste nepostojeci broj.");
        sleep(1);
        system("cls");
        goto pocetak;
    }
 
    printf("\n\t\tSta zelite dalje: ");
    printf("\n1.Vrati me na pocetak.");
    printf("\n2.Zavrsi program.");
    printf("\n3.Napravi jos jednu belesku.");
    printf("\n4.Vrati se nazad.");
    printf("\nOdaberi: ");
    scanf("%d",&odabirtalib1);
 
    if(odabirtalib1 == 1)
    {
        goto pocetak;
    } 
    else if (odabirtalib1 == 2)
    {   
        printf("\t\t\t\tBye Bye...");
        return 0;
    }
	else if(odabirtalib1 == 4){
		goto odabir;
	} 
    else if (odabirtalib1 == 3)
    {
        system("cls");
        printf("Beleska: ");
        scanf(" %[^\n]%*c",beleska2);
 
        
        fprintf(beleska, "\n\nbeleska 2: %s", beleska2);
        system("cls");
        printf("\t\t\t\t _______________________\n");
        printf("\t\t\t\t(  --      (O)       -- )\n");
        printf("\t\t\t\t(_______________________)\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|Ucitavanje             |\n"); 
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t(___    ___( )___    ___)\n"); 
        printf("\t\t\t\t(_______________________)\n");
 
        sleep(1);
 
        system("cls");
        printf("\t\t\t\t _______________________\n");
        printf("\t\t\t\t(  --      (O)       -- )\n");
        printf("\t\t\t\t(_______________________)\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|Ucitavanje----         |\n"); 
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t(___    ___( )___    ___)\n"); 
        printf("\t\t\t\t(_______________________)\n");
 
        sleep(1);
 
        system("cls");
        printf("\t\t\t\t _______________________\n");
        printf("\t\t\t\t(  --      (O)       -- )\n");
        printf("\t\t\t\t(_______________________)\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|Ucitavanje--------     |\n"); 
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t(___    ___( )___    ___)\n"); 
        printf("\t\t\t\t(_______________________)\n");
 
        sleep(1);
 
        system("cls");
        printf("\t\t\t\t _______________________\n");
        printf("\t\t\t\t(  --      (O)       -- )\n");
        printf("\t\t\t\t(_______________________)\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|Ucitavanje------------ |\n"); 
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t(___    ___( )___    ___)\n"); 
        printf("\t\t\t\t(_______________________)\n");
 
        sleep(1);
 
        system("cls");
        printf("\t\t\t\t _______________________\n");
        printf("\t\t\t\t(  --      (O)       -- )\n");
        printf("\t\t\t\t(_______________________)\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|Ucitavanje-------------|\n"); 
        printf("\t\t\t\t|--------               |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t(___    ___( )___    ___)\n"); 
        printf("\t\t\t\t(_______________________)\n");
 
        sleep(1);
 
        system("cls");
        printf("\t\t\t\t _______________________\n");
        printf("\t\t\t\t(  --      (O)       -- )\n");
        printf("\t\t\t\t(_______________________)\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t| Beleska napravljena.  |\n"); 
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t(___    ___( )___    ___)\n"); 
        printf("\t\t\t\t(_______________________)\n");
 
        printf("\n\n\t\t\t\tbeleska: %s",beleska2);
        
        
    }
    printf("\n\t\tSta zelite dalje: ");
    printf("\n1.Vrati me na pocetak.");
    printf("\n2.Zavrsi program.");
    printf("\n3.Napravi jos jednu belesku.");
    printf("\n4.Vrati se nazad.");
    printf("\nOdaberi: ");
    scanf("%d",&odabirtalib2);
 
    if (odabirtalib2 == 1)
    {
        goto pocetak;
    } else if (odabirtalib2 == 2)
    {
        printf("Bye Bye...");
        return 0;
    }
	else if(odabirtalib2 == 4){
		goto odabir;
	} 
	else if (odabirtalib2 == 3)
    {
        system("cls");
        printf("Beleska: ");
        scanf(" %[^\n]%*c",beleska3);
 
        
        fprintf(beleska, "\n\nbeleska 3: %s", beleska3);
        system("cls");
        printf("\t\t\t\t _______________________\n");
        printf("\t\t\t\t(  --      (O)       -- )\n");
        printf("\t\t\t\t(_______________________)\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|Ucitavanje             |\n"); 
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t(___    ___( )___    ___)\n"); 
        printf("\t\t\t\t(_______________________)\n");
 
        sleep(1);
 
        system("cls");
        printf("\t\t\t\t _______________________\n");
        printf("\t\t\t\t(  --      (O)       -- )\n");
        printf("\t\t\t\t(_______________________)\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|Ucitavanje----         |\n"); 
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t(___    ___( )___    ___)\n"); 
        printf("\t\t\t\t(_______________________)\n");
 
        sleep(1);
 
        system("cls");
        printf("\t\t\t\t _______________________\n");
        printf("\t\t\t\t(  --      (O)       -- )\n");
        printf("\t\t\t\t(_______________________)\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|Ucitavanje--------     |\n"); 
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t(___    ___( )___    ___)\n"); 
        printf("\t\t\t\t(_______________________)\n");
 
        sleep(1);
 
        system("cls");
        printf("\t\t\t\t _______________________\n");
        printf("\t\t\t\t(  --      (O)       -- )\n");
        printf("\t\t\t\t(_______________________)\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|Ucitavanje------------ |\n"); 
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t(___    ___( )___    ___)\n"); 
        printf("\t\t\t\t(_______________________)\n");
 
        sleep(1);
 
        system("cls");
        printf("\t\t\t\t _______________________\n");
        printf("\t\t\t\t(  --      (O)       -- )\n");
        printf("\t\t\t\t(_______________________)\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|Ucitavanje-------------|\n"); 
        printf("\t\t\t\t|--------               |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t(___    ___( )___    ___)\n"); 
        printf("\t\t\t\t(_______________________)\n");
 
        sleep(1);
 
        system("cls");
        printf("\t\t\t\t _______________________\n");
        printf("\t\t\t\t(  --      (O)       -- )\n");
        printf("\t\t\t\t(_______________________)\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t| Beleska napravljena.  |\n"); 
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t|                       |\n");
        printf("\t\t\t\t(___    ___( )___    ___)\n"); 
        printf("\t\t\t\t(_______________________)\n");
 
        printf("\n\n\t\t\t\tbeleska 3n: %s",beleska3);
        fclose(beleska);
        
        sleep(3);
        printf("\n\t\tSada cete se vratiti na pocetak...");
        printf("\n\t\tMaximum 3 beleske mozete napraviti.");
        sleep(5);
        system("cls");
 
        goto pocetak;
    }
    
 
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
//vreme
	else if(odabir == 9){
	int nazad1;
    time_t t;
    t = time(NULL);
    struct tm tm;
	tm = *localtime(&t);
    printf("\t\t\t\tTrenutno vreme: %d:%d:%d", tm.tm_hour, tm.tm_min, tm.tm_sec);
    printf("\n\tUkoliko zelite da se vratite nazad, pritisnite 1, a ukoliko zelite da izadjete pritisnite 2:\n\t");
    scanf("%d",&nazad1);
    if(nazad1 == 1){
    	system("CLS");
    	printf("\tOdabrali ste opciju da se vratite nazad.");
    	goto odabir;
	}
	else if(nazad1 == 2){
		printf("Odabrali ste opciju izlazak iz programa.");
		exit(0);
	}
	else {
		printf("Izabrali ste nepostojecu opciju.");
	}
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
	//Biografija
	else if(odabir == 3){
		char bidibou[1000];   
 
	printf("Dobrodosli u pretrazivac. \nNAPOMENA - Pretraga mora biti gramaticki ispravna!");
 	opet:
	printf("\n\n\t\t\t\t\tPretrazite:");
	scanf(" %[^\n]%*c",bidibou);
 
	if(strcmp(bidibou, "Dzastin Biber") == 0 ) {
  	    printf("\nDzastin Biber je rodjen 1. januara 1990. godine. Poznati je pop pevac i tekstopisac. Svetsku slavu je stekao putem internetskog portala YouTube, gde je postavljao svoje kovere pesama drugih izvodjaca, poput Alisije Kejs, Dzastina Timberlejka i Krisa Brauna. Nakon sto ga je otkrio njegov sadasnji menadzer Skuter Braun, Dzastin je potpisao ugovor sa diskografskom kucom Island Records uz veliku pomoc muzicara Usera.");
    }
 
	else if(strcmp(bidibou, "Ilon Mask") == 0 ) {
  	    printf("\nIlon Mask je juznoafricki i americki preduzetnik i inzenjer, jedan od najbogatijih ljudi na svetu. Rodjen je 28. juna 1971. godine u Pretoriji, u Juznoafrickoj Republici. Zivi u Los Andjelesu, SAD. Direktor je kompanije Tesla koja se bavi proizvodnjom elektricnih automobila, a takodje je osnivac, izvrsni i tehnicki direktor SpaceX-a, privatne kompanije koja se bavi izradom svemirskih letelica i svemirskim letovima.");
    }
 
	else if(strcmp(bidibou, "Bil Gejts") == 0 ) {
  	    printf("\nWilliam Henry Bill Gates III (rodjen 28. 10. 1955.) americki je biznismen, filantrop, investitor i racunarski programer. Zajedno s Paulom Alenom 1975., osnovao je kompaniju Microsoft, koja je postala najveca kompaniju racunarskog softvera na svetu. Tokom svoje karijere u Microsoftu, Gates je obavljao duznost predsednika upravnog odbora, predsednika kompanije i glavnog softverskog arhitekte, te je posedovao najvise Microsoftovih deonica sve do marta 2014. Takodje je autor i koautor nekolicine knjiga.");
    }
 
	else if(strcmp(bidibou, "Selena Gomez") == 0 ) {
  	    printf("\nSelena Marie Gomez (Grand Prairie, Teksas, SAD, 22. februara 1992.) nazivana Pop princeza , americka je pevacica, glumica, dizajnerka, producentkinja i tekstopisac meksickog i italijanskog porekla. Svetsku slavu stekla je objavom Kiss & Tell albuma sa svojom grupom Selena Gomez & The Scene. Grupa je objavila tri studijska albuma: Kiss & Tell , A Year Without Rain, te When The Sun Goes Down. Glumacku karijeru stekla je u ulozi Alex Russo u Emmyjem nagradjenoj Disneyevoj seriji Wizards of Waverly Place. ");
    }
 
	else if(strcmp(bidibou, "Kendal Dzener") == 0) {
    	printf("\nKendall Nicole Jenner (Los Andjeles, 3. januara 1995.) je americka manekenka i javna licnost. Cerka je Kris Jenner i Caitlyn Jenner, a postala je poznata po reality-u Show Keeping Up with the Kardashians. Sa 14 godina se krenula baviti modelingom, a saradjivala je sa poznatim high-fashion modnim brendovima, te ucestvovala na nedeljama mode u New Yorku, Parizu i Londonu. Ona je brend ambasador marke Estee Lauder.");
	 }
 
	else if(strcmp(bidibou, "Ariana Grande") == 0) {
    	printf("\nAriana Grande je americka pevacica, tekstopisac i glumica. Rodjena je 26. juna 1993. godine u Boki Raton, na Floridi. Karijeru je zapocela 2008. godine, u brodvejskom mjuziklu 13. Posle toga se proslavila u Nickelodeon seriji Victorious kao i u obradi Sam & Cat. Muzicku karijeru zapocela je 2011. godine, nakon sto je napisala muziku za Victorious. Od tada je izdala sest albuma koji su dospeli na prvo mesto Billboard 200 lestvice.");
	}
 
	else if(strcmp(bidibou, "Vladimir Putin") == 0) {
    	printf("\nVladimir Vladimirovic Putin je ruski politicar, drzavnik i aktuelni predsednik Ruske Federacije. Vazi za jednog od vodecih lidera na pocetku treceg milenijuma. Rodjen je 7. oktobra 1952. godine u Lenjingradu, sadasnjem Sankt Peterburgu.Vladimirovi roditelji su bili Marija Ivanovna Putina koja je radila u fabrici i Vladimir Spiridonovic Putin, koji je bio vojni obveznik u sovjetskoj mornarici gde je sluzio u podmornickoj floti i u NKVD, bivsoj tajnoj policiji Sovjetskog Saveza.");
	}
 
	else if(strcmp(bidibou, "Nikola Tesla") == 0) {
    	printf("\nNikola Tesla bio je veliki srpski izumitelj i vizionar, elektrotehnicar i fizicar. U svetu znanstvenika Teslu je pratila reputacija samotnjaka i ekscentrika. Nikola Tesla se danas smatra jednim od najvecih genija na podrucju elektrotehnike. Nikola Tesla umro je 7.1.1943. godine u 87. godini zivota u hotelu New Yorker u New Yorku.");
	}
 
    else if(strcmp(bidibou, "Jovan Cvijic") == 0) {
    	printf("\nJovan Cvijic (Loznica, 11. oktobar 1865 — Beograd, 16. januar 1927) bio je srpski naucnik, osnivac Srpskog geografskog drustva, predsednik Srpske kraljevske akademije, profesor i rektor Beogradskog univerziteta, pocasni doktor Univerziteta Sorbone i Karlovog univerziteta u Pragu. Od osnivanja Beogradskog univerziteta 12. oktobra 1905, postao je jedan od osam prvih redovnih profesora na Univerzitetu.");
	}
 
    else if(strcmp(bidibou, "Novak Djokovic") == 0) {
    	printf("\nNovak Djokovic (Beograd, 22. maj 1987) srpski je profesionalni teniser. Na prvom mestu ATP liste je proveo 351 nedelju sto je najduži period u istoriji otvorene ere. Mnogi teniski kriticari, bivsi igraci i saigraci smatraju Djokovica jednim od najboljih tenisera u istoriji. Profesionalno igra od 2003. godine. U dosadasnjoj karijeri je osvojio 20 titula na grend slem turnirima: devet puta Otvoreno prvenstvo Australije, sest puta Vimbldon, tri puta Otvoreno prvenstvo SAD i dva puta Rolan Garos.");
	}
 
    else if(strcmp(bidibou, "Saban Saulic") == 0) {
    	printf("\nSaban Saulic je rodjen 6. septembra 1951. u Sapcu. Njegova majka Ilduza Demirovic je iz Bijeljine, gde je on i sam proveo dosta vremena. Saulic je ziveo i radio u Beogradu. Sa svojom suprugom Gordanom je imao troje dece — Sanelu, Ildu i Mihajla, kao i vanbracnog sina Roberta, kojeg je dobio pre poznanstva sa Gordanom. Omiljeni hobiji su mu bili pecanje u svojoj vikendici u Krcedinu i fudbal.");
	}
 
	else if(strcmp(bidibou, "Sasa Matic") == 0) {
    	printf("\nAleksandar Matic rodjen je 1978. godine u Drvaru gdje je odrastao s bratom Dejanom, majkom Dragicom i ocem Zoranom. U dobi od 7 godina, 1985. godine, s porodicom napusta rodno mesto i odlazi u Beograd. Nizu i srednju muzicku skolu je zavrsio u Zemunu. Tri godine je pevao u klubu Spanac, koji se nalazi u okviru Studentskog grada, u Novom Beogradu. Tada je bio popularan po idealnom interpretiranju pesama Harisa Dzinovica. Prvi album je objavio 15. marta 2001. godine i odmah je stekao siroku popularnost. Pobedjuje na Budvanskom festivalu 2003. i na prvom Grand festivalu 2006. godine.");
	}
 
	else if(strcmp(bidibou, "Isak Njutn")==0) {
		printf("\nIsak Njutn (Isaac Newton) je bio engleski matematicar, fizicar, astronom, jedna od najvaznijih licnosti u istoriji nauke i kljucna figura u naucnoj revoluciji. Njegova „Philosophic Naturalis Principia Mathematica“ objavljena 1687. godine smatra se najznacajnijim delom u istoriji moderne nauke koja se ne moze zamisliti bez njegovih otkrica.");
	}
 
	else if(strcmp(bidibou, "Albert Ajnstajn")==0) {
		printf("\nAlbert Ajnštajn je bio teorijski fizicar. Vazi za jednog od najznacajnijih svetskih naucnika i najvecih naucnika XX veka. Roden je 14. marta 1879. godine u nemackom gradu Ulmu, a umro je 18. aprila 1955. godine u Prinstonu, SAD. Definisao je specijalnu i opstu teoriju relativnosti, a pomogao je i pri razvoju kvantne fizike. 1921. godine je dobio Nobelovu nagradu za formulisanje i objasnjenje fotoelektricnog efekta.");
	}
 
	else if(strcmp(bidibou, "Elvis Prisli")==0) {
		printf("\nElvis Aaron Presley (East Tupelo, 8. mart 1935), americki pevac. Cesto je nazivan kraljem rok en rola ili samo Kraljem, jos za zivota legenda i neokrunjeni kralj rok en rola. U javnosti je poceo pevati s 13 godina na crkvenim svecanostima i srednjoskolskim priredbama u Memfisu. S 18 godina je napustio skolu i pozeleo raditi kao portir u bioskopu i kao vozac kamiona. Prvu pesmu snimio je kao rodjendanski poklon majci. Prvu plocu snimio je 1954. godine. Njegov uzlet zapocinje sredinom 50-ih godina hitovima - That s All Right Mama i Heartbreak Hotel, a najuspjesnije mu je razdoblje od 1960. do 1975. godine u kojem je izdao 52 ploce i jos za zivota ih prodaje oko 600 milionna komada.");	
	}	
 
	else if(strcmp(bidibou, "Majkl Dzekson")==0) {
		printf("\nMajkl Džozef Džekson (engl. Michael Joseph Jackson; 29. avgust 1958) je bio americki muzicar, zabavljac i biznismen. Osmo je dete porodice Dzekson. Debitovao je na profesionalnoj muzickoj sceni sa jedanaest godina kao clan grupe Dzekson 5. Solo karijeru je zapoceo 1971., dok je jos uvek bio clan grupe. U kasnijim godinama u javnosti se cesto nazivao Kraljem popa. Pet njegovih solo studijskih albuma su jedni od najprodavanijih muzickih materijala na svetu.");		
	}
 
	else if(strcmp(bidibou, "Tejlor Svift")==0) {
		printf("\nTejlor Alison Svift (Taylor Alison Swift) je americka kantri i pop pevacica. Ubrajaju je medju najuticajnije mlade zvezde, a magazin 'Tajm' (Time) je proglasio jednom od osoba 2017. godine zbog njene borbe protiv seksualnog uznemiravanja. Vecinu pesama koje izvodi je sama i napisala, svira gitaru, klavir, bendzo i ukelele, a okusala se i u glumackim vodama. Debitantski album je izdala sa samo 16 godina i jedina je zena koja je dve godine zaredom osvojila nagradu Gremi (Grammy) u kategoriji album godine.");		
	}
 
    else if(strcmp(bidibou, "Dzenifer Lopez")==0) {
		printf("\nJennifer Lynn (Lin) Lopez je americka pop pevacica i glumica. Rodena je 24. jula 1969. godine u Njujorku. Zivi i radi u Los Andelesu. Karijeru je pocela graditi 1991. godine, kada je dobila ulogu u filmu - In Living Color. Prvu glavnu ulogu dobila je 1997. godine, kada je igrala Selenu u istoimenom filmu. Za to ostvarenje dobila je nominaciju za Zlatni globus, a postala je i prva Latino-Amerikanka koja je zaradila preko milion dolara u nekom filmu. Krajem devedesetih postala je jedna od najplacenijih glumica u Holivudu.");	
	}
 
    else if(strcmp(bidibou, "Lepa Brena")==0) {
		printf("\nFahreta Jahic zivojinovic, poznatija kao Lepa Brena, je jedna od najpoznatijih jugoslovenskih pevacica. Rodjena je 20. oktobra 1960. godine u Tuzli. Odrasla je u Brckom, a otac Abid i majka Ifeta su joj omogucili skromno i bezbrizno detinjstvo. Lepa Brena ima sestru Faketu i brata Faruka.");	
	}
 
    else if(strcmp(bidibou, "Mark Cukenberg")==0) {
		printf("\nMark Zuckerberg rodjen je 1984. godine u White Plainsu, u New Yorku, u porodici majke psihijatarke i oca stomatologa, te jos dve sestre s kojima se doselio u Dobbs Ferry. Mark je odgojen u zidovskom duhu sve do 13 godine zivota kad je izjavio kako je tada sebe poceo dozivljavati kao ateista, a ne kao vernika.");	
	}
 
	else if(strcmp(bidibou, "Kim Dzong Un")==0) {
		printf("\nKim Jong-un (8. juna 1982. ili 1983.) severnokorejski je politicar i vrhovni vodja Severne Koreje od 2011. Vodja je Radnicke partije Koreje od 2012. Drugo je dete Kim Jong-ila, drugog vrhovnog vodje Severne Koreje od 1994. do 2011. Unuk je Kim Il-Sunga, osnivaca i prvog vrhovnog vode Severne Koreje od 1948. do smrti 1994. Dana 24. februara 2011. godine postao je marsal, i vrhovni zapovednik vojske, a dva dana posle, 26. marta, postao je predsednik Centralnog komiteta Radnicke partije Koreje.");	
	}
 
	else if(strcmp(bidibou, "Kim Dzong un")==0) {
		printf("\nKim Jong-un (8. juna 1982. ili 1983.) severnokorejski je politicar i vrhovni vodja Severne Koreje od 2011. Vodja je Radnicke partije Koreje od 2012. Drugo je dete Kim Jong-ila, drugog vrhovnog vodje Severne Koreje od 1994. do 2011. Unuk je Kim Il-Sunga, osnivaca i prvog vrhovnog vode Severne Koreje od 1948. do smrti 1994. Dana 24. februara 2011. godine postao je marsal, i vrhovni zapovednik vojske, a dva dana posle, 26. marta, postao je predsednik Centralnog komiteta Radnicke partije Koreje.");	
	}
 
    else if(strcmp(bidibou, "Angela Merkel")==0) {
		printf("\nAngela Dorotea Merkel (nem. Angela Dorothea Merkel), rodjena kao Angela Dorotea Kazner, (nem. Angela Dorothea Kasner; Hamburg, 17. jul 1954) je bivsa kancelarka Nemacke. Clanica je Hriscansko-demokratske unije, od koje je nominovana na mesto kancelara SR Nemacke na izborima za Bundestag 2005. godine. Nakon visesedmicnog pregovaranja po zavrsetku izbora, Angela Merkel 22. novembra 2005. postaje prva kancelarka u istoriji Nemacke. Na celu je tzv. 'Velike koalicije' CDU/CSU i SPD. Uspesno posredujuci u pregovorima oko budžeta EU, Merkelova je stekla zavidnu reputaciju na medjunarodnoj sceni. Koalicija koju je vodila Angela Merkel je pobedila i na izborima 2009. godine i na izborima 2013. godine.");	
	}
 
    else if(strcmp(bidibou, "Nikola Jokic")==0) {
		printf("\nNikola Jokic (Sombor, 19. februar 1995) srpski je kosarkas. Igra na poziciji centra, a trenutno nastupa za Denver Nagetse. Prvi je Srbin koji je proglasen za najkorisnijeg igraca NBA lige. Nagradu za najboljeg kosarkasa najjace lige na svetu je dobio u sezoni 2020/21. Tri sezone je nastupao za Mega Leks i proglašen je za najkorisnijeg igraca Jadranske lige. Izabran je u drugom krugu NBA drafta 2014. kao 41. pik od strane Denver Nagetsa sa kojima je u julu 2015. potpisao ugovor. Kosarkaski savez Srbije dodelio je Jokicu nagradu za najboljeg srpskog kosarkasa u 2018. godini. Godine 2019. izabran je prvi put da igra na Ol-star utakmici. Kao lider franšize, izborio je doigravanje u sezoni 2018/19 i posle deset godina Denver je prosao prvu rundu doigravanja. Iste sezone je izabran u najbolju petorku NBA lige, a po drugi put je izabran u idealnu petorku u sezoni 2020/21.");	
	}
 
    else if(strcmp(bidibou, "Bogdan Bogdanovic")==0) {
		printf("\nBogdan Bogdanovic (Beograd, 18. avgust 1992) srpski je kosarkas. Igra na poziciji beka, a trenutno nastupa za Atlanta Hokse. Proglasen je za Evroliginu zvezdu u usponu dva puta uzastopno - 2014. i 2015. Osvojio je Evroligu sa Fenerbahceom 2017. godine i uvrsten je u idealni tim Evrolige. Standardan je clan seniorske reprezentacije Srbije, jedan je od vodecih igraca i sa reprezentacijom je osvajao medalje na skoro svim takmicenjima.");	
	}
 
	else if(strcmp(bidibou, "Leonardo Dikaprio")==0) {
		printf("\nLeonardo Vilhelm Dikaprio (Leonardo Wilhelm DiCaprio Los Andjeles, 11. novembra 1974.), americki je glumac i producent. Pet puta je nominovan za nagradu Oskar, za najboljeg glumca u glavnoj ulozi u filmovima Avijaticar (2004), Krvavi dijamant (2006), Vuk sa Vol Strita (2013) i Povratnik (2016), za koji je i dobio ovu nagradu. Takodje, bio je nominovan i za najboljeg glumca u sporednoj ulozi u filmu 'Sta izjeda Gilberta Grejpa' (1994), cetiri puta za nagradu BAFTA, a jedanaest puta za nagradu Zlatni globus. Dobitnik je nagrade BAFTA za najboljeg glumca u glavnoj ulozi za ulogu Hju Glasa u filmu Povratnik (2016). Takodje je dobitnik i tri Zlatna globusa – za najboljeg glavnog glumca u drami za ulogu Hauarda Hjuza u filmu Avijaticar (2004), za najboljeg glavnog glumca u komediji ili mjuziklu za ulogu Dzordana Belforta u filmu Vuk sa Vol Strita (2013) i za najboljeg glavnog glumca u drami za ulogu Hju Glasa u filmu Povratnik (2016). Takodje je bio nominovan za nagrade Satelit, Nagradu Udruzenja filmskih glumaca i Saturn.");	
	}
 
	else if(strcmp(bidibou, "Leonardo Di Kaprio")==0) {
		printf("\nLeonardo Vilhelm Dikaprio (Leonardo Wilhelm DiCaprio Los Andjeles, 11. novembra 1974.), americki je glumac i producent. Pet puta je nominovan za nagradu Oskar, za najboljeg glumca u glavnoj ulozi u filmovima Avijaticar (2004), Krvavi dijamant (2006), Vuk sa Vol Strita (2013) i Povratnik (2016), za koji je i dobio ovu nagradu. Takodje, bio je nominovan i za najboljeg glumca u sporednoj ulozi u filmu 'Sta izjeda Gilberta Grejpa' (1994), cetiri puta za nagradu BAFTA, a jedanaest puta za nagradu Zlatni globus. Dobitnik je nagrade BAFTA za najboljeg glumca u glavnoj ulozi za ulogu Hju Glasa u filmu Povratnik (2016). Takodje je dobitnik i tri Zlatna globusa – za najboljeg glavnog glumca u drami za ulogu Hauarda Hjuza u filmu Avijaticar (2004), za najboljeg glavnog glumca u komediji ili mjuziklu za ulogu Dzordana Belforta u filmu Vuk sa Vol Strita (2013) i za najboljeg glavnog glumca u drami za ulogu Hju Glasa u filmu Povratnik (2016). Takodje je bio nominovan za nagrade Satelit, Nagradu Udruzenja filmskih glumaca i Saturn.");	
	}
 
	else if(strcmp(bidibou, "Leonardo di Kaprio")==0) {
		printf("\nLeonardo Vilhelm Dikaprio (Leonardo Wilhelm DiCaprio Los Andjeles, 11. novembra 1974.), americki je glumac i producent. Pet puta je nominovan za nagradu Oskar, za najboljeg glumca u glavnoj ulozi u filmovima Avijaticar (2004), Krvavi dijamant (2006), Vuk sa Vol Strita (2013) i Povratnik (2016), za koji je i dobio ovu nagradu. Takodje, bio je nominovan i za najboljeg glumca u sporednoj ulozi u filmu 'Sta izjeda Gilberta Grejpa' (1994), cetiri puta za nagradu BAFTA, a jedanaest puta za nagradu Zlatni globus. Dobitnik je nagrade BAFTA za najboljeg glumca u glavnoj ulozi za ulogu Hju Glasa u filmu Povratnik (2016). Takodje je dobitnik i tri Zlatna globusa – za najboljeg glavnog glumca u drami za ulogu Hauarda Hjuza u filmu Avijaticar (2004), za najboljeg glavnog glumca u komediji ili mjuziklu za ulogu Dzordana Belforta u filmu Vuk sa Vol Strita (2013) i za najboljeg glavnog glumca u drami za ulogu Hju Glasa u filmu Povratnik (2016). Takodje je bio nominovan za nagrade Satelit, Nagradu Udruzenja filmskih glumaca i Saturn.");	
	}
 
	else if(strcmp(bidibou, "Leonardo da Vinci")==0) {
		printf("\nLeonardo di ser Pjero da Vinci (ital. Leonardo di ser Piero da Vinci, Vinci, 15. april 1452 — Amboaz, 2. maj 1519), poznat kao Leonardo da Vinci, bio je italijanski renesansni arhitekta, pronalazac, inženjer, vajar i slikar. („di ser Pjero” ovde znaci od oca ser Pjera, gde je ser kolokvijalna skracenica od Sinjor u Italiji srednjeg veka, i ukazuje da onaj koji je nosi obavlja profesiju javnog beležnika.) Smatran idealnim „renesansnim covekom” i univerzalnim genijem, Leonardo je siroj publici poznat po svojim remek-delima, Tajna vecera i Mona Liza, a njegove inzenjerske izume koji su vec u njegovo doba smatrani daleko ispred vremena i danas ponovo otkrivaju moderni inzenjeri i naucnici. Pomogao je razvoju anatomije, astronomije i gradjevinarstva.");	
	}
 
	else if(strcmp(bidibou, "Leonardo Da Vinci")==0) {
		printf("\nLeonardo di ser Pjero da Vinci (ital. Leonardo di ser Piero da Vinci, Vinci, 15. april 1452 — Amboaz, 2. maj 1519), poznat kao Leonardo da Vinci, bio je italijanski renesansni arhitekta, pronalazac, inženjer, vajar i slikar. („di ser Pjero” ovde znaci od oca ser Pjera, gde je ser kolokvijalna skracenica od Sinjor u Italiji srednjeg veka, i ukazuje da onaj koji je nosi obavlja profesiju javnog beležnika.) Smatran idealnim „renesansnim covekom” i univerzalnim genijem, Leonardo je siroj publici poznat po svojim remek-delima, Tajna vecera i Mona Liza, a njegove inzenjerske izume koji su vec u njegovo doba smatrani daleko ispred vremena i danas ponovo otkrivaju moderni inzenjeri i naucnici. Pomogao je razvoju anatomije, astronomije i gradjevinarstva.");	
	}
 
	else if(strcmp(bidibou, "Milena Dravic")==0) {
		printf("\nMilena Dravic (Beograd, 5. septembra 1940. – Beograd, 14. septembra 2018.), bila je srpska filmska i televizijska glumica. U karijeri koja je trajala 60 godina, Milena Dravic snimila je 90 filmova, a u vise od 50 ostvarila je glavne zenske uloge i osvojila brojne filmske nagrade. Glumom se pocela baviti jos kao srednjoskolka, kada je otkriva slovenski reziser Frantisek Cap s kojim snima svoj prvi film - Vrata ostaju otvorena (1959). Potom, u relativno kratkom vremenu, ostvaruje jos nekoliko filmskih uloga.");	
	}
 
	else if(strcmp(bidibou, "Mustafa Nadarevic")==0) {
		printf("\nMustafa Nadarevic (Banja Luka, 2. maj 1943 — Zagreb, 22. novembar 2020) bio je hrvatski i bosanskohercegovacki pozorisni i filmski glumac i reziser. Najpoznatiji po ulozi Izeta Fazlinovica, u seriji 'Lud zbunjen normalan', gde je tumacio glavnu musku ulogu. Nadarevic je diplomirao glumu na zagrebackoj Akademiji za kazalisnu umetnost, a pozorišnu karijeru zapoceo kao clan Zagrebackog kazalista mladih. Postao je stalni clan ansambla Hrvatskog narodnog kazalista u Zagrebu 1969. godine. Nadarevicu je dijagnostikovan rak pluca u januaru 2020. Umro je 22. novembra 2020. godine u svom domu u Zagrebu, zbog komplikacija iste bolesti.");	
	}
 
	else if(strcmp(bidibou, "Silvester Stalone")==0) {
		printf("\nMajkl Silvester Gardenzio Stalone (engl. Michael Sylvester Gardenzio Stallone; Njujork, 6. jul 1946) americki je filmski glumac, reziser i scenarista. Najpoznatiji je po filmskim serijalima Roki i Rambo. Svoju glumacku karijeru zapocinje u pornografskom filmu Zurka „Kod Kiti i pastuva” (engl. Party at Kitty and Stud's), 1970. godine. Kasnije dobija malu ulogu sa Vudijem Alenom u filmu Banane (engl. Bananas; 1971). Posle toga dobija jos nekoliko manjih filmskih uloga, a kasnije se pojavljuje kao gost u TV serijama Policijska prica (engl. Police Story) i Kodzak (engl. Kojak). Filmsku slavu stice 1976. godine ulogom boksera u velikim filmskom hitu Roki (engl. Rocky).");	
	}
 
	else if(strcmp(bidibou, "Andzelina Dzoli")==0) {
	printf("\nAndželina Džoli Vojt (engl. Angelina Jolie Voight 4. jun 1975) americka je filmska i televizijska glumica, reditelj, manekenka i ambasador dobre volje Visokog komesarijata UN za izbeglice. Proslavila se krajem 90-ih godina 20. veka glumeci Laru Kroft, junakinju istoimenog akcionog filma. Pocetkom 2000-ih obelezila ju je veza i brak sa glumcem Bredom Pitom. Uz Dzenifer Lorens i Sandru Bulok, uspela je da odrzi status najplacenijih i najuticajnih glumica na svetu.");
    }
 
	else if(strcmp(bidibou, "Dzejson Stejtam")==0) {
	printf("\nDzejson Stejtam (engl. Jason Statham) britanski je glumac, roden 26. jula 1967. godine u Londonu (Engleska). Najpoznatiji je po ulogama u akcionim filmovima Duhovi sa Marsa, Transporter, Transporter 2, Transporter 3, Adrenalin, Adrenalin 2, Haos, Smrtonosna trka, Rat, Placenici i drugi. Rodjen je u Londonu kao sin barskog pevaca i plesacice. U detinjstvu je igrao fudbal i bio ulicni zabavljac, a bavio se skokovima u vodu. Bio je 12 godina clan britanske reprezentacije pa je na Svetskom prvenstvu 1992. godine zauzeo 12. mesto. Stejtama je otkrio reditelj Gaj Rici dok je ovaj radio kao model. Godine 1998. dao mu je ulogu u svom hitu Dve cadave dvocevke, cime je Stejtam postao glumac prakticno bez ikakvog glumackog obrazovanja.");
    }
 
	else if(strcmp(bidibou, "Dvejn Dzonson")==0) {
	printf("\nDvejn Daglas Dzonson (engl. Dwayne Douglas Johnson; Hejvard, 2. maj 1972) poznatiji kao Rok (engl. The Rock), americki je glumac, producent, preduzetnik i profesionalni rvac. Dzonson je igrao americki fudbal na koledzu. Nakon neuspesne sezone u kanadskoj fudbalskoj ligi, odlucuje da se bavi profesionalnim rvanjem, poput svog oca i svoga dede. Vrhunac rvacke karijere dostigao je u periodu od 1996. do 2004. u kom je nastupao za WWE, tadašnji WWF. Dzonson je po mnogima jedan od najvecih profesionalnih rvaca svih vremena. Svojom harizmaticnim nastupima i intervjuima postao je jedan od najpopularnijih rvaca. Osvojio je brojne svetske, interkontinentalne i teg titule, kao i Rojal rambl 2000. godine.");
    }
 
	else if(strcmp(bidibou, "Nadezda Petrovic")==0) {
	printf("\nNadezda Petrovic (Cacak, 11. oktobar 1873 — Valjevo, 3. april 1915) bila je srpska slikarka i fotograf. Jedna je od osnivaca Kola srpskih sestara i prvi sekretar organizacije. Njen opus obuhvata skoro trista ulja na platnu, oko stotinu skica, studija i krokija kao i nekoliko akvarela. Dela joj spadaju u tokove secesije, simbolizma, impresionizma i fovizma. Na njenim najboljim radovima dominiraju velike povrsine, njene omiljene, uzareno crvene boje i, njoj komplementarna, zelena. Ljubav prema bojama stvara na nekim platnima koloristicki vrtlog gde se, pored ostalih, isticu fovisticka ljubicasta, plava i crna boja. Snazni potezi cetkice i široki i gusti, pastuozni, namazi ponekad platno pretvaraju u dinamicnu reljefastu povrsinu. Volela je da slika portrete i pejzaze, a njen patriotizam ogledao se i u cestom izboru tema iz nacionalne istorije i slikanju ljudi i predela Srbije.");
    }
 
	else if(strcmp(bidibou, "Djordje Vajfert")==0) {
	printf("\nÐorde Vajfert (nem. Georg Weifert; Pancevo, 15. jul 1850 — Beograd, 12. januar 1937) bio je srpski industrijalac nemackog porekla i guverner Narodne banke. Djorde Vajfert, od oca Ignjata i majke Ane, rodio se u Pancevu. Ziveo je u imucnoj pancevackoj porodici industrijalaca. Pancevo je tada bilo malo pogranicno mesto na uscu reke Tamis u Dunav, naseljeno pretezno Srbima, Nemcima i Madjarima. Sa druge strane granice preko Dunava je lezao grad Beograd, komercijalni centar i glavni grad ponovo uspostavljene Kraljevine Srbije.");
    }
 
	else if(strcmp(bidibou, "Napoleon Bonaparta")==0) {
	printf("\nNapoleon I Bonaparta (franc. Napoléon I Bonaparte; Ajaco, 15. avgust 1769 — Longvud Sveta Jelena, 5. maj 1821) je bio general u Francuskoj revoluciji i kao voda bio je prvi konzul Francuske Republike od 11. novembra 1799. do 18. maja 1804. i car Francuske i kralj Italije od 18. maja 1804. do 6. aprila 1814. i onda ponovo na kratko od 20. marta do 22. juna 1815. Napoleon vazi za jednog od najvestijih vojskovoda i stratega u istoriji, kao i za kontroverznog lidera. Jedni ga gledaju kao pohlepnog i beskrupuloznog autokratu i tiranina, odgovornog za smrt vise miliona ljudi, dok ga drugi posmatraju kao hrabrog i smelog vladara i nacionalnog heroja. Ono sto je nepobitno je da je se svojim manevrima uvrstio medu najpoznatije istorijske figure svih vremena.");
    }
 
	else if(strcmp(bidibou, "Galileo Galilej")==0) {
	printf("\nGalileo Galilej (ital. Galileo Galilei; Piza, 15. februar 1564 — Firenca, 8. januar 1642) bio je italijanski astronom, fizicar, matematicar i filozof, cija su istrazivanja postavila temelje modernoj mehanici i fizici. Rodjen je u Pizi. Uglavnom je obrazovan u manastiru Valombroza pored Firence, a na univerzitetu u Pizi studirao je od 1581. do 1585. godine. Ubrzo posle toga, neko vreme je predavao na firentinskoj Akademiji. Na univerzitetu u Pizi je predavao matematiku od 1592. do 1610. Bio je filozof i matematicar bidibou velikog toskanskog vojvode od 1610. pa do kraja svog zivota. ");
    }
 
	else if(strcmp(bidibou, "Adolf Hitler")==0) {
	printf("\nAdolf Hitler (nem. Adolf Hitler; Braunau na Inu, 20. april 1889 — Berlin, 30. april 1945) bio je nemacki politicar, diktator i voda Nacisticke partije koji je 1933. postao nemacki kancelar (premijer, predsednik vlade). Posle smrti nemackog predsednika Paula fon Hindenburga 1934, Hitler je proglasio sebe za firera (vodu), zvanje u kojem je, zahvaljujuci uredbi (nem. Ermachtigungsgesetz) iz 1933, objedinio ovlascenja predsednika i kancelara i uspostavio totalitarni rezim u Nemackoj pod njegovom vlascu, koji je trajao sve do smrti samoubistvom 1945. godine.");
    }
 
	else if(strcmp(bidibou, "Volfgan Amadeus Mocart")==0) {
	printf("\nVolfgang Amadeus Mocart (kršteno: Johanes Krisostomus Volfgangus Teofilus Mocart; Salcburg, 27. januar 1756 — Bec, 5. decembar 1791) bio je austrijski kompozitor i pijanista, jedan od najznacajnijih i najuticajnijih svetskih kompozitora klasicne muzike. Mocartov rad od preko sest stotina dela, pokriva gotovo sve zanrove njegovog doba, ukljucujuci simfonije, koncerte, kamernu muziku, muziku za klavir, operske i horske kompozicije.");
    }
 
	else if(strcmp(bidibou, "Mocart")==0) {
	printf("\nVolfgang Amadeus Mocart (kršteno: Johanes Krisostomus Volfgangus Teofilus Mocart; Salcburg, 27. januar 1756 — Bec, 5. decembar 1791) bio je austrijski kompozitor i pijanista, jedan od najznacajnijih i najuticajnijih svetskih kompozitora klasicne muzike. Mocartov rad od preko sest stotina dela, pokriva gotovo sve zanrove njegovog doba, ukljucujuci simfonije, koncerte, kamernu muziku, muziku za klavir, operske i horske kompozicije.");
    }
 
	else if(strcmp(bidibou, "Vilijam Sekspir")==0) {
	printf("\nVilijam Šekspir (engl. William Shakespeare; Stratford na Ejvonu, kršt. 26. april 1564 — Stratford na Ejvonu, 23. april 1616) bio je engleski pesnik i dramski pisac, koji se, prema vise razlicitih izvora, smatra za najveceg pisca na engleskom jeziku i dramaturga svetskog glasa. Opus Sekspirovih dela koja su sacuvana do danas sastoji se od 38 pozorisnih komada, 154 soneta, dve duge narativne i nekoliko drugih poema. Njegovi pozorisni komadi su prevedeni na mnoge zive jezike i prikazuju se svuda u svetu cesce nego bilo koji drugi.");
    }
 
	else if(strcmp(bidibou, "Carli Caplin")==0) {
	printf("\nCarls Spenser Caplin mladji (engl. Sir Charles Spencer Chaplin Jr.), poznat kao Carli Caplin ili ranije kao Sarlo Akrobata (London, 16. april 1889 – Vevej, 25. decembar 1977), bio je engleski filmski reziser, glumac, scenarista i producent britanskog porekla, jedan od najvecih komicara svih vremena. Jedan je od pionira kinematografije i najvecih sineasta svih vremena. Neobicno je zaslužan za sirenje popularnosti filma i za njegovo priznanje u sferama tradicionalne kulture. Njegov izvorni humanizam formiran u periodu teske mladosti izrazen je u liku dobrocudne skitnice Carlija cija je dobrota prema okolini srazmerna njenim zlim namerama. Ucinio je da svima postane jasna snaga filmskog govora i njegova moc u afirmaciji univerzalnih i trajnih ljudskih vrednosti.");
    }
 
	else if(strcmp(bidibou, "Vinsent van Gog")==0) {
	printf("\nVinsent Vilem van Gog (hol. Vincent Willem van Gogh; Zindert, 30. mart 1853 — Over sir Oaz, 29. jul 1890) bio je slikar holandskog porekla. Jedan je od trojice najvecih slikara postimpresionizma i jedan od najcenjenijih slikara uopste. Njegova dela su zapazena po svojoj gruboj lepoti, emotivnoj iskrenosti i hrabrim bojama, te je zahvaljujuci tome postao jedan od vodecih umetnika 19. veka. Nakon dugog i bolnog problema sa anksioznoscu i ucestalim problemima mentalnih bolesti, umro je od prostrelne rane metkom u svojoj 37. godini. Opste je prihvaceno misljenje da je izvrsio samoubistvo, iako pistolj iz koga je pucano, nikada nije pronadjen. Njegov rad je za vreme njegovog zivota bio poznat samo nekolicini ljudi, a samo par ga je cenilo i postovalo.");
    }
 
	else if(strcmp(bidibou, "Vinsent Van Gog")==0) {
	printf("\nVinsent Vilem van Gog (hol. Vincent Willem van Gogh; Zindert, 30. mart 1853 — Over sir Oaz, 29. jul 1890) bio je slikar holandskog porekla. Jedan je od trojice najvecih slikara postimpresionizma i jedan od najcenjenijih slikara uopste. Njegova dela su zapazena po svojoj gruboj lepoti, emotivnoj iskrenosti i hrabrim bojama, te je zahvaljujuci tome postao jedan od vodecih umetnika 19. veka. Nakon dugog i bolnog problema sa anksioznoscu i ucestalim problemima mentalnih bolesti, umro je od prostrelne rane metkom u svojoj 37. godini. Opste je prihvaceno misljenje da je izvrsio samoubistvo, iako pistolj iz koga je pucano, nikada nije pronadjen. Njegov rad je za vreme njegovog zivota bio poznat samo nekolicini ljudi, a samo par ga je cenilo i postovalo.");
    }
 
	else if(strcmp(bidibou, "Merlin Monro")==0) {
	printf("\nMerilin Monro (engl. Marilyn Monroe), rodjena kao Norma Dzin Mortenson (engl. Norma Jeane Mortenson; Los Andeles, 1. jun 1926 — Los Andjeles, 5. avgust 1962), bila je americka filmska glumica, pevacica, model i zabavljacica. Filmsku karijeru je pocela 1947. malim ulogama; 1950. privukla je paznju publike i kriticara sporednom ulogom u kultnom filmu Sve o Evi, sa Beti Dejvis u glavnoj ulozi. Tri godine kasnije igrala je glavnu ulogu u ljubavnoj drami Nijagara. Premda su njeni filmovi najcesce bili komercijalni, ali ne i kriticki hitovi, Monro je bila jedna od najvecih filmskih zvezda pedesetih godina 20. veka.");
    }
 
	else if(strcmp(bidibou, "Al Kapone")==0) {
	printf("\nAlfons Gabrijel Al Kapone (engl. Alphonse Gabriel Al Capone;  Njujork, 17. januar 1899 — Majami Bic, 25. januar 1947) bio je americki gangster i biznismen koji je stekao slavu tokom prohibicije u SAD kao saosnivaca i sefa cikaske mafije. Njegova sedmogodišnja vladavina kao sef organizacije organizovanog kriminala zavrsila je kada je imao 33 godine. Alfons Gabrijel Kapone je roden, kao cetvrto dete italijanske emigrantske porodice, 17. januara 1899. godine u Bruklinu. Njegovi roditelji su bili italijanski imigranti Gabriel Kapone (1865–1920) i Tereza Kapone (devojacki Rajola; 1867–1952). Njegovo otac je bio berberin, a njegova majka je bila svalja. Oboje su rodeni u Angri, gradu u okrugu Selerno.");
    }
 
	else if(strcmp(bidibou, "Kristofer Kolumbo")==0) {
	printf("\nKristifor Kolumbo (ital. Cristoforo Colombo, sp. Cristobal Colon, port. Cristovao Colombo), rodjen izmedu oktobra 1450. i oktobra 1451, umro 20. maja 1506. godine. Bio je trgovac i moreplovac iz Djenove koji je postao prvi konkistador Novog sveta. Kao preduzimljivi trgovac, trazio je puteve koji bi mu omogucili pristup dragocenim metalima i luksuznoj robi. Od 1492. do 1504. imao je cetiri putovanja u Novi svet, gde su njegovi ljudi od trgovaca i mornara, preko noci postali osvajaci i kolonisti. Pribavili su Spaniji ogromnu i bogatu oblast sa druge strane okeana i obelezili granice carstva koje je bilo skoro dva puta vece od Evrope.");
    }
 
	else if(strcmp(bidibou, "Kristofor Kolumbo")==0) {
	printf("\nKristifor Kolumbo (ital. Cristoforo Colombo, sp. Cristobal Colon, port. Cristovao Colombo), rodjen izmedu oktobra 1450. i oktobra 1451, umro 20. maja 1506. godine. Bio je trgovac i moreplovac iz Djenove koji je postao prvi konkistador Novog sveta. Kao preduzimljivi trgovac, trazio je puteve koji bi mu omogucili pristup dragocenim metalima i luksuznoj robi. Od 1492. do 1504. imao je cetiri putovanja u Novi svet, gde su njegovi ljudi od trgovaca i mornara, preko noci postali osvajaci i kolonisti. Pribavili su Spaniji ogromnu i bogatu oblast sa druge strane okeana i obelezili granice carstva koje je bilo skoro dva puta vece od Evrope.");
    }
 
	else if(strcmp(bidibou, "Ludvig van Betoven")==0) {
	printf("\nLudvig van Betoven (nem. Ludwig van Beethoven; Bon, 17. decembar 1770 — Bec, 26. mart 1827) je bio nemacki kompozitor, nadmocna muzicka figura u prelaznom periodu izmedu ere klasicizma i romantizma. Rodjen je u Bonu u Nemackoj, od oca Johana van Betovena (1740—1792), flamanskog porekla, i majke Magdalene Keverik van Betoven (1747—1787). Njegov otac je radio kao muzicar na dvoru u Bonu. Pre njega kompozitori su pisali dela za verske obrede i da zabave ljude. On je pravio muziku nezavisniju od drustvenih ili religioznih namena.");
    }
 
	else if(strcmp(bidibou, "Betoven")==0) {
	printf("\nLudvig van Betoven (nem. Ludwig van Beethoven; Bon, 17. decembar 1770 — Bec, 26. mart 1827) je bio nemacki kompozitor, nadmocna muzicka figura u prelaznom periodu izmedu ere klasicizma i romantizma. Rodjen je u Bonu u Nemackoj, od oca Johana van Betovena (1740—1792), flamanskog porekla, i majke Magdalene Keverik van Betoven (1747—1787). Njegov otac je radio kao muzicar na dvoru u Bonu. Pre njega kompozitori su pisali dela za verske obrede i da zabave ljude. On je pravio muziku nezavisniju od drustvenih ili religioznih namena.");
    }
 
	else if(strcmp(bidibou, "Abraham Linkoln")==0) {
	printf("\nAbraham Linkoln (engl. Abraham Lincoln; Hodzenvil, Kentaki, 12. februar 1809 — Vasington, 15. april 1865) je bio americki drzavnik, advokat i sesnaesti predsednik SAD od 1861. do njegove smrti 1865. godine. Rodjen je u siromasnoj familiji, a u mladosti je dobio dozvolu da se u drzavi Ilinois bavi advokaturom, iako nije imao zavrsenu ni osnovnu skolu. Politikom se bavio od 1832. a 1856. prikljucio se republikanskoj stranci, osnovanoj zato da bi se suprotstavila sirenju ropstva medju novoprikljucenim drzavama SAD.");
    }
 
	else if(strcmp(bidibou, "Vuk Karadzic")==0) {
	printf("\nVuk Stefanovic Karadzic (Trsic, 6. novembar 1787 — Bec, 7. februar 1864) bio je prvi srpski lingvista u 19. veku, reformator srpskog jezika, sakupljac narodnih umotvorina i pisac prvog recnika srpskog jezika. Vuk je najznacajnija licnost srpske knjizevnosti prve polovine XIX veka. Rodjen u vreme zlo i mucno, u dane kada se cinjase da je skoro ugasen zivot srpskog naroda. Vuk je stao na snagu u vreme junacko. Stekao je i nekoliko pocasnih doktorata. Imao je nekoliko brace i sestara koji su umrli. U tadasnje vreme se verovalo da je to zbog duhova i vestica. Posle smrti dosta njegove brace, njegovi roditelji su mu dali ime Vuk da bi to ime oteralo duhove i vestice.");
    }
 
	else if(strcmp(bidibou, "Vuk Stefanovic Karadzic")==0) {
	printf("\nVuk Stefanovic Karadzic (Trsic, 6. novembar 1787 — Bec, 7. februar 1864) bio je prvi srpski lingvista u 19. veku, reformator srpskog jezika, sakupljac narodnih umotvorina i pisac prvog recnika srpskog jezika. Vuk je najznacajnija licnost srpske knjizevnosti prve polovine XIX veka. Rodjen u vreme zlo i mucno, u dane kada se cinjase da je skoro ugasen zivot srpskog naroda. Vuk je stao na snagu u vreme junacko. Stekao je i nekoliko pocasnih doktorata. Imao je nekoliko brace i sestara koji su umrli. U tadasnje vreme se verovalo da je to zbog duhova i vestica. Posle smrti dosta njegove brace, njegovi roditelji su mu dali ime Vuk da bi to ime oteralo duhove i vestice.");
    }
    else {
    	printf("Uneli ste nepostojecu pretragu!!!");
	}
    printf("\n");
    mitromitro:
    	printf("\n");
    printf("\nAko zelite da se vratite upisite 'Back',ako zelite ponovo da pretrazujete upisite 'Again'.\n");
    scanf("%s",&nazad);
    if(strcmp(nazad,"Back")== 0){
    	goto odabir;
	}
	if(strcmp(nazad,"Again")== 0){
		system("CLS");
		goto opet;
	}
	else {
		system("CLS");
		printf("Niste upisali back ili again, pokusajte ponovo.");
		Sleep(150);
		goto mitromitro;
	}
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
//PHONE
	else if(odabir == 4){
		int  broj,code,mojbroj;
    char kontakt[1000];
    char poruka[1000];
    char opcija[1000];
    char opcija2[1000];
    char back[1000];
    
    
    
        code:
    	system("CLS");
        printf("\t\t\t\t______________________________________________\n\n");
        printf("\t\t\t\t\tUnesite Dialing Code: ");
        scanf("%d", &code);
        
        
        
        printf("\n");
        
        switch (code)
        {
            case 381:
                printf("\t\t\t\t\tSerbia, validan dialing code!");
                break;
            
            case 355:
                printf("\t\t\t\t\tAlbania, validan dialing code!");
                break;
            
            case 387:
                printf("\t\t\t\t\tBosnia/Hercegovina, validan dialing code!");
                break;
            
            case 673:
                printf("\t\t\t\t\tBulgaria, validan dialing code!");
                break;
            
            case 385:
                printf("\t\t\t\t\tCroatia, validan dialing code!");
                break;
                
            case 49:
                printf("\t\t\t\t\tGermany, validan dialing code!");
                break;
            
            
            case 30:
                printf("\t\t\t\t\tGreece, validan dialing code!");
                break;
            
            
            case 389:
                printf("\t\t\t\t\tMacedonia, validan dialing code!");
                break;
            
            
            case 382:
                printf("\t\t\t\t\tMontenegro, validan dialing code!");
                break;
            
            
            default:
                printf("\t\t\t\t\tDialing Code nije validan.\n");
                break;
                
        }
    printf("\n");+
    printf("\t\t\t\t______________________________________________\n\n");
 
    printf("\t\t\t\t\t ______________________ \n");
    printf("\t\t\t\t\t(  --      (O)       -- )\n");
    printf("\t\t\t\t\t(_______________________)\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|      1    2    3      |\n");
    printf("\t\t\t\t\t|      4    5    6      |\n");
    printf("\t\t\t\t\t|      7    8    9      |\n");
    printf("\t\t\t\t\t|      #    0    +      |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|   Enter number here   |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t(___    ___( )___    ___)\n"); 
    printf("\t\t\t\t\t(_______________________)\n\n"); 
    
    
    printf("\t\t\t\t\tUnesite broj ovde: ");
    scanf("%d", &broj);
    
    printf("\t\t\t\t______________________________________________\n\n");
    
    printf("\t\t\t\t\tUneli ste broj %i\n",broj);
    
    system("CLS");
    
    printf("\t\t\t\t______________________________________________\n\n");
    
    
    printf("\t\t\t\t\t ______________________ \n");
    printf("\t\t\t\t\t(  --      (O)       -- )\n");
    printf("\t\t\t\t\t(_______________________)\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|   _________________   |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|      Unesite ime      |\n");
    printf("\t\t\t\t\t|   zeljenom kontaktu   |\n");
    printf("\t\t\t\t\t|   _________________   |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t| _____________________ |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t(___    ___( )___    ___)\n"); 
    printf("\t\t\t\t\t(_______________________)\n\n"); 
    
    printf("\t\t\t\t______________________________________________\n\n");
    
    
    printf("\t\t\t\tUnesite zeljeno ime novom kontaktu: ");
    scanf("%s", &kontakt);
    
    
    printf("\n");
    
    printf("\t\t\t\t\tKontakt je sacuvan\n");
    
    system("CLS");
    
     printf("\t\t\t\t______________________________________________\n\n");
     
    printf("\t\t\t\t\t ______________________ \n");
    printf("\t\t\t\t\t(  --      (O)       -- )\n");
    printf("\t\t\t\t\t(_______________________)\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|   _________________   |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|  Poziv -  Nazad - SMS |\n");
    printf("\t\t\t\t\t|   _________________   |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|    Zelite li da se    |\n");
    printf("\t\t\t\t\t|   vratite na pocetak  |\n");
    printf("\t\t\t\t\t|   _________________   |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t| Izaberite vasu opciju |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t(___    ___( )___    ___)\n"); 
    printf("\t\t\t\t\t(_______________________)\n\n"); 
    
    printf("\t\t\t\t______________________________________\n\n");
    
    printf("\t\t\t\t\tIzaberite vasu opciju: ");
    scanf("%s",&opcija);
    
    printf("\n");
    printf("\t\t\t\t______________________________________\n\n");
    
    if(strcmp(opcija,"Nazad")== 0)
    {
    system("CLS");
    goto code;
    }
    
    if(strcmp(opcija,"Poziv")== 0)
    {
         
    printf("\t\t\t\t\t______________________ \n");
    printf("\t\t\t\t\t(  --      (O)       -- )\n");
    printf("\t\t\t\t\t(_______________________)\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|  ___________________  |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|   Trenutno pozivate   |\n");
    printf("\t\t\t\t\t|       ovaj broj...    |\n");
    printf("\t\t\t\t\t|   __________________  |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t|                       |\n");
    printf("\t\t\t\t\t(___    ___( )___    ___)\n"); 
    printf("\t\t\t\t\t(_______________________)\n"); 
    printf("\t\t\t\t______________________________________\n\n");
    printf("\t\t\t\t\tUpisite 'Back' da prekinete poziv: ");
    scanf("%s", back);
    if(strcmp(back, "Back")== 0)
    {
        system("CLS");
        goto odabir;
    }
    
    }
    
    if (strcmp (opcija, "SMS") == 0)
    {
        printf("\t\t\t\tUnesite sta zelite da posaljete +%d %d.\n",code,broj);
        
        printf("\t\t\t\tVasa poruka:  ");
        scanf(" %[^\n]%*c",poruka);
        
            printf("\t\t\t\t______________________________________\n\n");
        printf("\t\t\t\tUnesite 'Back' ako zelite da se vratite nazad\n\t\t\t\t");
        scanf("%s",back);
    if(strcmp(back,"Back")== 0){
        system("CLS");
        Sleep(400);
        goto odabir;
    }
    }
	}
//-----------------------------------------------------------------------------------------------------------------------------------------------//
//amazon
	else if(odabir == 7){
    menu:
    	Sleep(150);
	prodavnica:
		system("CLS");
     printf ("\n\n\t\t\tDobrodosli u prodavnicu!");
 
     printf("     \n\n===============\t   \t=============== \t================"      );
     printf("     \n|  1.Patike   |\t     \t|   2.Odeca   | \t|3.Bela Tehnika|"      );
     printf("     \n===============\t     \t=============== \t================"        );
 
     printf("     \n\n===============\t   \t=============== \t================"      );
     printf("     \n|  4.Telefoni | \t| 5.Laptopvi  | \t| 6.Kompjuteri |"      );
     printf("     \n===============\t     \t=============== \t================"        );
 
    printf ("\n\n\t       Izaberite stvar koju zelite kupiti tako \n\t   sto cete izabari jedan broj od navedenih gore\n\t\tUnesite '0' da se vratite nazad.\n");
    printf("\t\t");
	scanf("%d",&a);
 
   //PATIKE ====================================================================================================================================================================================================================
 
 
 
 
 
 
     if ( a == 1){
 
	    nikee:
    	system("CLS");
 
		printf("\n\n\t\t          Dobrodosli u patike!");
    	 printf("     \n\n===============\t   \t=============== \t================"      );
     printf("     \n|  1.Nike     |\t     \t|   2.Adidas   | \t|   3. Puma    |"      );
     printf("     \n===============\t     \t=============== \t================"        );
 
     printf("     \n\n===============\t   \t=============== \t================"      );
     printf("     \n|  4.ReeBok   |\t        |  5.Lacoste  |       \t| 6.New Balance |"      );
     printf("     \n===============\t     \t=============== \t================"        );
 
    	printf("\n\n\t\t    Unesite 0 da se vratite u menu");
		printf ("\n\t       Izaberite marku koju zelite kupiti tako \n\t   sto ce te izabari jedan broj od navedenih gore: ");
    scanf("%d",&b);
    if(b == 0){
		system ("cls");
 
		goto menu;
	}
    // NIKE PATIKE
 
    else	if ( b == 1){
 
    	system("CLS");
    	 ponovo:
    	printf("\n\n\t\t\t    Dobrodosli u Nike Patike!");
    	printf ("  \n\n\t\n========================= \t==========================\t=========================");
    	printf ("\n 1.Nike Air Force 1  100$ \t 2.Nike Air Max 270  170$ \t 3.Jordan Max Aura 3 180$");
    	printf ("  \n========================= \t==========================\t=========================");
 
 
 
        printf ("  \n\n\n=========================== \t==========================\t================================");
    	printf ("\n 4.Air Jordan 1 Low G  125$ \t 5.Air Jordan XXXVI  185$ \t6.Nike ZoomX Vaporfly Next% 2 275$");
    	printf ("  \n=========================== \t==========================\t================================");
 
 
 
 
	    printf ("\n\n\n============================== \t ====================\t        ========================");
    	printf ("\n 7.Nike Blazer Low Jumbo  95$ \t 8.KD Trey 5 IX  79$ \t        9.Nike Air Max Plus 195$");
    	printf ("\n============================== \t ====================\t        ========================");
 
        printf("\n\n\t\t\tUnesite 0 da bi vas vratilo korak unazad.");
    	printf("\n\t Unesite broj koji se nalaze iznad da bi dobili malo vise informacija o patici: ");
    	scanf("%d",&c);
 
 
 
 
   if(c == 1){
   	printf("\n\nNike Air Force 1 Su patike bele boje kojima gornji deo od pune koze daje vrhunski izgled i osjecaj.\nNike Air jastucic dodaje laganu, celod udobnost.Nisko dekoltirana silueta dodaje jednostavan, aerodinamican izgled.\nCena ovih patika iznosi 100$.");
   }
    else if (c == 0){
    	system ("cls");
    	goto nikee;
	}
 
 
    else if ( c == 2){
 
 
    	printf("\n\nNike Air max 270 su odlicne patike koje imaju djon napunjen vazduhom u delu pete.Djon napunjen vazduhom iznosi 32mm.\nMogu se uzeti u razlicitim bojama i cena iznosi 170$");
	}
 
   else if ( c == 3){
 
 
    	printf("\n\nJordan Max Aura 3 je model koji ima energiju kosarkaskih patika i izgled koji menja percepciju klasicnog stila.\nGornjiste od koze kombinuje se sa delovima od sintetike i tekstila.Dizajn srednjeg dela sa mekanim jastucicima\npruza maksimalnu udobnost i izgled, cena ovih patika iznosi 180$");
	}
 
   else if ( c == 4){
 
 
    	printf("\n\nInspirisane jednom od najpoznatijih patika svih vremena, Air Jordan 1 G je instant klasik.Sa vazduhom u peti, Jumpmanom\nna ulosku i integriranom putanjom na djonu daje sve sto je potrebno da igrate 18 rupa u komfortu.Cena ovih patika iznosi 125$");
	}
 
   else if ( c == 5){
 
 
    	printf("\n\nAir Jordan XXXVI su odlicne patike koje je Majkl Jordan nosio kada je osvaja prvo od 6 prvenstava.Air Jordan XXXVI \nje priznanje Jordanskog nasleda i ekstrasenzorne percepcije onih koji ga nose.Cena ovih patika iznosi 185$");
	}
 
   else if ( c == 6){
 
 
    	printf("\n\nNike ZoomX Vaporfly Next e sledeca evolucija brzine za postizanje novih ciljeva i rekorda.Preureden gornji deo\n pomaze u poboljsanju udobnosti i prozracnosti, dok isti prilagodljivi jastucici i sigurna\n podrska pomazu da vas gurne ka vasem licnom najboljem uspjehu.Cena ovih patika iznosi 275$");
	}
    else if ( c == 7){
 
 
    	printf("\n\nNike Blazer Low Jumbo su patike koje su najcesce bele boje.Gornjiste od koze, dizajn srednjeg dela sa mekanim jastucicima\npruza maksimalnu udobnost i izgled, cena ovih patika iznosi 95$");
	}
 
   else if ( c == 8){
 
 
    	printf("\n\nNike KD TREY 5 IX su patike za košarku dizajnirane da prate energicnu igru NBA superstar igraca Kevina Duranta.Nike\nRenew tehnologija kombinuje meko unutrasnje jezgro koje je okruzeno cvrstom penom, za elasticnost i udobnost.\nZoom Air vazdusna jedinica uzvraca energiju svakim korakom. Lagana slojevita mreza u gornjistu stvara prozracnost\ni optimalno pristajanje.Cena ovih patika iznosi 85$");
	}
 
   else if ( c == 9){
 
 
    	printf("\n\nNike Air Max Plus 2 je odlicna patika koji dizajn je izmislio Sean McDowel koji uzima inspiraciju od palmi na floridi u toku zalska sunca.Patike imaju vazdusni djon koji sa mekanim jastucicima daje maksimalnu udobnost.Cena ovih patika iznosi 195$");
	}
    else{
    	c = getchar();
    	system("cls");
    	printf("\n\n\n\n\n\t\tUneli ste nepostojeci proj pokusajte ponovo");
 
    	Sleep(1500);
    	system("cls");
    	goto ponovo;
	}
	}
	// KRAJ NIKE PATIKA
 
 
    else if ( b == 2){
    adidas :
    	system("CLS");
    	printf("\n\n\t\t\t   Dobrodosli u Adidas!");
 
	    printf ("\n\n\n========================== \t=====================\t ===========================");
		printf ("\n 1.ULTRABOOST 5.0 DNA 140$ \t 2.Adidas Gazelle 70$ \t 3.Adidas ZX 700 Winter 90$");
    	printf ("\n========================== \t=====================\t ===========================");
 
		printf ("\n\n\n============================ \t=======================\t =======================");
    	printf ("\n 4.Adidas Ultraboost 21 160$ \t 5.Adidas Ozweego 7 90$  6.Adidas Superstar 70$");
    	printf ("\n============================ \t=======================\t =======================");
 
    	printf ("\n\n\n===================================== \t========================== \t================================");
    	printf ("\n 7.Adidas Adizero Adios Pro 2.0 180$ \t 8.Adidas Continental 70$ \t9. Adidas Terrex Swift R2 GX 130$");
     	printf ("\n===================================== \t========================== \t================================");
        printf("\n\n\t\t\tUnesite 0 da bi vas vratilo korak unazad.");
    	printf("\n\t Unesite broj koji se nalaze iznad da bi dobili malo vise informacija o patici: ");
    	scanf("%d",&c);
    	if(c == 1){
   	printf("\n\nULTRABOOST 5.0 DNA Nosite ih za duge setnje gradom.Patike su napravljene za trcanje i pruzaju neverovatno iskustvo u prijatnost.Cena ovih patika iznosi 140$");
   }
 
 
    else if ( c == 0){
 
	    Sleep(150);
		goto nikee;
	}
    else if ( c == 2){
 
 
    	printf("\n\nAdidas Gazelle su odlicne patike koje mozete uzeti u svim mogucim bojama.Dizajn srednjeg dela sa mekanim jastucicima pruza preveluku udobnost.cena pvih patika iznosi 70$ ");
	}
 
   else if ( c == 3){
 
 
    	printf("\n\nAdidas ZX 700 Winter su patike napravljne da vas zastite od bilo kakvog nevremena.\nNapravljene su da vas zastite od hladnoce i kvasnog puta uz to da ce \nsvaki detalj sijati i u najmanjem svetlu.Cena ovih patika iznosi 90$");
	}
 
   else if ( c == 4){
 
 
    	printf("\n\nAdidas Ultraboost 21 vrhunske patike za trcanje izuzetno modernog dizajna.\nSa strane se nalazi posebna podrska, koja daje dodatnu stabilnost.Dinamicki \njastucici koji tkacu vracaju energiju.Cena ovih patika iznosi 160$");
	}
 
   else if ( c == 5){
 
 
    	printf("\n\nAdidas Ozweego 7 ciljana podrska u prednjem dijelu stopala i pete cini izuzetno udobnu za nosenje.\nPatika dolazi u razlicitim bojama i izgleda prelepo.Cena ove patike iznosi 90$.");
	}
 
   else if ( c == 6){
 
 
    	printf("\n\nAdidas Superstar patike su sada osnovni zivotni stil za ljubitelje ulicne odece.Napravljene su od koze sa strane i gume napred.Mogu doci u raznim bojama.Cena ovih patika iznoosi 70$");
	}
    else if ( c == 8){
 
 
    	printf("\n\nAdidas Continental su patike koje su najcesce bele boje.Gornjiste od koze, dizajn srednjeg dela sa mekanim jastucicima\npruza maksimalnu udobnost i izgled, cena ovih patika iznosi 95$");
	}
 
   else if ( c == 7){
 
 
    	printf("\n\nAdidas Adizero Adios Pro 2.0 su nove adidas patike za trcanje dizajnirane su za eksplozivnu brzinu koja vas tjera prema cilju.Lagane su i prozracne s pravom kombinacijom savitljivosti i stabilnosti.Ceba ovih patika iznosi 180$");
	}
 
   else if ( c == 9){
 
 
    	printf("\n\nAdidas TERREX SWIFT R2 GORE-TEX HIKING SHOES su muske outdoor patike prilagodljivog dizajna.redvidene za nosenje u promenljivim uslovima, ove outdoor patike su idealne za planinske staze.Lagano i prozracno gornjiste od mrezice i sintetike upotpunjeno je vodootpornom GORE-TEX membranom za optimalnu zaztitu stopala.Cena ovih patika iznosi 130$");
	}
    else{
    	c = getchar();
 
    	system("cls");
    	printf("\n\n\n\n\n\t\tUneli ste nepostojeci proj pokusajte ponovo");
 
    	Sleep(1500);
    	system("cls");
    	goto adidas;
	}
 
 
 
	}
 
   else if ( b == 3){
    puma :
    	system("CLS");
    	           printf("\n\n\t\tDobrodosli u Puma!");
 
 
 
	    printf ("\n\n\n========================== \t=========================== \t ===========================");
		printf ("\n 1.Puma Cell Endura 85 $ \t 2.Puma Spectra Thunder 75$ \t      3.Puma RS-X   90$");
    	printf ("\n========================== \t=========================== \t ===========================");
 
		printf ("\n\n\n============================ \t============================ \t =======================");
    	printf ("\n 4.Puma Future Rider OG 95$ \t 5.Puma Cleated Creeper 90$ \t    6.Puma Sky LX   70$");
    	printf ("\n============================ \t============================ \t =======================");
 
    	printf ("\n\n\n=================== \t============================ \t==============================");
    	printf ("\n 7.Puma Clyde 65$ \t 8.Puma Ralph Sampson Lo 90$ \t   9. Puma Clyde Court 110$");
    	printf ("\n=================== \t============================ \t==============================");
        printf("\n\n\t\t\tUnesite 0 da bi vas vratilo korak unazad.");
    	printf("\n\t Unesite broj koji se nalaze iznad da bi dobili malo vise informacija o patici: ");
    	scanf("%d",&c);
 
 
 
		if(c == 1){
   	printf("\n\nEkstra super bele, patike imaju predivne dodire neonsko zelene i crne boje sa fleksibilnim mrezastim gornjim dijelom.\nDjon takoder ima prepoznatljiv heksagonalni uzorak.Cena ovih patika iznosi 85$");
   }
 
 
    else if ( c == 0){
    	system("cls");
 
 
		c = getchar();
    	goto nikee;
	}
    else if ( c == 2){
 
 
    	printf("\n\nPuma Spectra Thunder njena istaknuta silueta ima dodatni izboceni djon na vrhu mreze sa antilop i koznim preklopima.\nCrna traka oblika dobro se uklapa s crnom mrezicom kutije za prste, dok hrabra boja koja blokira plavu, crvenu i zutu \nnaglasava ostatak oblika patike.Cena ove patike iznosi 75 $");
	}
 
   else if ( c == 3){
 
 
    	printf("\n\nPuma RS-Xsu predivne patike koje su dozivele mnostvo boja i kolaboracija.Moj licni favorit je RS-X³ koji ima topli plavi\ngradijent uzorak koji pocinje vrucim na prstu i bledi u tonsku mesavinu crne, sive i bele.Cena ove patike iznosi 90$");
	}
 
   else if ( c == 4){
 
 
    	printf("\n\nPuma Future Rider OG je patika sa jednostavnim gumenim djonom sa vaflastim printom i mrezasti gornji deo sa antilop\npreklopima za prelep stil.Future Rider nudi neku hrabru, ali jednostavnu shemu boja crvenih, plavih i \nneutralnih tonova kako bi patikama dale opusten izgled.Cena ovih patika iznosi 95$");
	}
 
   else if ( c == 5){
 
 
    	printf("\n\nIstaknuta u svojoj boji, patike su bile jedna od nekoliko prvih objavljenih silueta.Svijetli spoj plave i zelene na\nvrhu prozirnog medjudjona i gazeceg potplata ucinilo je jednom za knjige rekorda i jaca razgovor o \nPuminoj kolaborativnoj snazi i sposobnosti da skrenu paznju na brend.Cena ovih patika iznosi 90$");
	}
 
   else if ( c == 6){
 
 
    	printf("\n\nPatika ima sjajne detalje poput koznog gornjeg dela sa antilopom, kao i perforirane kutije za prste. Njihova saradnja sa \nPublic Enemyom za 2020. je relevantna kao i uvek, a crvena boja na odgovarajucim logotipima, kao\ni “Fight the Power” na kragni djona donose saradnju i njenu poruku puni krug.Cena ovih patika iznosi 70$");
	}
    else if ( c == 8){
 
 
    	printf("\n\nStil vintage modela bez napora je bezvremenski.Sa raznim Lo i Mid stilskim siluetama koje mozete izabrati medu \nobozavateljima brenda, a Ralphova igra ga može nositi s lakocom. Gornjiste od koze dobro se slaze sa\nantilopom i niko ne mome previdjeti njegov potpis od zlatne folije sa strane patike.Cena ovih patika iznosi 90$");
	}
 
   else if ( c == 7){
 
 
    	printf("\n\nNedavan proporod Pume u svetu kosarke i zivotnog stila je vredan paznje.Originalni fanovi brenda oduvek su znali \nda je Puma vodeca organizacija u svijetu profesionalnih sportista.Kozne niske patile koje su kasnije \npostale Clyde, azurirana verzija klasicnog antilopa za performanse.Cena ovih patika iznosi 65$");
	}
 
   else if ( c == 9){
 
 
    	printf("\n\nNakon duze pauze, Puma se konacno vratila u svijet performansa sa Puma Clyde Court, odajuci pocast influenseru koji\nje sve zapoceo za Pumu. Novi model je otelotvorio duh i etos prve Clyde patike, ali s vrhunskom razmetljivoscu\n i tehnologijom koja je mogla konkurirati drugim siluetama na terenu.Cena ovih patika iznosi 110$");
	}
 else{
    	c = getchar();
 
    	system("cls");
    	printf("\n\n\n\n\n\t\tUneli ste nepostojeci proj pokusajte ponovo");
 
    	Sleep(1500);
    	system("cls");
    	goto puma;
	}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
	}
 
   else if ( b == 4){
    reebok :
    	system("CLS");
    	printf("\n\n\t\t\tDobrodosli u ReeBok!");
 
    printf ("\n\n\n=========================== \t=========================== \t ===========================");
		printf ("\n 1.Reebok Workout Plus 90 $ \t 2.Reebok Zig Kinetica 75$ \t   3.Reebok Aztrek 96  75$");
    	printf ("\n=========================== \t=========================== \t ===========================");
 
		printf ("\n\n\n============================ \t================================ \t =======================");
    	printf ("\n 4.Reebok Club C Revenge 80$ \t 5.Reebok Club C 85 Vintage 100$ \t  6.Reebok DMX Thril 95$");
    	printf ("\n============================ \t================================ \t =======================");
 
    	printf ("\n\n\n========================= \t =====================================     ==============================");
    	printf ("\n 7.Reebok Pump Court 150$  \t 8.Reebok Tom And Jerry Club C 85 140$      9.Reebok DMX Series 2200 65$");
    	printf ("\n=========================   \t =====================================     ==============================");
        printf("\n\n\t\t\tUnesite 0 da bi vas vratilo korak unazad.");
    	printf("\n\t Unesite broj koji se nalaze iznad da bi dobili malo vise informacija o patici: ");
    	scanf("%d",&c);
 
 
 
 
	if(c == 1){
   	printf("\n\nEkstra super bele, patike imaju predivne dodire neonsko crne i zelene boje.\nDjon takoder ima prepoznatljiv heksagonalni uzorak.Cena ovih patika iznosi 90$");
   }
 
 
    else if ( c == 0){
    	system("cls");
 
 
		c = getchar();
    	goto nikee;
	}
    else if ( c == 2){
 
 
    	printf("\n\nReebok Zig Kinetica su patike za trcanje , dizajnirane su za eksplozivnu brzinu koja vas tjera prema cilju.Lagane su\ni prozracne s pravom kombinacijom savitljivosti i stabilnosti.Ceba ovih patika iznosi 75$");
	}
 
   else if ( c == 3){
 
 
    	printf("\n\nReebok Aztrek 96 mnogi korisnici se dive njegovoj udobnosti i zdepastop profilu koji odise njegovom pravom OG prirodom\npokazujuci da je Reebok Classics u zoni ponovnog pokretanja nekih od klasika za danasnju modu.Cena ovih patika iznosi75$");
	}
 
   else if ( c == 4){
 
 
    	printf("\n\nReebok Club C Revenge su patike koje su najcesce bele boje.Gornjiste od koze, dizajn srednjeg dela sa mekanim jastucicima\npruza maksimalnu udobnost i izgled, cena ovih patika iznosi 80$ ");
	}
 
   else if ( c == 5){
 
 
    	printf("\n\nPostojanje Cluba C 85 Vintage samo dokazuje da cak i klasicni modeli zaista zasluzuju paznju.Osim njegovog vrhunskog stila koji ide uz gotovo sve su pouzdana udobnost, kvalitet izrade koji je odobrio Reebok i vrhunsko pristajanje.Cena ovih patika iznosi 100$");
	}
 
   else if ( c == 6){
 
 
    	printf("\n\nReebok DMX Thrill ima karakteristike odlicne patike. Kombinira stil i udobnost u isto vrijeme. Patika ima ostar i \nfuturisticki izgled s linijama grafike po cijelom gornjem delu i odjekom kroz srednji djon. Za amortizaciju, Reebok se\npobrinuo da DMX tehnologija pokriva podrucja koja su korisnicima najpotrebnija.Cena ovih patika iznosi 95$ ");
	}
    else if ( c == 8){
 
 
    	printf("\n\nVintage silueta se susrece s uspomenama iz djetinjstva u ovoj saradnji izmedu Reeboka i Warner Bros-a ucrtanoj iz\ncrtanih filmova. Reebok je pedantno kapsulirao beskrajno rivalstvo izmedu dva kultna lika u jednoj od najklasicnijih\ncipela.Cena ovih patika iznosi 140$");
	}
 
   else if ( c == 7){
 
 
    	printf("\n\nBilo da setate gradom ili vezbate, ove patike mogu zadovoljiti vase potrebe jer pruzaju odlicnu amortizaciju i \npodrsku. Osim toga, Reebok Pump Court se razmece futuristickim dizajnom i zivim bojama koje ce privuci paznju publike.\nCena ovih patika iznosi 150$");
	}
 
   else if ( c == 9){
 
 
    	printf("\n\nPonovno zamišljeni DMX 2200 ne samo da ostaje vjeran svojim korenima iz pokretanja, vec je svom imenu dodao \nstatus ikone. Sa funkcijom i stilom, ova visestruka patika je izvan svog dizajna. Izdrzljiva mreza i perforirani\nsinteticki prekrivaci omogucavaju prozracnost dok drze stopala korisnika zasticena dok obavljaju svakodnevne aktivnosti\ni izgledaju moderno,a istovremeno udobno.Cena ove patike iznosi 65$ ");
	}
 else{
    	c = getchar();
 
    	system("cls");
    	printf("\n\n\n\n\n\t\tUneli ste nepostojeci proj pokusajte ponovo");
 
    	Sleep(1500);
    	system("cls");
    	goto reebok;
	}
 
 
 
 
 
 
	}
 
   else if ( b == 5){
     lacoste:
    	system("CLS");
    	printf("\n\n\t\t\tDobrodosli u Lacoste!");
 
 printf ("\n\n\n====================  \t =========================== \t  ==============================");
		printf ("\n 1.Lacoste Rey  95 $ \t 2.Lacoste LT Spirit 2.0 100$ \t   3.Lacoste Lerond Leather 80$");
    	printf ("\n==================== \t =========================== \t  ==============================");
 
		printf ("\n\n\n============================== \t ============================ \t =========================");
    	printf ("\n 4.Lacoste Bayliss Sneaker 85$ \t 5.Lacoste Court-Master 90$       6.Lacoste Joggeur 85$$");
    	printf ("\n============================== \t ============================ \t =========================");
 
    	printf ("\n\n\n====================== \t ====================================     ========================");
    	printf ("\n 7.Lacoste Hydez 95$   \t 8.Lacoste Carnaby Evo Trainers 100$        9.Lacoste Chaymon 70$$");
    	printf ("\n======================   ====================================     ========================");
        printf("\n\n\t\t\tUnesite 0 da bi vas vratilo korak unazad.");
    	printf("\n\t Unesite broj koji se nalaze iznad da bi dobili malo vise informacija o patici: ");
    	scanf("%d",&c);
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
if(c == 1){
   	printf("\n\nNovi Lacoste Rey u throat modeli plene stapanjem sportskog i sofisticiranog stila u jednu kolekciju.Patike su crne boje\nsa djonom napravljne od gume koji pruza veliku udobnost.\nCena ovih patika iznosi 90$");
   }
 
 
    else if ( c == 0){
    	system("cls");
 
 
		c = getchar();
    	goto nikee;
	}
    else if ( c == 2){
 
 
    	printf("\n\nPonovnim osmisljavanjem zivahnog izgleda serije LT Spirit, Lacoste je uveo blagovremeni dodatak za prelazak svih\ngranica sa elegantnijim i sportskijim Lacoste LT Spirit 2.0. Glatka i mesavina\nkutija za prste patike estetski je upotpunjena dvobojnim koloritom i panelom\npete na straznjoj strani.Cena ovih patika iznosi 100$");
	}
 
   else if ( c == 3){
 
 
    	printf("\n\nBalansiranje stila i udobnosti, Lacoste Lerond koze zadrzava stvari niskim profilom. Sastoji se od visokokvalitetnih \nmaterijala i ima izdrzljivu konstrukciju, ponudenu pri cijeni prilagodenu budzetu. Medutim, pronadeno \nje i nekoliko problema, ukljucujuci prilicno tanko djon i tesno uklapanje preko stopala za neke\nkorisnike.Cena ovih patika iznosi 80$");
	}
 
   else if ( c == 4){
 
 
    	printf("\n\nElegantan, ali nerazumljiv dizajn patika Lacoste Bayliss pohvaljen je snaznim divljenjem nekoliko recenzenata. Ovaj \ndjon iz Lacoste casual linije takoder je privuklo potrosace za svoju pristupacnost i vrhunsku izgradnju.Dok cipela\nmozda nije besprijekorno savrsena, ipak je to doslo vrlo preporucujuce za prednosti koje donosi.Cena ovih patika iznosi\n85$ ");
	}
 
   else if ( c == 5){
 
 
    	printf("\n\nSpetljivost i bezvremenski stil Lacoste Court-Majstora dostavljaju zgodne karakteristike koje ovu bitno popravi u \nnecijoj garderobi. Vecina kupaca se svidjelo njenoj luksuznim vibracijama i cistom zanatu tokom nadmetanja raspona \ncijena prilagodenim budzetu. Udobnost je takoder pohvalna kao sto su mnogi kupci svjedocili u pouzdanosti ove \nobuce za dnevnu upotrebu.Cena ovih patika iznosi 90$ ");
	}
 
   else if ( c == 6){
 
 
    	printf("\n\nNeke od znacajnih karakteristika Lacoste Joggeur je dobro odjeknuo s vecinom korisnika je njen povremeni i jednostavni \ndizajn, ugodan interijer i dostupnost vise boja. Naprotiv, sirine folks tvrdili su da su osjetili neku nelagodu\nzbog uske sirine dimenzije.Ali na kraju, vecina je bila zadovoljna mnogim usponimanjima, ovaj stisak zivota \ndoneo ih je.Cena ovih patika iznosi 85$ ");
	}
    else if ( c == 8){
 
 
    	printf("\n\nSvojim vremenskim i testiranim stilom i udobnoscu da li je na njihovoj  odjeci ili patici, Lacoste Carnaby Evo treneri \nsu istinski testament koji je osnovni nije nuzno losa stvar. Uprkos svojim manama, mnogi su nosili divi se kako \nto dopunjava bilo kakvu odjecu.Cena ovih patika je 100$ ");
	}
 
   else if ( c == 7){
 
 
    	printf("\n\nSa cvrstim vanjskim eksterijerom koji se s vremenom dobija udobnost, Lacoste Hydez jedno je od brzo prodajnih patika u \nkolekciji Lacoste u troskovima prilagodene budzetu. Mnogi su bili zadovoljni svojim izvezenim krokodilom na \nbocnim panelima koji odmah evociraju osjecaj sofisticiranosti koji vam omogucuje da budete svestran sa svojim \ngarderobom.Cena ovih patika je 95$ ");
	}
 
   else if ( c == 9){
 
 
    	printf("\n\nUdoban, dobar kvalitet i sjajan stil, Lacoste Chaymon prima sasvim uslugu kupaca s tim karakteristikama. Klasicna cipela\nsa svojim sportskim nadahnutom dizajnom, prirodno se sklapa sa ulicnim stilom i drzi vas kako izgledate modom \ndok drzite stvari minimalne.Cena ovih patika iznosi 70$ ");
	}
 else if (a != 1 || a != 2 || a != 3 || a != 4 || a !=6 || a != 0){
     	system("Cls");
     	printf("\n\n\t\t\tUneli ste nepostojeci broj!");
     	system ("cls");
 
		 	c = getchar();
    	goto nikee;
	 }
 
 
 
 else{
    	c = getchar();
 
    	system("cls");
    	printf("\n\n\n\n\n\t\tUneli ste nepostojeci proj pokusajte ponovo");
 
    	Sleep(1500);
    	system("cls");
    	goto lacoste;
	}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
	}
 
   else if ( b == 6){
    newbalanc:
    	system("CLS");
    	printf("\n\n\t\tDobrodosli u New Balance!");
 
printf ("\n\n\n============================  \t========================== \t  ============================");
		printf ("\n 1.New Balance 997 Sport 95$ \t 2.New Balance 530 110$ \t   3.New Balance 247 Luxe 80$");
    	printf ("\n============================ \t========================== \t  ============================");
 
		printf ("\n\n\n======================  \t ======================== \t =========================");
    	printf ("\n 4.New Balance 996 95$   \t 5.New Balance 1400 120$         6.New Balance 247 Mid 95$");
    	printf ("\n======================= \t ======================== \t =========================");
 
    	printf ("\n\n\n======================= \t ==========================     =========================");
    	printf ("\n 7.New Balance 992 95$   \t 8.New Balance 890 v8 130$        9.New Balance 555 70$");
    	printf ("\n=======================  \t ===========================    =========================");
        printf("\n\n\t\t\tUnesite 0 da bi vas vratilo korak unazad.");
    	printf("\n\t Unesite broj koji se nalaze iznad da bi dobili malo vise informacija o patici: ");
    	scanf("%d",&c);
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
if(c == 1){
   	printf("\n\nNB 997 Sport ispunjen je izvanrednim znacajkama cineci je jos jednim podcjenjivanjem patika u NB liniji. Vecina \nrecenzenata smatra se vrlo udobnom impresivnom izdrzljivoscu i premium kvalitetnoj konstrukciji.Ova \npatika istice se i u smislu estetike, jer prikazuje bezvremenski izgled svog prethodnika prilagoden kako\nbi odgovarao modernom stilu.Cena ove patike iznosi 95$");
   }
 
 
    else if ( c == 0){
    	system("cls");
 
 
		c = getchar();
    	goto nikee;
	}
    else if ( c == 2){
 
 
    	printf("\n\n New Balance 530 svedocanstvo je posvecenosti marke na dobroizgradene cipele koje ostaju istinito na njihovo\nobecanje o vrhunskom komforu, savrsenom fitu, boljem jastuku i izdrzljivozcu da traju godinama.\nOvaj je uskrsnuti klasicni trkac okrenuo zivotnim stilovima odrzava istu kvalitetu koja je zauzela mnoge trkace.\nNovi balans 530 patike su kupovina vrijednosti za novac koja bi trebala biti deo rotacije mnogih fanova patika.\nCena ovih prelepih patika je 110$");
	}
 
   else if ( c == 3){
 
 
    	printf("\n\nNew Balance 247 Luxe su odlicne patike koje mozete uzeti u svim mogucim bojama.Dizajn srednjeg dela sa mekanim\njastucicima pruza preveluku udobnost.cena pvih patika iznosi 80$");
}
   else if ( c == 4){
 
 
    	printf("\n\nOmiljena igra za cipele od strane mnogih , novi saldo 996 na trzistu je koji pruza funkcionalnost nosecima bez\nzrtvovanja stila. Kao i bilo koji NB klasik, on leti svjez izgled stare skolske cipele koja ide\ndobro s gotovo svim. Oni koji su pokusali i testirali par veoma su impresionirani superiornim kvalitetom,\npodrzavajucim fit-a i ukupnim udobnoscu.Cena ovih patika iznosi 95$");
	}
 
   else if ( c == 5){
 
 
    	printf("\n\nBezvremenski stil nove ravnoteze 1400 cini ga vrlo upecatljivim za mnoge kupce. Sa svojim dobro izradenim\ndetaljima i najfinijim kvalitetom, novi saldo 1400 moze dobiti kupca na bodovnoj obuci. Ovaj klasicni \npar ima vrhunsku antilop i mrežaste gornje sa elegantnim detaljima koji poboljsavaju luksuznu vibru ove\npatike. Iako neki prakticni kupci ne preporucuju posjedovanje jednog zbog njegove skupe cijene, ovaj\npar je odlicno odlazak na Patike.Cena ovih patika iznosi 120$");
	}
 
   else if ( c == 6){
 
 
    	printf("\n\nNew Balance 247 model dodao je sa srednjim gornjim ovratnikom na cipelu, novi saldo 247 MID nudi se po \npristupacnoj cijeni. Nudi ugodan komfor za hladnije dane i ima elegantan stil koji nudi beskrajne opcije\nza mijesanje i podudaranje, idealno za stalno izlazi na ulice.\nCena ovih patika iznosi 95$ ");
	}
    else if ( c == 7){
 
 
    	printf("\n\nNew Balance 992. vredi ponovno vredjanje ponovnog izdavanja jednostavno za njegov utjecaj na svet tehnologije\n i mode. Kao i svaka obuca koja je shvatila New Balance, NB992 je takoder prioritizira udobnost, kvalitet\n i stabilnost dok nudi stil koji savrseno djeluje kao modna izjava po sebi.\nCena ovih patika iznosi 95$");
	}
 
   else if ( c == 8){
 
 
    	printf("\n\n Jednostavan, cist svakodnevni trener, New Balance 890 V8 je svestrana opcija za razne voznje. Udobno ugodno za\n dane oporavka, on takoder dobro reaguje na ubrzavanje i ima veliku kolicinu jastuka za duze udaljenosti.\n Takode je znatno ispod prosjecne tezine dnevnih patika koji ga cine jos privlacnijim\nza tempo trcanja.Cena ovih patika iznosi 130$  ");
	}
 
   else if ( c == 9){
 
 
    	printf("\n\nOva iskljucivo zenska patika iz New Balance u obliku novog saldo 555 pruza koristenom cjelodnevnom udobnoscu sa \nsvojim FlipDuo reverzibilni uloskom. Dizajn niskog rezanja ove patike nudi u poboljsanju pokretljivosti za stopalo.\nMedutim, mozda nije povoljna za neke korisnike.Cena ove patike iznosi 70$ ");
	}
 
 
 else{
    	c = getchar();
 
    	system("cls");
    	printf("\n\n\n\n\n\t\tUneli ste nepostojeci proj pokusajte ponovo");
 
    	Sleep(1500);
    	system("cls");
    	goto newbalanc;
	}
 
    	}
    	else {
    		b = getchar();
    		system("Cls");
    		printf("\n\n\t\t\t\tUneli ste nepostojeci broj ili znak");
    		Sleep(1500);
    		system("cls");
    		goto nikee;
}
 
 
	}
 
 
 
   //KRAJ PATIKA ====================================================================================================================================================================================================================
 
 
 
 
 
   //ODECA ====================================================================================================================================================================================================================
     else if ( a == 2){
    odeca :
    	system("CLS");
		printf("\n\n\t\t\t    Dobrodosli u odeca!");
	 printf("     \n\n===============\t   \t=============== \t================"      );
     printf("     \n|  1.Nike     |\t     \t|   2.Adidas   | \t|   3. Puma    |"      );
     printf("     \n===============\t     \t=============== \t================"        );
 
     printf("     \n\n===============\t   \t=============== \t================"      );
     printf("     \n|  4.ReeBok   |\t        |  5.Armani   |       \t|   6.Gucci    |"      );
     printf("     \n===============\t     \t=============== \t================"        );
 
    	printf ("\n\n\t       Izaberite marku koju zelite kupiti tako \n\t   sto ce te izabari jedan broj od navedenih gore\n\t\tUnesite '0' da se vratite nazad.");
    	printf("\n\t\t");
    scanf("%d",&b);    	
 
    	if ( b == 1){
    nikeodeca:
    	system("CLS");
    	printf("\n\n\t\t\t\tDobrodosli u Nike!");
 
 
printf ("\n\n\n===================================  \t======================= \t======================");
		printf ("\n 1.Nike Sportswear Tech Fleece 130$ \t 2.Nike Sportswear 30$   \t3.Nike ACG Max 90 40$");
    	printf ("\n=================================== \t======================= \t======================");
 
		printf ("\n\n\n=========================  \t =========================== \t ======================");
    	printf ("\n 4.Nike New York Mets 25$   \t 5.Nike Cooperstown Logo 35$        6.NikeLab  75$");
    	printf ("\n========================= \t =========================== \t ======================");
 
    	printf ("\n\n\n========================= \t ===================        ========================");
    	printf ("\n 7.MLB Boston Red Sox 35$   \t 8.Nike Player 130$          9.Nike magic club 30$");
    	printf ("\n=========================  \t ====================       ========================");
        printf("\n\n\t\t\tUnesite 0 da bi vas vratilo korak unazad.");
    	printf("\n\t Unesite broj koji se nalaze iznad da bi dobili malo vise informacija o patici: ");
    	scanf("%d",&c);
 
 
 
 
if(c == 1){
   	printf("\n\nSpremni ste za ljuljanje topline i udobnosti vaseg omiljenog duksa za vikendice, ali trebate ga cuvati cistim? Ova\nnike tech fleece hoodie je pravi balans sa laganim, niskim dizajnom koji pakuje toplotu bez dodavanja\nmesanja.Cena ovog duksa iznosi 130$ ");
   }
 
 
    else if ( c == 0){
    	system("cls");
 
 
		c = getchar();
    	goto odeca;
	}
    else if ( c == 2){
 
 
    	printf("\n\nNike Sportswear je predivna klasicna majca koja dolazi u razlicitim bojama.Klasicni fit i svakodnevni pamuk \npruzaju poznati osecaj garderobe pravo iz torbe.Cena ove majce je 30$ ");
	}
 
   else if ( c == 3){
 
 
    	printf("\n\nNapravljeno sa teskim pamukom u nasoj fabrici 90 fit, ovaj ACG tie daje dodatni prostor kroz grudi i ramena,\ntako da mozete istraziti divljinu i gradske ulice u udobnosti.Cena ove majce iznosi 40$");
}
   else if ( c == 4){
 
 
    	printf("\n\nOstanite cool u cijeloj igara i razveselite ceo vas tim na pobeedu u ovom standardnom tipu.\nCena ove majce iznosi 25$");
	}
 
   else if ( c == 5){
 
 
    	printf("\n\nNapravljen sa mekom pamucnom tkaninom za cjelodnevni komfor, Nike Cooperstown Logotip je Majca \nnapravljena za vasu ljubav prema svojem timu sprijeda i sredistem u podebljanoj grafici.\nCena ove majce iznosi 35$ ");
	}
 
   else if ( c == 6){
 
 
    	printf("\n\nVrhunska flis tkanina i opusten dizajn isticu NikeLab Hoodie. Dio Essentials kolekcije, ovaj\nkomad koristi mekan osjecaj sa opustenim krojem za cjelodnevno nosenje.\nCena ovog duksa iznosi 75$.");
	}
    else if ( c == 7){
 
 
    	printf("\n\nNapravljena od meke pamucne tkanine za cjelodnevnu udobnost, MLB Boston Red Sox majca stavlja\nvasu ljubav prema vasem omiljenom igracu ispred i u sredini u podebljanoj grafiki.\nCena ovog duksa iznosi 35$");
	}
 
   else if ( c == 8){
 
 
    	printf("\n\nNike Player (MLB Los Angeles Angels) duks je dizajnirana sa logom tima na grudima i raglan rukavima\nkontrastne boje. Fleksibilan, rastezljiv u 4 smera dizajn i mekani poliester-spandex\nmaterijal kombinuju se za udobno pokrivanje u hladnijim danima igre.Cena ovog duksa iznosi 130$  ");
	}
 
   else if ( c == 9){
 
 
    	printf("\n\nPokazite svoju podrsku svom omiljenom igracu u ovoj majici, prikazujuci ponosne grafike na mekanoj\npamucnoj tkanini.Majca je crvene boje. Cena ove majce iznosi 30$ ");
	}
 
 
 else{
    	c = getchar();
 
    	system("cls");
    	printf("\n\n\n\n\n\t\tUneli ste nepostojeci proj pokusajte ponovo");
 
    	Sleep(1500);
    	system("cls");
    	goto nikeodeca;
	}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
	}
 
 
 
    else if ( b == 2){
    aodeca :
    	system("CLS");
    	printf("\n\n\t\tDobrodosli u Adidas!");
 
printf ("\n\n\n===========================  \t=====================   \t===============================");
		printf ("\n 1. BADGE OF SPORT TEE 25$ \t 2.AMPLIFIER TEE 15$     \t3. DRAWN SHMOOFOIL LOGO TEE  50$");
    	printf ("\n=========================== \t=====================   \t===============================");
 
		printf ("\n\n\n=======================================   =========================== \t ================================");
    	printf ("\n 4.EMANUEL HOOPS SUMMER ESSENTIALS 45$    5.ADIDAS X LEGO® TEE 45$         6.AEROREADY DESIGNED 2 MOVE 18$");
    	printf ("\n=======================================   =========================== \t ================================");
 
    	printf ("\n\n\n============================= \t =============================        ==========================");
    	printf ("\n 7.ADIDAS X PELOTON SHORT 55$    8.SUMMER ESSENTIALS TEE 45$          9.AMPLIFIER DESIGNED 2. 20$");
    	printf ("\n=============================  \t =============================        ==========================");
        printf("\n\n\t\t\tUnesite 0 da bi vas vratilo korak unazad.");
    	printf("\n\t Unesite broj koji se nalaze iznad da bi dobili malo vise informacija o patici: ");
    	scanf("%d",&c);
 
 
if(c == 1){
   	printf("\n\nZa dane u pokretu ili noci u gradu, ova majica omogucava svima da znaju za ciji tim igrate. Izradena je od mekog \npamucnog dresa za cjelodnevnu udobnost. Adidas Badge of Sport podebljanog kontrasta istice se na grudima.\nCena ove majce iznosi 25$ ");
   }
 
 
    else if ( c == 0){
    	system("cls");
 
		c = getchar();
    	goto odeca;
	}
    else if ( c == 2){
 
 
    	printf("\n\nNakon teretane, ova majica vam pruza udobnost do kraja dana. Napravljen je od lagane tkanine za mekan osjecaj.\n2Opusteni stil s okruglim izrezom cini ovo lakom opcijom za cjelodnevno nosenje.Cena ove majce iznosi 15$  ");
	}
 
   else if ( c == 3){
 
 
    	printf("\n\nMajica kratkih rukava iz prepoznatljive kolekcije Shmoofoil Marka Gonzalesa za adidas Skateboarding, sa Gonzovom\ninterpretacijom adidasovog kultnog logotipa.Cena ove majce iznosi 50$");
}
   else if ( c == 4){
 
 
    	printf("\n\nEric Emanuel je brend koji je postao sinonim za kosarkaske pantalone. Adidas se povezao sa etiketom kako bi\npreuzeo još jednog favorita za hoops, šampionsku majicu.Cena ove majce iznosi 45$");
	}
 
   else if ( c == 5){
 
 
    	printf("\n\nOde popularnim LEGO® minifigurama. Ova adidas kosarkaska majica zamislja Damiana Lillarda u LEGO svijetu.\nNosite ga kao udobnu, svakodnevnu majicu. Mekana tkanina od potpunog pamuka rezana je za labav kroj.\nCena ove majce iznosi 45$ ");
	}
 
   else if ( c == 6){
 
 
    	printf("\n\nSvi vole sjajan povratak. I ne dolaze bolje od povratka Bobe Fetta u Jabba the Huttovu palatu na Tatooine.\nUcinite svoj veliki ulaz u ovoj klasicnoj majici inspirisanoj Ratovima zvezda, sa ikonicnim grafickim\nprintom Jabba's Throne Room.Cena ove majce iznosi 18$ ");
	}
    else if ( c == 8){
 
 
    	printf("\n\nDizajniran imajuci na umu trening, pametni detalji na ovoj sportskoj majici ga izdvajaju iz gomile.\nOd zakosenih savova FreeLift dizajna, koji povecavaju opseg pokreta tokom pokreta iznad glave, do\nAEROREADY koji upija znoj, paznja je posvecena svim zavrsnim detaljima.Cena ove majce iznosi 45$ ");
	}
 
   else if ( c == 7){
 
 
    	printf("\n\n Vasa veza sa zajednicom Peloton podstice vas trening. Navucite ovu adidas x Peloton majicu i osjetite\nkako vam energija raste. Napravljen je pomocu UNITEFIT-a, tehnickog sistema koji koristi podatke\niz niza tijela – spektar velicina, spolova i oblika. Digitalizovana grafika preuzima svoje vizuelne naznake.\nCena ove majce iznosi 55$");
	}
 
   else if ( c == 9){
 
 
    	printf("\n\n Nakon teretane, ova majica vam pruza udobnost do kraja dana. Napravljen je od lagane tkanine za mekan\nosjecaj. Opusteni stil s okruglim izrezom cini ovo lakom opcijom za cjelodnevno nosenje.Cena ove\nmajce iznois 20$ ");
	}
 
 
 else{
    	c = getchar();
 
    	system("cls");
    	printf("\n\n\n\n\n\t\tUneli ste nepostojeci proj pokusajte ponovo");
 
    	Sleep(1500);
    	system("cls");
    	goto aodeca ;
}
 
 
 
	}
	//KRAJ ADIDAS MAJCIIIIIIIIIIIIIIIIIIIIIIIII 
 
 
 
 
 // POCETAK PUMAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
   else if ( b == 3){
    pumaodeca :
    	system("CLS");
    	printf("\n\n\t\t\t       Dobrodosli u Puma!");
 
 
printf ("\n\n\n======================  \t===================================   \t      ==================================");
		printf ("\n 1.HC Graphic Tee 20$  \t         2.Classics Men's Logo Hoodie FL 35$    \t3.PWRFLEECE Training Hoodie 45$");
    	printf ("\n======================  \t===================================   \t      ==================================");
 
		printf ("\n\n\n=============================        ============================= \t ======================");
    	printf ("\n 4.PUMA x TMC Hussle Tee 35$         Classics Relaxed Hoodie 65$         6.CLSX Men's Tee 30$");
    	printf ("\n=============================       ============================= \t ======================");
 
    	printf ("\n\n\n============================= \t====================================     ===========================================");
    	printf ("\n 7.PUMA x MAISON KITSUNE 50$    8.BMW M Motorsport Sweat Jacket 100$     9.BMW M Motorsport Essentials Training 75$");
    	printf ("\n=============================  \t====================================     ===========================================");
        printf("\n\n\t\t\tUnesite 0 da bi vas vratilo korak unazad.");
    	printf("\n\t Unesite broj koji se nalaze iznad da bi dobili malo vise informacija o patici: ");
    	scanf("%d",&c);	
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
	if(c == 1){
   	printf("\n\nKombinirajuci modu i funkcionalnost u dizajnu koji je ispred svog vremena, HC Graphic muska majica naglasava\nminimalisticke linije futuristickim materijalima i originalnim detaljima.Cena ove majce iznosi 20$ ");
   }
 
 
    else if ( c == 0){
    	system("cls");
 
		c = getchar();
    	goto odeca;
	}
    else if ( c == 2){
 
 
    	printf("\n\nClassics dobivaju novo azuriranje ove sezone s odrzivijim materijalima i prepoznatljivim dobrim izgledom.\nOva Classics Hoodie ima podebljani, upecatljiv logo Archive preko puta.Cena ovogg uksa iznosi 35$ ");
	}
 
   else if ( c == 3){
 
 
    	printf("\n\nZelite duksericu koja izgleda dobro, naravno. Sto ovo radi. Ocigledno. Ali zelite i duksericu s kapom\nkoja ce vas zagrijati kada se stvari pokvare.Cena ove majce iznosi 45$ ");
}
   else if ( c == 4){
 
 
    	printf("\n\nPUMA x TMC predstavlja: THE HUSSLE WAY MOGUL. MOGUL je ekskluzivna kapsula koja odaje pocast poduzetnickom\nputu Nipsey Husslea. Kapsula je inspirisana trenerkom koju je Groovey Lew posebno dizajnirao za Nipsey");
	}
 
   else if ( c == 5){
 
 
    	printf("\n\nUdahnite te hladne vibracije u ovu opustenu duksericu cistog, klasicnog dizajna. Sa opustenijim, opustenim\nkrojem, rebrastim ivicama i mekom brusenom tkaninom od znoja, ovo je jedan izuzetno udoban sloj, zavrsen nenaglasenim\nlogotipom Archive broj 1 za suptilan vintage dodir.Cena ovog duksa iznosi 65$ ");
	}
 
   else if ( c == 6){
 
 
    	printf("\n\nZivot je u tome da date izjavu ova 100% BCI pamucna majica s kontrastnim rukavima je moderan pristup\nbezvremenskom dizajnu obicne majice.Cena ove majce je 30$ ");
	}
    else if ( c == 7){
 
 
    	printf("\n\nMaison Kitsune je brend u Parizu i Tokiju koji su osnovali Gildas Loaec i Masaya Kuroki, koji nudi jedinstvenu\numjetnost zivota koja spaja modu, muziku i kafu. Za nasu drugu sezonu saradnje izmedu razlicitih brendova,\ninspiraciju crpimoiz japanske ulicne odjece i podizemo je dodirima francuske elegancije.Cena ove majce iznosi 50$  ");
}
   else if ( c == 8){
 
 
    	printf("\n\nProslavite bezvremenski luksuz i performanse BMW M Motorsport bez premca u nasoj najnovijoj kolekciji. Nasa\nBMW M Motorsport znojna jakna ima jasne linije, zatvaranje sa punim patentnim zatvaracem i reciklirane\nmaterijale za smanjeni uticaj na zivotnu sredinu.Cena ove majce iznosi 100$  ");
	}
 
   else if ( c == 9){
 
 
    	printf("\n\nProslavite bezvremenski luksuz i performanse BMW M Motorsport bez premca sa zamrsenim detaljima i ikonicnim\nbrendiranjem koji govore o liniji izvrsnosti u ovoj kolekciji partnera. Ova majica s kapuljacom za trening\nje svakodnevna komponenta s BMW M Motorsport DNK, sa markiranim akcentima i izradena od recikliranih materijala\nza odrvi stil i apetit za visokooktanska uzbudenja.  ");
	}
 
 
 else{
    	c = getchar();
 
    	system("cls");
    	printf("\n\n\n\n\n\t\tUneli ste nepostojeci proj pokusajte ponovo");
 
    	Sleep(1500);
    	system("cls");
    	goto pumaodeca ;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
	}
 
   else if ( b == 4){
    reebook :
    	system("CLS");
    	printf("\n\n\t\t\t\t    Dobrodosli u ReeBok!");
printf ("\n\n\n==================================    ==================================        ==========================");
		printf ("\n 1.Tech Style Activchill Move 30$       2.Reebok Classics Natural  25$    \t3.Tech Activchill Move 20$");
    	printf ("\n==================================    ==================================        ==========================");
 
		printf ("\n\n\n=============================        =============================== \t ===============================");
    	printf ("\n 4.Workout Ready Supremium 35$        United By Fitness MyoKnit 50$       6.Reebok Identity T-Shirt 20$");
    	printf ("\n=============================        =============================== \t ===============================");
 
    	printf ("\n\n\n==============================     ===========================        =====================================");
    	printf ("\n 7.Speedwick Graphic Move 35$        8.Reebok Identity 2 45$           9.United By Fitness Compression 65$");
    	printf ("\n==============================     ===========================        =====================================");
        printf("\n\n\t\t\tUnesite 0 da bi vas vratilo korak unazad.");
    	printf("\n\t Unesite broj koji se nalaze iznad da bi dobili malo vise informacija o patici: ");
    	scanf("%d",&c);	
 
 
if(c == 1){
   	printf("\n\nResite se uzbrdice u spin klasi ili veslajte uz maksimalni napor. Ova muska Reebok majca je dizajnirana za teske \ntreninge. Prozracna ACTIVCHILL tkanina i mrezasta poledina daju vam onaj osjecaj da stojite ispred\nventilatora.Cena ove majce iznosi 30$   ");
   }
 
 
    else if ( c == 0){
    	system("cls");
 
 
		c = getchar();
    	goto odeca;
	}
    else if ( c == 2){
 
 
    	printf("\n\nSkromni stil je sada vas, naravno. Neutralni tonovi napravljeni od boja koje koriste boje prirodnih pigmenata \nzemlje i minerala cine ovu majicu jednostavnom. Ukorijenite svoj izgled u Reeboku s izvezenim logotipom.\nDzersej od organskog pamuka izgleda neverovatno mekan tek iz kutije.Cena ovog duksa je 25$ ");
	}
 
   else if ( c == 3){
 
 
    	printf("\n\nResite se uzbrdice u spin klasi ili veslajte uz maksimalni napor. Ova muska Reebok majica je dizajnirana za teske \ntreninge.Prozracna ACTIVCHILL tkanina i mrezasta poledina daju vam onaj osjecaj da stojite ispred\nventilatora.Cena ove majce iznosi 29$ ");
}
   else if ( c == 4){
 
 
    	printf("\n\nBudite smireni. Zadrzi fokus. Lagana konstrukcija ove muske majice za trening ima mrezasti strasnji panel za \npoboljsanu ventilaciju.Mozete je kupiti u svim bojama.Cena ove majce iznosi 35$ ");
	}
 
   else if ( c == 5){
 
 
    	printf("\n\nMyoKnit tkanina u ovoj muskoj Reebok kosulji dugih rukava odvodi znoj s vaseg tijela dok maksimalno izlazite u kutiju.\nOvaj komad ima ugradenu konstruiranu mrezicu da vas odrzava ventilacijom dok se krecete od duplih ispod,\ndo misica podignutih, do burpeesa i ponovo nazand.Cena ovog duksa iznosi 50$ ");
	}
 
   else if ( c == 6){
 
 
    	printf("\n\nZadrzite sportski izgled izvan teretane. Ova muska pamucna majica je mekana i udobna tokom cijelog dana. Vektorski logo\nna grudima ukazuje na Reebok nasledje.Cena ove majce iznosi 20$ ");
	}
    else if ( c == 7){
 
 
    	printf("\n\nLjudima nije sudeno da sjede u stolicama cijeli dan. Ova muska majica je spremna za podizanje, bacanje i nosenje koje \nradite u teretani iu zivotu.Reciklirani materijali dio su Reebokove posvecenosti odrzivijoj buducnosti. Speedwick \nodstranjuje znoj sa vase koze kako biste bili suvi u trenucima ");
	}
 
   else if ( c == 8){
 
 
    	printf("\n\nBudite smireni. Zadrzi fokus. Lagana konstrukcija ove muske majice za trening ima mrezasti strasnji panel za \npoboljsanu ventilaciju.Mozete je kupiti u svim bojama.Cena ove majce iznosi 45$ ");
	}
 
   else if ( c == 9){
 
 
    	printf("\n\nTrazite kompresiju koja ce izdrzati vase najteze treninge? Ova muska Reebok kosulja dugih rukava je tu za vas.\nSpeedwick tkanina odvodi znoj kako biste bili hladni i suvi. Laserski rezane perforacije na ledima daju jos jedan\nudarac prozracnosti u kljucnoj zoni znojenja. Tkani paneli na rukavima daju vam otpornost na habanje za penjanje po\nkonopcu i pokrete sipkom.Cena ove majce iznosi 65$  ");
	}
 
 
 else{
    	c = getchar();
 
    	system("cls");
    	printf("\n\n\n\n\n\t\tUneli ste nepostojeci proj pokusajte ponovo");
 
    	Sleep(1500);
    	system("cls");
    	goto reebook ;
	}
 
 
 
 
 
 
 
 
 
	}
 
   else if ( b == 5){
    armani :
    	system("CLS");
    	printf("\n\n\t\t\t\t   Dobrodosli u Armani!");
 
printf ("\n\n\n===================================================    ==================================     ======================================");
		printf ("\n 1.Long-sleeved virgin-wool 1050$      2.Short-sleeved, virgin-wool 780$     3.Water-repellent twill blouson 3050$");
    	printf ("\n==================================    ================================================     ======================================");
 
		printf ("\n\n\n=====================================      =================================== \t ============================");
    	printf ("\n 4.Cotton matelasse sweatshirt 1600$        4.UT-shirt with organic sleeves 410$    6.Long-sleeved jersey 580$");
    	printf ("\n=====================================      ===================================   ============================");
 
    	printf ("\n\n\n===================================     =====================================        =================================");
    	printf ("\n 7.Short-sleeved with 3D logo 470$       8.Shirt jacket technical twill 1600$         9.Short-sleeved polo shirt 510$");
    	printf ("\n===================================     =====================================        =================================");
        printf("\n\n\t\t\tUnesite 0 da bi vas vratilo korak unazad.");
    	printf("\n\t Unesite broj koji se nalaze iznad da bi dobili malo vise informacija o patici: ");
    	scanf("%d",&c);	
 
 
 
if(c == 1){
   	printf("\n\nTrobojni dzemper od djevicanske vune s trodimenzionalnim cjevastim pletivom. Urbana privlacnost ovog stila cini ga \nsavrsenim uz svakodnevnu odjecu kada se nosi s farmerkama ili pantalonama s pet dzepova.\nCena ovog duksa iznosi 1050$  ");
   }
 
 
    else if ( c == 0){
    	system("cls");
 
 
		c = getchar();
    	goto odeca;
	}
    else if ( c == 2){
 
 
    	printf("\n\nMekan, udoban dzemper kratkih rukava od luksuzne ciste djevicanske vune. Ovaj moderan, svestrani stil je poboljsan\nkragnom i kontrastnim ukrasima, koji su takoder prikazani na izvezenom prednjem logotipu.\nCena ove majce iznosi 780$  ");
	}
 
   else if ( c == 3){
 
 
    	printf("\n\nJedan predmet, tri izgleda. Ovaj bluzon savrsen je od pocetka sezone do prvih hladnih dana u godini.\nNjegova lagano podstavljena unutrasnja jakna moze se skinuti i nositi samostalno. Izradena od vodoodbojnog\ntehnickog kepera, definirana je atletskim krojem, prostranim prednjim dzepovima i kapuljacom koja se moze skloniti u\nkragnu.Cena ove jakne iznosi neverovatnih 3050$ ");
}
   else if ( c == 4){
 
 
    	printf("\n\nOvaj stil sportske odjece reinterpretira se prema estetskoj viziji Giorgia Armanija. Izraden\nod kasmira i pamuka, kroj ove dukserice od dzersija i flisa je poboljšan jedinstvenim matelase prosivanjem s\nmotivom cigle. Dvobojni umetak trake na ramenima upotpunjuje izgled.Cena ovog duksa iznosi 1600$ ");
	}
 
   else if ( c == 5){
 
 
    	printf("\n\nReinterpretacija vrhunskog odjevnog predmeta koji se moze nositi bilo gde: majica. Ovaj pamucni\nstil ima kontrastne rastezljive obloge. Svestrani predmet koji savrseno upotpunjuje siroku lepezu opustenog\nizgleda.Cena ove majce iznosi 410$ ");
	}
 
   else if ( c == 6){
 
 
    	printf("\n\nNapravljena od frotirnog dresa, ova polo majica dugih rukava je izuzetno mekana i udobna. Veoma\nsvestran, ukrasen je prednjim izvezenim monokromatskim logotipom, pruzajuci opustenu privlacnost za dnevne\nizglede.Cena ovogo duksa iznosi 580$ ");
	}
    else if ( c == 7){
 
 
    	printf("\n\nOva pamucna majca ima novi preveliki 3D logo na prednjoj strani. Dodaje opustenu, urbanu\nprivlacnost svakoj odjevnoj kombinaciji kada se nosi s farmerkama ili pantalonama s pet dzepova\nCena ove majce iznosi 470$ ");
	}
 
   else if ( c == 8){
 
 
    	printf("\n\n Majca od vodoodbojnog tehnickog kepera, savrsena za prve hladne dane sezone. Njegov moderan,\nurbani izgled savrsen je uz svakodnevno nosenje.Cena ove prelepe jakne iznosi 1600$ ");
	}
 
   else if ( c == 9){
 
 
    	printf("\n\nReinterpretacija vrhunskog odevnog predmeta koji se moze nositi bilo gde . Ovaj pamucni stil\nodlikuje se kontrastnim rastezljivim obrubom i jedinstvenom kragnom na revere koja se\nkopca sa dva mala dugmeta. Svestrani predmet koji savrseno upotpunjuje siroku lepezu\nopustenog izgleda.Cena ove majce iznosi 510$  ");
	}
 
 
 else{
    	c = getchar();
 
    	system("cls");
    	printf("\n\n\n\n\n\t\tUneli ste nepostojeci proj pokusajte ponovo");
 
    	Sleep(1500);
    	system("cls");
    	goto armani;
	}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
	}
 
   else if ( b == 6){
   gucci:
    	system("CLS");
    	printf("\n\n\t\t\t        Dobrodosli u Gucci!");
 
	printf ("\n\n\n=============================   =======================================    ============================================");
		printf ("\n 1.Single-breasted coat 280$     2.Shooting star-print sweatshirt 980$     3.1921 crystal-embellished sweatshirt 1450$");
    	printf ("\n=============================   =======================================    ============================================");
 
		printf ("\n\n\n==================================      ===============================  ====================================");
    	printf ("\n 4.GG-canvas leather jacket 4500$        5.Interlocking G jacket 1980$    6.Monogram-pattern zip jacket 1400$");
    	printf ("\n==================================      ===============================   ===================================");
 
    	printf ("\n\n\n===========================       =====================================       ======================================");
    	printf ("\n 7.GG button peacoat 2700$        8.logo patch nylon sweatshirt 1900$          9.x The North Face padded jacket 3400$");
    	printf ("\n===========================       =====================================       ======================================");
        printf("\n\n\t\t\tUnesite 0 da bi vas vratilo korak unazad.");
    	printf("\n\t Unesite broj koji se nalaze iznad da bi dobili malo vise informacija o patici: ");
    	scanf("%d",&c);	
 
 
 
 
 
 
	if(c == 1){
   	printf("\n\n Reinterpretacija vrhunskog odjevnog predmeta koji se moze nositi bilo gde . Ovaj pamucni stil\nodlikuje se kontrastnim rastezljivim obrubom i jedinstvenom kragnom na revere koja se\nkopca sa dva mala dugmeta.Cena ovog duksa iznosi 280$");
   }
 
 
    else if ( c == 0){
    	system("cls");
 
 
		c = getchar();
    	goto odeca ;
	}
    else if ( c == 2){
 
 
    	printf("\n\nIgrajuci na prepoznatljivoj hirovitoj prirodi Guccijevog dizajna, ova dukserica zvijezda \npadalica cini zivopisan dodatak svakom casual ansamblu. Dizajniran sa sarenim printom\nzvezde padalice na prednjoj strani, ovaj komad sadrzi misticni osjecaj zabave koji se cesto\npovezuje s Kucom.Cena ovog duksa iznosi 980$  ");
	}
 
   else if ( c == 3){
 
 
    	printf("\n\nGucci daje priznanje svojoj istoriji ovom crnom duksericom. Napravljen od mekog pamuka,\novaj veliki komad je odštampan sa godinom osnivanja kuce i logom na prednjoj strani, koji\nje azuriran ukrasima od crnog kristala.Cena ovog duksa iznosi 1450$");
}
   else if ( c == 4){
 
 
    	printf("\n\nGuccijevo GG platno prikazuje osnivaca, Gucci Guccijeve inicijale. Istaknuta preko ove\njakne na patent zatvarac, sa uglacanim koznim ukrasima, referira na istoriju kuce na bezvremenski i\nsofisticiran nacin.Cena ove jakne iznosi 4500$ ");
	}
 
   else if ( c == 5){
 
 
    	printf("\n\nIzrezana na skracenu duzinu, ova jakna sa patentnim zatvaracem iz Guccijeve kolekcije AW21\nutjelovljuje naslijede brenda prikazujuci svoj prepoznatljivi Supreme GG print i Interlocking G\nmotive. Ukrasen web prugom na rukavima, ovaj komad se zakopcava sprijeda na patent zatvarac i ima elasticne manzetne\nza izgled inspiriran sportskom odecom.Cena ove jaknice iznosi 1980$ ");
	}
 
   else if ( c == 6){
 
 
    	printf("\n\nUravnotežujuci siluetu sportske odjece sa kultnim monogramom GG iz arhive kuce, tehnicki detalji\nkao što su prednji patent zatvarac i ljevkasti vrat dodaju element funkcionalnosti ovom podcijenjeno\nraskosnom dizajnu jakne iz Guccija. U prefinjenoj dvobojnoj boji ovaj odjevni predmet takoder ima\nbezvremenski osjecaj.Cena ove jakne iznosi 1400$ ");
	}
    else if ( c == 7){
 
 
    	printf("\n\nSamo zato sto je lose vreme ne znaci da ne mozete ostati u svom elementu stila. Zakopcajte se u ovaj prekrasan Guccijevi\nkaput sa dugmadima GG koji je savren da pobijedite bluz nakon sto vidite sivo nebo.\nCena ovog kaputa iznosi 2700$ ");
	}
 
   else if ( c == 8){
 
 
    	printf("\n\nGucci unosi svoj popustljivi stil u sportski komad u ovoj najlonskoj dukserici s logotipom. Trenutacno prepoznatljiv po\ndodatku vintage Gucci logotipa, komad je uzdignut kontrastnim, sofisticiranim crnim.\nCena ovog duksa iznosi 1900$ ");
	}
 
   else if ( c == 9){
 
 
    	printf("\n\nNorth Face x Gucci kolekcija povezuje dva brenda s bogatom arhivom, oba slaveci inovacije i duh istrazivanja. Ova plava \npodstavljena jakna ukrasena je detaljima sa odstampanim logom saradnje na poledini i\nstampom na celom kraju koji govori o osnovnoj temi saradnje.Cena ove jakne iznosi 3400$  ");
	}
 
 
 else{
    	c = getchar();
 
    	system("cls");
    	printf("\n\n\n\n\n\t\tUneli ste nepostojeci proj pokusajte ponovo");
 
    	Sleep(1500);
    	system("cls");
    	goto gucci ;
 
 
 
 
 
 
 
		}
 
 
 
 
 
 
	}else if ( b == 0){
 	   system("cls");
		c = getchar();
    	goto menu;
 }
 
else {
	system("cls");
 
        printf("\n\n\t\t\tUneli ste nepostojeci broj!");
        Sleep(1000);
		c = getchar();
    	goto odeca;
}
 
 
	}
   //KRAJ ODECA ====================================================================================================================================================================================================================
   else if ( a == 3){
    belateh :
    	system("CLS");
    	printf("\n\n\t\tDobrodosli u Bela tehnika!");
 
 
    	printf("     \n\n===============        ================  \t=================="      );
     printf("     \n| 1.Ves masine |       |  2.Frizderi  |     \t| 3.Mikrotalasne |  "      );
     printf("     \n===============\t       ================ \t=================="        );
 
     printf("     \n\n===============\t \t================ \t============================="      );
     printf("     \n|  4.Sporeti  |\t   \t| 5.Zamrzivaci |     \t| 6.Masine za pranje sudova |"      );
     printf("     \n===============\t   \t================ \t============================="        );
 
	printf("\n\n\t       Unesite 0 da bi vas vratilo korak unazad.");
	printf ("\n\t       Izaberite marku koju zelite kupiti tako \n\t   sto ce te izabari jedan broj od navedenih gore: ");
    scanf("%d",&d);	
 
 
 
 
	if(d == 1){
   //VES MASINA
 
  vesmasina  :
   system ("cls");
 
  printf("\n\n\t\t\t\t\tDobro dosli u ves masine !");
  printf ("\n\n\n====================================   ===============================    ================================");
		printf ("\n1.Samsung masina WW70T4040EE1LE 395$   2.Beko masina WUE 6612 BA 290$     3.Gorenje masina WNPI72SB  400$");
    	printf ("\n====================================   ===============================    ================================");
 
		printf ("\n\n\n==================================      ===============================   ===================================");
    	printf ("\n 4.Gorenje masina WNEI74SBS 450$        5.Beko masina WRE7511XWW 265$      6.Beko masina WUE 8736 XCM  450$");
    	printf ("\n==================================      ===============================   ===================================");
 
    	printf ("\n\n\n=================================       ==============================     ===================================");
    	printf ("\n 7.Gorenje masina WNEI74BS  370$        8.Gorenje masina WNPI82BS 320$      9.x Samsung masina  WUE 8735 420$");
    	printf ("\n=================================       ==============================     ===================================");
        printf("\n\n\t\t\tUnesite 0 da bi vas vratilo korak unazad.");
    	printf("\n\t Unesite broj koji se nalaze iznad da bi dobili malo vise informacija o patici: ");
    	scanf("%d",&c);	
 
  if(c == 1){
   	printf("\n\n Samsung masina za pranje vesa WW70T4040EE1LE - Odrzavaj unutrasnjost svoje masine za pranje vesa higijenski cistom.\nDrum Clean uklanja 99,9 % bakterija iz bubnja, koje uzrokuju neprijatne mirise.\nNisu ti potrebni jaki i skupi deterdzenti, jer se ciscenje obavlja natapanjem, pomeranjem i\nbrzim okretanjem. A uz to ce ti javiti kad joj bude potrebno ciscenje.");
   }
 
 
    else if ( c == 0){
    	system("cls");
 
 
		c = getchar();
    	goto menu;
	}
    else if ( c == 2){
 
 
    	printf("\n\nBeko masina za pranje vesa WUE 6612 BA - Nije za svu odecu potrebno intenzivno pranje. Ponekad je dovoljno i kratko \npranje. Super kratki program Xpress od 14 minuta omogucava pranje do 2 kg vesa\nza samo 14 minuta. 2 kg mozda ne deluje kao puno vesa, ali to je cak 20 majica! To znaci da\ncete biti spremni za polazak za tili cas. ");
	}
 
   else if ( c == 3){
 
 
    	printf("\n\nGorenje samostalna masina za pranje vesa WNPI72SB - Jedinstveni talasasti oblik WaveActive bubnja u kombinaciji sa\nposebnim talasastim 3D rebrima omeksavaju tkaninu i omogucavaju najneznije pranje. Za savrseno cist\ni minimalno izguzvan ves.Ovaj tihi, ali izuzetno efikasni motor, dizajniran je kako bi omogucio dugovecnost vase\nmasine za pranje vesa, dok istovremeno stedi elektricnu energiju sa svakim pranjem. Zbog njegove dugovecnost\n, Gorenje vam nudi i 10 godina garancije na ovaj motor.");
}
   else if ( c == 4){
 
 
    	printf("\n\nGorenje samostalna masina za pranje vesa WNEI74SBS- Jedinstveni talasasti oblik WaveActive bubnja u kombinaciji sa\nposebnim talasastim 3D rebrima omeksavaju tkaninu i omogucavaju najnenije pranje. Za savrzeno cist \nni minimalno izguzvan ves. Zaboravite na omeksivac! Dodatni tretman parom na kraju odabranog programa znacajno\numanjuje nabore, mirise i bakterije. Vasa odeca ce biti temeljno oprana, manje zguzvana i meksa.");
	}
 
   else if ( c == 5){
 
 
    	printf("\n\nBeko masina za pranje vesa WRE7511XWW, ima kapacitet pranja 7 kg vesa.Ako vam se cini da je potrebna citava vecnost\nda masina zavrsi pranje vesa, isprobajte program Daily Xpress. Sa programom Daily Xpress mozete da\noperete punu masinu vesa za samo 28 minuta, na temperaturi od 30 *C. Ves ce biti opran pre nego sto zavrsite\ngledanje one polusatne epizode serije koju nikako da odgledate.");
	}
 
   else if ( c == 6){
 
 
    	printf("\n\nBeko masina za pranje vesa WUE 8736 XCM - Nemojte da brinete o racunu za elektricnu energiju svaki put kada \nperete odecu. Zahvaljujuci dizajnu motora bez cetkica, ProSmart™ je zasluzan za ustedu energije, tisi \nrad i vecu trajnost – i to sve na jednom mestu. Tako na najbolji nacin koristite svoju masinu za pranje vesa bez \nvelikih racuna za struju i briga.");
	}
    else if ( c == 7){
 
 
    	printf("\n\nGoreneje masina za pranje vesa WNEI74BS - Zaboravite na omeksivac! Dodatni tretman parom na kraju odabranog \nprograma znacajno umanjuje nabore, mirise i bakterije. Vasa odeca ce biti temeljno oprana, manje\nzguzvana i meksa.");
	}
 
   else if ( c == 8){
 
 
    	printf("\n\nGorenje samostalna masina za pranje vesa WNPI82BS - Za nezno pranje svih vrsta odece Jedinstveni talasasti\noblik WaveActive bubnja u kombinaciji sa posebnim talasastim 3D rebrima omeksavaju tkaninu i omogucavaju\nnajneznije pranje. Za savrseno cist i minimalno izguzvan ves. ");
	}
 
   else if ( c == 9){
 
 
    	printf("\n\n Samsung masina za pranje vesa  WUE 8735 - Odrzavaj unutrasnjost svoje masine za pranje vesa higijenski cistom.\nDrum Clean uklanja 99,9 % bakterija iz bubnja, koje uzrokuju neprijatne mirise.\nNisu ti potrebni jaki i skupi deterdzenti, jer se ciscenje obavlja natapanjem, pomeranjem i\nbrzim okretanjem. A uz to ce ti javiti kad joj bude potrebno ciscenje.");
	}
 
 
 else{
    	c = getchar();
 
    	system("cls");
    	printf("\n\n\n\n\n\t\tUneli ste nepostojeci proj pokusajte ponovo");
 
    	Sleep(1500);
    	system("cls");
    	goto vesmasina;
	}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
   }
 
 
    else if ( d == 0){
    	system("cls");
 
 
		c = getchar();
    	goto menu;
	}
    else if ( d == 2){
  frizder:
 
   system("cls");
  printf("\n\n\t\t\t\t\tDobro dosli u Frizdere !");
  printf ("\n\n\n========================            ==================           ===========================");
		printf ("\n1.BEKO RDSA240K30WN 445$            2.VOX KG2630F 390$           3.BEKO RSSA290M33XBN  345$");
    	printf ("\n========================            ==================           ===========================");
 
		printf ("\n\n\n==============================        =========================     ================================");
    	printf ("\n 4.SAMSUNG RB34T652EB1/EK 500$        5.BEKO RSSA290M31WN  265$      6.SAMSUNG RB38T650ESA/EK  590$");
    	printf ("\n==============================        =========================     ================================");
 
    	printf ("\n\n\n=======================            ====================         ========================");
    	printf ("\n 7.LG GSJ760WBXV  1625$            8.VOX KK3300SF 280$          9. BEKO RSSE265K30SN5 425$");
    	printf ("\n=======================            ====================         ========================");
        printf("\n\n\t\t\tUnesite 0 da bi vas vratilo korak unazad.");
    	printf("\n\t Unesite broj koji se nalaze iznad da bi dobili malo vise informacija o patici: ");
    	scanf("%d",&c);	
 
	if(c == 1){
   	printf("\n\nTehnologija hladenja : samootapajuci \nVisina : 146,5 cm \nSirina : 54 cm \nBoja : bela  \nEnergetski razred : F ");
   }
 
 
    else if ( c == 0){
    	system("cls");
 
 
		c = getchar();
    	goto menu;
	}
    else if ( c == 2){
 
 
    	printf("\n\nTehnologija hladenja : samootapajuci\nVisina : 145 cm\nŠirina : 54 cm\nBoja : bela\nEnergetski razred : F ");
	}
 
   else if ( c == 3){
 
 
    	printf("\n\nKomora za zamrzavanje : bez komore za zamrzavanje\nVisina : 150,8 cm\nSirina : 59,5 cm\nBoja : siva\nEnergetski razred : F");
}
   else if ( c == 4){
 
 
    	printf("\n\nDispanzer : da\nTehnologija hladenja : No\nFrostVisina : 185,3 cm\nSirina : 59,5 cm\nBoja : crna\nEnergetski razred : E");
	}
 
   else if ( c == 5){
 
 
    	printf("\n\nTehnologija hladenja : samootapajuci\nKomora za zamrzavanje : bez komore za zamrzavanje\nVisina : 150,8 cm\nSirina : 59,2 cm\nBoja : bela\nEnergetski razred : F");
	}
 
   else if ( c == 6){
 
 
    	printf("\n\nPolozaj zamrzivaca : dole\nDispanzer : da\nTehnologija hladenja : No\nFrost Visina : 203 cm\nSirina : 59,5 cm\nBoja : srebrna\nEnergetski razred : E");
	}
    else if ( c == 7){
 
 
    	printf("\n\nDispanzer : da\nTehnologija hladenja : No\nFrosn Visina : 179 cm\nSirina : 91,2 cm\nBoja : crna\nLedomat : da\nEnergetski razred : F");
	}
 
   else if ( c == 8){
 
 
    	printf("\n\nPolozaj zamrzivaca : dole\nTehnologija hladenja : samootapajuci\nVisina : 170 cm\nSirina : 54 cm\nBoja : siva\nEnergetski razred : F ");
	}
 
   else if ( c == 9){
 
 
    	printf("\n\nTehnologija hladenja : samootapajuca\nKomora za zamrzavanje : bez komore za zamrzavanje\nVisina : 145,7 cm\nSirina : 54 cm\nBoja : siva\nEnergetski razred : F ");
	}
 
 
 else{
    	c = getchar();
 
    	system("cls");
    	printf("\n\n\n\n\n\t\tUneli ste nepostojeci proj pokusajte ponovo");
 
    	Sleep(1500);
    	system("cls");
    	goto frizder;
	}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
	}
 
   else if ( d == 3){
 
  mikrotalasne:
 
   system("cls");
  printf("\n\n\t\t\t\t     Dobro dosli u Mikrotalasne !");
  printf ("\n\n\n==============================         ==============================       ===============================");
		printf ("\n1.PANASONIC NN-K12JMMEPG 125$          2.PANASONIC NN-DF383BEPG 340$        3.PANASONIC NN-GT45KWSUG  170$");
    	printf ("\n==============================         ==============================       ===============================");
 
		printf ("\n\n\n===============================        ================================     =====================");
    	printf ("\n 4.PANASONIC  NN-K10JWMEPG 120$         5.SAMSUNG MS23F301TAK OL  175$      6.LG MH6565CPS  260$");
    	printf ("\n===============================        ================================     =====================");
 
    	printf ("\n\n\n=============================            =======================        =======================");
    	printf ("\n 7.SAMSUNG  MS23F300EEW 95$              8.GORENJE MO23A4X 125$           9.TESLA MW2030MS  90$");
    	printf ("\n=============================            =======================        =======================");
        printf("\n\n\t\t\tUnesite 0 da bi vas vratilo korak unazad.");
    	printf("\n\t Unesite broj koji se nalaze iznad da bi dobili malo vise informacija o patici: ");
    	scanf("%d",&c);	
 
 
if(c == 1){
   	printf("\n\nEAN:5025232881185\nBoja:Siva\nZapremina:20\nUpravljanje:Mehanicko ");
   }
 
 
    else if ( c == 0){
    	system("cls");
 
 
		c = getchar();
    	goto menu;
	}
    else if ( c == 2){
 
 
    	printf("\n\nEAN:5025232730025\nBoja:Crna/Inox\nZapremina:23 \nProizvodjac : Panasonic ");
	}
 
   else if ( c == 3){
 
 
    	printf("\n\nEAN:5025232893690\nBoja:Bela\nZapremina:31 l");
}
   else if ( c == 4){
 
 
    	printf("\n\nEAN:5025232881178\nBoja:Bela\nZapremina:20 l\nUpravljanje:Mehanicko");
	}
 
   else if ( c == 5){
 
 
    	printf("\n\nEAN:8806088219363\nBoja:Crna\nZapremina:23 l\nUpravljanje:Mehanicko");
	}
 
   else if ( c == 6){
 
 
    	printf("\n\nEAN:8801031522682\nBoja:Inox\nZapremina:25 l\nUpravljanje:Senzorsko - na dodir");
	}
    else if ( c == 7){
 
 
    	printf("\n\nEAN:8806090086571\nBoja:Bela\nZapremina:23 l\nUpravljanje:Mehanicko");
	}
 
   else if ( c == 8){
 
 
    	printf("\n\nEAN:3838782176579\nBoja:Metal\nZapremina:23 l\nUpravljanje:Elektronska ");
	}
 
   else if ( c == 9){
 
 
    	printf("\n\nEAN:8606018853861\nBoja:Srebrna\nZapremina:20 l\nUpravljanje:Mehanicko ");
	}
 
 
 else{
    	c = getchar();
 
    	system("cls");
    	printf("\n\n\n\n\n\t\tUneli ste nepostojeci proj pokusajte ponovo");
 
    	Sleep(1500);
    	system("cls");
    	goto mikrotalasne;
	}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}
   else if ( d == 4){
  sporeti :
  system("cls");
  printf("\n\n\t\t\t\t     Dobro dosli u Sporete !");
  printf ("\n\n\n==============================       ======================       ===========================");
		printf ("\n1.MIELE H 7264 BP OBSW 2200$          2.MIELE KM 6520 FR 80$        3.MIELE KM 7464 FR 1150$");
    	printf ("\n==============================       ======================       ===========================");
 
		printf ("\n\n\n=============================        ========================     =========================================");
    	printf ("\n 4.MIELE KM 7564 FL NC 120$            5.MIELE H 7140 BM 165$      6.MIELE Ugradna rerna H 7260 B EDST 180$");
    	printf ("\n=============================        ========================     =========================================");
 
    	printf ("\n\n\n============================           =======================         ==========================");
    	printf ("\n 7.HANSA BHCI65123030 220$              8.GORENJE MO23A4X 125$           9.BOSCH PIF672FB1E  700$");
    	printf ("\n============================           =======================         ==========================");
        printf("\n\n\t\t\tUnesite 0 da bi vas vratilo korak unazad.");
    	printf("\n\t Unesite broj koji se nalaze iznad da bi dobili malo vise informacija o patici: ");
    	scanf("%d",&c);	
 
    if(c == 1){
   	printf("\n\n EAN:4002516132523\nTip rerne:Multifunkcionalna\nZapremina:76 l\nNacin upravljanja:Elektronsko (Na dodir)\nEnergetska klasa:A+");
   }
 
 
    else if ( c == 0){
    	system("cls");
 
 
		c = getchar();
    	goto menu;
	}
    else if ( c == 2){
 
 
    	printf("\n\nEAN:4002515996744\nBoja:Crna\nVrsta ploce za kuvanje:Staklokeramicka\nNacin upravljanja:Senzorsko upravljanje (Na dodir) ");
	}
 
   else if ( c == 3){
 
 
    	printf("\n\nEAN:4002516138495\nBoja:Crna\nVrsta ploce za kuvanje:Indukciona\nNacin upravljanja:Senzorsko upravljanje (Na dodir)");
}
   else if ( c == 4){
 
 
    	printf("\n\nEAN:4002516138624\nBoja:Crna\nVrsta ploce za kuvanje:Indukciona\nNacin upravljanja:Senzorsko upravljanje (Na dodir)");
	}
 
   else if ( c == 5){
 
 
    	printf("\n\nEAN:4002516132349\nTip rerne:Multifunkcionalna\nZapremina:43 l\nNacin upravljanja:Elektronsko (Na dodir)");
	}
 
   else if ( c == 6){
 
 
    	printf("\n\nEAN:4002516171546\nTip rerne:Multifunkcionalna\nZapremina:76 l\nNacin upravljanja:Elektronsko (Na dodir)\nEnergetska klasa:A+");
	}
    else if ( c == 7){
 
 
    	printf("\n\nEAN:5906006230821\nBoja:Crna\nVrsta ploce za kuvanje:Staklokeramicka\nNacin upravljanja:Mehanicko (Prekidac)");
	}
 
   else if ( c == 8){
 
 
    	printf("\n\n EAN:3838782120831\nVrsta ploce za kuvanje:Staklokeramicka\nBoja:Crna\nNacin upravljanja:Senzorsko upravljanje (Na dodir)");
	}
 
   else if ( c == 9){
 
 
    	printf("\n\nEAN:4242002861609\nBoja:Bela\nVrsta ploce za kuvanje:Indukciona\nNacin upravljanja:Senzorsko upravljanje (Na dodir) ");
	}
 
 
 else{
    	c = getchar();
 
    	system("cls");
    	printf("\n\n\n\n\n\t\tUneli ste nepostojeci proj pokusajte ponovo");
 
    	Sleep(1500);
    	system("cls");
    	goto sporeti;
	}
}
 
 
 
 
 
 
    // 
 
 
 
 
 
// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ papir kamen makaze \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
 // \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ ZAMRZIVACIIIII \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
 // \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ ZAMRZIVACIIIII \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
 // \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ ZAMRZIVACIIIII \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
 
 
 
 
   else if ( d == 5){
 
 
    	zamrzivac:
   system("cls");
  printf("\n\n\t\t\t\t     Dobro dosli u Zamrzivace !");
  printf ("\n\n\n======================        ==========================      =======================");
		printf ("\n1.MIELE FN 28262 700$          2.LIEBHERR GG 5210 1900$        3.TESLA RU0900M1 450$");
    	printf ("\n======================        ==========================      =======================");
 
		printf ("\n\n\n===========================        ===========================     =====================");
    	printf ("\n 4.BEKO RFSA240M33XBN 550$         5.HISENSE FV206D4AW1  900$      6.VOX VF 2500F  360$");
    	printf ("\n===========================        ===========================     =====================");
 
    	printf ("\n\n\n=========================            =======================        =======================");
    	printf ("\n 7.GORENJE EC321BCSC 700$             8.HANSA BHCI66377 1200$        9.TESLA MW2030MS  90$");
    	printf ("\n=========================            =======================        =======================");
        printf("\n\n\t\t\tUnesite 0 da bi vas vratilo korak unazad.");
    	printf("\n\t Unesite broj koji se nalaze iznad da bi dobili malo vise informacija o patici: "); //   EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE
    	scanf("%d",&c);	
 
 
if(c == 1){
   	printf("\n\nEAN:4002515639252\nTip:Samostojeci\nSistem hladenja:No frost\nPolozaj zamrzivaca:Vertikalni\nKapacitet zamrzivaca:253 l\nEnergetski razred:F (1.3.2021.) ");
   }
 
 
    else if ( c == 0){
    	system("cls");
 
 
		c = getchar();
    	goto menu;
	}
    else if ( c == 2){
 
 
    	printf("\n\nEAN:9005382217771\nSistem hladenja:Rucno-otapajuci\nPolozaj zamrzivaca Status:Vertikalni\nKapacitet zamrzivaca:513 l ");
	}
 
   else if ( c == 3){
 
 
    	printf("\n\nEAN:8606018854516\nTip:Samostojeci\nPolozaj zamrzivaca:Vertikalni\nEnergetski razred:F (1.3.2021.)");
}
   else if ( c == 4){
 
 
    	printf("\n\nEAN:5944008923174\nTip:Samostojeci\nSistem hladenja:Staticni\nPolozaj zamrzivaca:Vertikalni\nKapacitet zamrzivaca:215 l\nEnergetski razred:F (1.3.2021.)");
	}
 
   else if ( c == 5){
 
 
    	printf("\n\nEAN:9005382217771\nSistem hladenja:Rucno-otapajuci\nPolozaj zamrzivaca Status:Vertikalni\nKapacitet zamrzivaca:513 l");
	}
 
   else if ( c == 6){
 
 
    	printf("\n\nEAN:8606019604868\nTip:Samostojeci\nSistem hladenja:Rucno-otapajuci\nPolozaj zamrzivaca:Vertikalni\nKapacitet zamrzivaca:188 l\nEnergetski razred:F (1.3.2021.)");
	}
    else if ( c == 7){
 
 
    	printf("\n\nEAN:5906006234973\nBoja:Crna\nVrsta ploce za kuvanje:Staklokeramicka\nNacin upravljanja:Senzorsko upravljanje (Na dodir)");
	}
 
   else if ( c == 8){
 
 
    	printf("\n\nEAN:4002515639252\nTip:Samostojeci\nSistem hladenja:No frost\nPolozaj zamrzivaca:Vertikalni\nKapacitet zamrzivaca:253 l\nEnergetski razred:F (1.3.2021.)  ");
	}
 
   else if ( c == 9){
 
 
    	printf("\n\nEAN:9005382217771\nSistem hladenja:Rucno-otapajuci\nPolozaj zamrzivaca Status:Vertikalni\nKapacitet zamrzivaca:513 l ");
	}
 
 
 else{
    	c = getchar();
 
    	system("cls");
    	printf("\n\n\n\n\n\t\tUneli ste nepostojeci proj pokusajte ponovo");
 
    	Sleep(1500);
    	system("cls");
    	goto zamrzivac;
	}
 
 
 
 
 
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
   else if ( d == 6){
 sudovi:
 
  system("cls");
  printf("\n\n\t\t\t\t     Dobro dosli u Masine za parnje sudova !");
  printf ("\n\n\n==============================         =============================         ============================");
		printf ("\n1.MIELE G 7360 SCVi OBSW 1450$         2.MIELE G 7310 Sci BRWS 700$          3.MIELE G 7910 Sci OBSW 330$");
    	printf ("\n===============================        =============================         ============================");
 
		printf ("\n\n\n===========================       ============================     ==========================");
    	printf ("\n 4.LIEBHERR GG 521 2300 $         5.BEKO  RFSA210K30WN  1400$      6.BEKO RFSA240M33XBN 800$");
    	printf ("\n===========================       ============================     ==========================");
 
    	printf ("\n\n\n=======================          =======================       =======================");
    	printf ("\n7.LIEBHERR G 1223 300$             8.VIVAX CFR-198 540$        9.TESLA MW2030MS  390$");
    	printf ("\n=======================          =======================       =======================");
        printf("\n\n\t\t\tUnesite 0 da bi vas vratilo korak unazad.");
    	printf("\n\t Unesite broj koji se nalaze iznad da bi dobili malo vise informacija o patici: ");
    	scanf("%d",&c);	
 
 if(c == 1){
   	printf("\n\nEAN:4002516092841\nKapacitet punjenja:14 kompleta\nEnergetski razred:C (1.3.2021.)\nOdlozeni start:Da ");
   }
 
 
    else if ( c == 0){
    	system("cls");
 
 
		c = getchar();
    	goto menu;
	}
    else if ( c == 2){
 
 
    	printf("\n\nEAN:4002516092711\nKapacitet punjenja:14 kompleta\nEnergetski razred:C (1.3.2021.)\nOdlozeni start:Da ");
	}
 
   else if ( c == 3){
 
 
    	printf("\n\nEAN:4002516316039\nKapacitet punjenja:14 kompleta\nEnergetski razred:C (1.3.2021.)\nOdloženi start:Da\nInverter motor:Ne");
}
   else if ( c == 4){
 
 
    	printf("\n\nEAN:9005382217771\nSistem hladenja:Rucno-otapajuci\nPolozaj zamrzivaca Status:Vertikalni\nKapacitet zamrzivaca:513 l");
	}
 
   else if ( c == 5){
 
 
    	printf("\n\nEAN:4002516091875\nKapacitet punjenja:14 kompleta\nEnergetski razred:C (1.3.2021.)\nOdlozeni start:Da");
	}
 
   else if ( c == 6){
 
 
    	printf("\n\nEAN:4002516092681\nKapacitet punjenja:14 kompleta\nEnergetski razred:C (1.3.2021.)");
	}
    else if ( c == 7){
 
 
    	printf("\n\nEAN:4016803022879\nTip:Samostojeci\nSistem hladenja:Smart frost\nPolozaj zamrzivaca:Vertikalni\nKapacitet zamrzivaca:98 l\nEnergetski razred:F (1.3.2021.)");
	}
 
   else if ( c == 8){
 
 
    	printf("\n\nEAN:4002515883044\nKapacitet punjenja:9 kompleta\nEnergetski razred:A++\nOdlozeni start:Da\nInverter motor:Ne");
	}
 
   else if ( c == 9){
 
 
    	printf("\n\nEAN:4002516061502\nKapacitet punjenja:14 kompleta\nEnergetski razred:C (1.3.2021.)\nOdlozeni start:Da ");
	}
 
 
 else{
    	c = getchar();
 
    	system("cls");
    	printf("\n\n\n\n\n\t\tUneli ste nepostojeci proj pokusajte ponovo");
 
    	Sleep(1500);
    	system("cls");
    	goto sudovi ;
	}
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 else{
    	c = getchar();
 
    	system("cls");
    	printf("\n\n\n\n\n\t\tUneli ste nepostojeci proj pokusajte ponovo");
 
    	Sleep(1500);
    	system("cls");
    	goto belateh;
	}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
	}
 
   else if ( a == 4){
 		ponovo7:
    	system("CLS");
    	printf("\n\n\t\t\tDobrodosli u telefoni!");
    	printf("     \n\n===============\t   \t=============== \t================"      );
     printf("     \n|  1.iPhone   |\t     \t|   2.Samsung |     \t| 3.Huawei     |"      );
     printf("     \n===============\t     \t=============== \t================"        );
 
     printf("     \n\n===============\t   \t=============== \t================"      );
     printf("     \n|  4.Xiaomi   |\t     \t|  5.Nokia    |     \t| 6.OnePlus    |"      );
     printf("     \n===============\t     \t=============== \t================"        );
 
	printf("\n\n\t       Unesite 0 da bi vas vratilo korak unazad.");
	printf ("\n\t       Izaberite marku koju zelite kupiti tako \n\t   sto ce te izabari jedan broj od navedenih gore: ");
    scanf("%d",&d);	
    //iphone
 
       if (d == 0){
		system("cls");
		goto menu;
}
 
 
 
 
 
    else if (d == 1){
    		system("CLS");
    	printf("\n\n\t\t\t    Dobrodosli u iPhone telefone!");
    	printf ("  \n\n\t\t\n============================== \t\t============================     \t============================");
    	printf ("\n1.iPhone 13 Pro Max 128GB 1100$           2.iPhone 13 Pro 128GB 1000$               3.iPhone 13 128GB 700$");
    	printf ("  \n==============================       \t============================     \t============================");
 
 
 
        printf ("  \n\n\n===========================      \t============================       \t================================");
    	printf ("\n4.iPhone 13 Mini 128GB 700$ \t          5.iPhone 12 Pro Max 128GB 1000$          6.iPhone 12 Pro 128GB 950$");
    	printf ("  \n===========================         \t==========================       \t================================");
 
 
 
 
	    printf ("\n\n\n==============================     \t============================        \t================================");
    	printf ("\n 7.iPhone 12 Mini 64GB 435$ \t          8.iPhone 12 64GB  650$ \t          9.iPhone 11 Pro Max 64GB 600$");
    	printf ("\n============================== \t     \t============================      \t================================");
    ponovo1:
    	printf("\n\t\t\tUnesite 0 za jedan korak nazad");
 	printf("\n\t Unesite broj koji se nalaze iznad da bi dobili malo vise informacija o telefonu: ");
    	scanf("%d",&e);
 
 
	if(e == 1){
    	printf("\niPhone 13 Pro Max je najnoviji model Iphonea.iPhone 13 Pro Max sadrzi 128GB memorije i 6GB RAM Memorije.\niPhone 13 Pro Max dolazi sa najvecim unapredenjem kamere do sada.\nMakro fotografija omogucava da slikaš objekte sa 2 cm udaljenosti, a da oni budu i dalje u fokusu.\niPhone 13 Pro Max poseduje najbrzi cip na pametnom telefonu do sada.\nSa dijagonalom ekrana od 6.7 inca i zastitom slojem ekrana od nerdjajuceg celika, iPhone 13 Pro Max najcvrsci je pametni telefon do sada.\niPhone 13 Pro Max sadrzi bateriju od 4352mAh.");
		exit(0);
	}
	else if ( e == 0){ 
	goto ponovo7;
	}
	else if(e == 2){
		printf("\niPhone 13 Pro izbacen je 24. septembra 2021 godine.iPhone 13 Pro sadrzi 128GB memorije i 6GB RAM Memorije.\niPhone 13 Pro je tezak samo 208grama.Dolazi sa ekranom od 6.1 incha, 120hz osvezavanje ekrana i 12mp kamerom.\nTakodje iPhone 13 Pro sadrzi najbrzi cip na pametnom telefonu do sada, tacnije A15.iPhone 13 Pro sadrzi bateriju od 3095mAh.");
		exit(0);
	}
	else if(e == 3){
		printf("\niPhone 13 izbacen je 24. septembra 2021 godine. iPhone 13 dolazi sa 128GB memorije i 4GB RAM memorije.\niPhone 13 tezak je 174grama. Dolazi sa ekranom od 6.1 incha, 60hz osvezavanjem ekrana i 12mp kamerom.\niPhone 13 sadrzi najbrzi cip na pametnom telefonu do sada, tacnije A15 koji ide cak i do 3.2GHz.iPhone 13 sadrzi bateriju od 3240mAh.");
		exit(0);
	}
	else if(e == 4){
		printf("\niPhone 13 Mini izbacen je 24. septembra 2021. godine. Iphone 13 Mini dolazi sa 128GB memorije i 4GB RAM memorije.\niPhone 13 Mini tezak je 141gram. Dolazi sa ekranom od 5.4 incha, 60hz osvezavanjem ekrana i 12mp kamerom.\niPhone 13 Mini sadrzi najbrzi cip na pametnom telefonu do sada, tacnije A15 koji ide cak i do 3.2GHz.iPhone 13 Mini sadrzi bateriju od 2438mAh.");
		exit(0);
	}
	else if(e == 5){
		printf("\niPhone 12 Pro Max izbacen je 24. novembra 2020. godine. iPhone 12 Pro Max dolazi sa 128GB memorije i 6GB RAM memorije.\niPhone 12 Pro Max tezak je 228grama. Dolazi sa ekranom od 6.7 incha, 60hz osvezavanjem ekrana i 12mp kamerom.\niPhone 12 Pro Max sadrzi A14 cip, koji dostize cak i 3.1GHz.iPhone 12 Pro Max sadrzi bateriju od 3687mAh.");
		exit(0);
	}
	else if(e == 6){
		printf("\niPhone 12 Pro izbacen je 26. oktobra 2020. godine. iPhone 12 Pro dolazi sa 128GB memorije i 6GB RAM memorije.\niPhone 12 Pro tezak je 189grama. Dolazi sa ekranom od 6.1 incha, 60hz osvezavanjem ekrana i 12mp kamerom.\niPhone 12 Pro sadrzi A14 cip, koji dostize cak i 3.1GHz.iPhone 12 Pro sadrzi bateriju od 2815mAh. ");
		exit(0);
	}
	else if(e == 7){
		printf("\niPhone 12 Mini izbacen je 24. novembra 2020. godine. iPhone 12 Mini dolazi sa 128GB memorije i 4GB RAM memorije.\niPhone 12 Mini tezak je 141gram. Dolazi sa ekranom od 5.4 incha, 60hz osvezavanjem ekrana i 12mp kamerom.\niPhone 12 Mini sadrzi A14 cip, koji dostize cak i 3.1GHz.iPhone 12 Mini sadrzi bateriju od 2438mAh.");
		exit(0);
	}
	else if(e == 8){
		printf("\niPhone 12 izbacen je 23 oktobra. 2020. godine. iPhone 12 dolazi sa 64GB memorije i 4GB RAM memorije.\niPhone 12 tezak je 164grama. Dolazi sa ekranom od 6.1 incha, 60hz osvezavanjem ekrana i 12mp kamerom.\niPhone 12 sadrzi A14 cip, koji dostize cak i 3.1GHz.iPhone 12 sadrzi bateriju od 2815mAh.");
		exit(0);
	}
	else if(e == 9){
		printf("\niPhone 11 Pro Max izbacen je 20. septembra 2019. godine. iPhone 11 Pro Max dolazi sa 64GB memorije i 4GB RAM memorije.\niPhone 11 Pro max tezak je 226 grama. Dolazi sa ekranom od 6.1 incha, 60hz osvezavanjem ekrana i 12mp kamerom.\nIphone 11 Pro max sadrzi A13 cip, koji dostize 2.65GHz.iPhone 11 Pro Max sadrzi bateriju od 3969mAh.");
		exit(0);
	}
 
 
 
	else {
		printf("\t Uneli ste nepostojeci broj, pokusajte ponovo."); 
		Sleep(1000);
    	goto ponovo1;
	}
	}
	//samsung
	else if(d == 2){
		system("CLS");
		printf("\n\n\t\t\t    Dobrodosli u Samsung telefone!");
    	printf ("\n\n\t\t\n==============================    \t\t============================                \t============================");
    	printf ("\n1.Samsung Galaxy S21 Ultra 128GB 1200$           2.Samsung Galaxy S21+ 128GB 1000$                 3.Samsung Galaxy S21 128GB 820$");
    	printf ("\n==============================           \t============================                  \t============================");
 
        printf ("\n\n\n===========================           \t\t============================                 \t================================");
    	printf ("\n4.Samsung Galaxy Note 20 256GB 1000$             5.Samsung Galaxy S20 Ultra 128GB 785$             6.Samsung Galaxy S20+ 128GB 700$");
    	printf ("\n===========================               \t==========================                   \t================================");
 
	    printf ("\n\n\n==============================         \t\t============================                 \t================================");
    	printf ("\n7.Samsung Galaxy S20 128GB 550$\t                 8.Samsung Galaxy Note 10+ 256GB 500$              9.Samsung Galaxy Note 10 256GB 460$");
    	printf ("\n============================== \t          \t============================                 \t================================");
	ponovo2:
	printf("\n\n\t Unesite broj koji se nalaze iznad da bi dobili malo vise informacija o telefonu: ");
    	scanf("%d",&e);
    if(e == 1){
    	printf("\nSamsung Galaxy S21 Ultra izbacen je 29. januara 2021. godine. Samsung Galaxy S21 Ultra dolazi sa 128GB memorije i 12GB RAM memorije.\nSamsung Galaxy S21 Ultra tezak je 227grama, sadrzi glavnu kameru od 108mp, dok je selfi kamera 40mp.Samsung Galaxy S21 sadrzi ekran 6.8incha i 120hz osvezavanje ekrana.\nSamsung Galaxy S21 Ultra sadrzi Exynos 2100 cip koji dostize 2.9GHz, i ima bateriju od 5000mAh.");
	}
	else if ( e == 0){ 
	goto ponovo7;
	}
	else if(e == 2){
		printf("\nSamsung Galaxy S21+ izbacen je 29. januara 2021. godine. Samsung Galaxy S21+ dolazi sa 128GB memorije i 8GB RAM memorije.\nSamsung Galaxy S21+ tezak je 202 grama, sadrzi kameru od 12mp. Samsung Galaxy S21+ sadrzi ekran od 6.7 incha i 120hz osvezavanje ekrana.\nSamsung Galaxy S21+ sadrzi Exynos 2100 cip koji dostize 2.9GHz, i ima bateriju od 4800mAh.");
	}
	else if(e == 3){
		printf("\nSamsung Galaxy S21 izbacen je 29. januara 2021. godine. Samsung Galaxy S21 dolazi sa 128GB memorije i 8GB RAM memorije.\nSamsung Galaxy S21 tezak je 169grama, sadrzi kameru od 12mp. Samsung Galaxy S21 sadrzi ekran od 6.2 incha i 120hz osvezavanje ekrana.\nSamsung Galaxy S21 sadrzi Exynos 2100 cip koji dostize 2.9GHz, i ima bateriju od 4000mAh.");
	}
	else if(e == 4){
		printf("\nSamsung Galaxy Note 20 izbacen je 21. avgusta 2021. godine. Samsung Galaxy Note 20 dolazi sa 256GB memorije i 8GB RAM memorije.\nSamsung Galaxy Note 20 tezak je 192 grama, sadrzi kameru od 12mpx. Samsung Galaxy Note 20 sadrzi ekran od 6.7 incha i 60hz osvezavanje ekrana.\nSamsung Galaxy Note 20 sadrzi Exynos 990 cip koji dostize 2.73GHz, i ima bateriju od 4300mAh. ");
	}
	else if(e == 5){
		printf("\nSamsung Galaxy S20 Ultra izbacen je 21. avgusta. 2021. godine. Samsung Galaxy S20 Ultra dolazi sa 128GB memorije i 12GB RAM memorije.\nSamsung Galaxy S20 Ultra tezak je 208 grama, sadrzi kameru od 12mpx. Samsung Galaxy S20 Ultra sadrzi ekran od 6.9 incha i 120hz osvezavanje ekrana.\nSamsung Galaxy S20 Ultra sadrzi Exynos 990 cip koji dostize 2.73GHz, i ima bateriju od 4500mAh.");
	}
	else if(e == 6){
		printf("\nSamsung Galaxy S20+ izbacen je 6. marta 2021. godine. Samsung Galaxy S20+ dolazi sa 128GB memorije i 8GB RAM memorije.\nSamsung Galaxy S20+ tezak je 186 grama, sadrzi kameru od 12mpx. Samsung Galaxy S20+ sadrzi ekran od 6.7 incha i 60hz osvezavanje ekrana.\nSamsung Galaxy S20+ sadrzi Exynos 990 cip koji dostize 2.73GHz,i ima bateriju od 4500mAh.");
	}
	else if(e == 7){
		printf("\nSamsung Galaxy S20 izbacen je 6. marta 2021. godine. Samsung Galaxy S20 dolazi sa 128GB memorije i 12GB RAM memorije.\nSamsung Galaxy S20 tezak je 163 grama, sadrzi kameru od 12mpx. Samsung Galaxy S20 sadrzi ekran od 6.2 incha i 60hz osvezavanje ekrana.\nSamsung Galaxy S20 sadrzi Exynos 990 cip koji dostize 2.73GHz,i ima bateriju od 4000mAh.");
	}
	else if(e == 8){
		printf("\nSamsung Galaxy Note 10+ izbacen je 23. avgusta 2019. godine. Samsung Galaxy Note 10+ dolazi sa 256GB memorije i 12GB RAM memorije.\nSamsung Galaxy Note 10+ tezak je 196 grama, sadrzi kameru od 12mpx. Samsung Galaxy Note 10+ sadrzi ekran od 6.8 incha i 60hz osvezavanje ekrana.\nSamsung Galaxy Note 10+ sadrzi Exynos 9825 cip koji dostize 2.73GHz,i ima bateriju od 4300mAh.");
	}
	else if(e == 9){
		printf("\nSamsung Galaxy Note 10 izbacen je 23. avugsta 2019. godine. Samsung Galaxy Note 10 dolazi sa 256GB memorije i 8GB RAM memorije.\nSamsung Galaxy Note 10 tezak je 168 grama, sadrzi kameru od 12mpx. Samsung Galaxy Note 10  sadrzi ekran od 6.3 incha i 60hz osvezavanje ekrana.\nSamsung Galaxy Note 10 sadrzi Exynos 9825 cip koji dostize 2.73GHz, i ima bateriju od 3500mAh.");
	}
	else {
		printf("\t Uneli ste nepostojeci broj, pokusajte ponovo.");
		Sleep(1000);
		goto ponovo2;
	}
}
	//huawei
	else if(d == 3){
		system("CLS");
		printf("\n\n\t\t\t    Dobrodosli u Huawei telefone!");
    	printf ("\n\n\t\t\n==============================    \t\t============================                \t============================");
    	printf ("\n1.Huawei P40 Pro+ 256GB 1300$          		2.Huawei P50 Pro 128GB 1100$                    3.Huawei P40 Pro 128GB 1000$ ");
    	printf ("\n==============================           \t============================                  \t============================");
 
        printf ("\n\n\n===========================           \t\t============================                 \t================================");
    	printf ("\n4.Huawei P50 Pocket 128GB 1600$             	5.Huawei P30 Pro 256GB 600$          		6.Huawei P30 128GB 500$            ");
    	printf ("\n===========================               \t==========================                   \t================================");
 
	    printf ("\n\n\n==============================         \t\t============================                 \t================================");
    	printf ("\n7.Huawei P20 Pro 64GB 400$                      8.Huawei P20 128GB 350$              		9.Huawei P20 Lite 64GB 250$		     ");
    	printf ("\n============================== \t          \t============================                 \t================================");
    	ponovo3:
    	printf("\n\n\t Unesite broj koji se nalaze iznad da bi dobili malo vise informacija o telefonu: ");
    	scanf("%d",&e);
    if(e == 1){
    	printf("\nHuawei P40 Pro+ izbacen je 7. juna 2020. godine. Huawei P40 Pro+ dolazi sa 128GB memorije i 8GB RAM memorije.\nHuawei P40 Pro+ tezak je 226 grama, i sadrzi glavnu kameru od 50mpx. Huawei P40 Pro+ sadrzi ekran od 6.58incha i 90hz osvezavanje ekrana.\nHuawei P40 Pro+ sadrzi Kirin 990 5G cip koji dostize 2.9GHz, i ima bateriju od 4200mAh.");
	}
	else if(e == 2){
		printf("\nHuawei P50 Pro izbacen je 12. avgusta 2021. godine. Huawei P50 Pro dolazi sa 128GB memorije i 8GB memorije.\nHuawei P50 Pro tezak je 195 grama i sadrzi glavnu kameru od 50mpx. Huawei P50 Pro sadrzi ekran od 6.6 incha i 120hz osvezavanje ekrana.\nHuawei P50 Pro sadrzi Kirin 9000 cip, koji dostize cak 3.1GHz,i ima bateriju od 4360mAh.");
	}
	else if ( e == 0){ 
	goto ponovo7;
	}
	else if(e == 3){
		printf("\nHuawei P40 Pro izbacen je 7. aprila 2020. godine. Huawei P40 Pro dolazi sa 128GB memorije i 8GB RAM memorije.\nHuawei P40 tezak je 209 grama i sadrzi glavnu kameru od 50mpx. Huawei P40 Pro sadrzi ekran od 6.58incha i 90hz osvezavanje ekrana.\nHuawei P40 Pro sadrzi Kirin 990 5G cip koji dostize 2.9GHz, i ima bateriju od 4200mAh.");
	}
	else if(e == 4){
		printf("\nHuawei P50 Pocket izbacen je 23. decembra 2021. godine. Huawei P50 Pocket dolazi sa 128GB memorije i 8GB RAM memorije.\nHuawei P50 Pocket tezak je 190 grama i sadrzi glavnu kameru od 40mpx. Huawei P50 Pocket sadrzi ekran od 6.9 incha i 120hz osvezavanje ekrana.\nHuawei P50 Pocket sadrzi SnapDragon 888 cip koji dostize 3GHz,i ima bateriju od 4000mAh.");
	}
	else if(e == 5){
		printf("\nHuawei P30 Pro izbacen je 1. juna 2020. godine. Huawei P30 Pro dolazi sa 256GB memorije i 8GB RAM memorije.\nHuawei P30 Pro tezak je 192 grama i sadrzi glavnu kameru od 40mpx. Huawei P30 Pro sadrzi ekran od 6.47 incha i 60hz osvezavanje ekrana.\nHuawei P30 Pro sadrzi Kirin 980 cip koji dostize 2.6GHz, i ima bateriju od 4200mAh.");
	}
	else if(e == 6){
		printf("\nHuawei P30 izbacen je 26. marta 2019. godine. Huawei P30 dolazi sa 128GB i 6GB RAM memorije.\nHuawei P30 tezak je 165 grama i sadrzi glavnu kameru od 40mpx.Huawei P30 sadrzi ekran od 6.1 incha i 60hz osvezavanje ekrana.\nHuawei P30 sadrzi Kirin 980 cip koji dostize 2.6GHz,i ima bateriju od 3650mAh.");
	}
	else if(e == 7){
		printf("\nHuawei P20 Pro izbacen je 30. marta 2018. godine. Huawei P20 Pro dolazi sa 128GB memorije i 6GB RAM memorije.\nHuawei P20 Pro tezak je 180 grama i sadrzi glavnu kameru od 40mpx. Huawei P20 Pro sadrzi ekran od 6.1 incha i 60hz osvezavanje ekrana.\nHuawei P20 Pro sadrzi Kirin 970 cip koji dostize 2.4GHz,i ima bateriju od 4000mAh.");
	}
	else if(e == 8){
		printf("\nHuawei P20 izbacen je 30. marta 2018. godine. Huawei P20 dolazi sa 128GB memorije i 6GB RAM memorije.\nHuawei P20 tezak je 180grama i sadrzi glavnu kameru od 40mpx. Huawei P20 sadrzi ekran od 6.1 incha i 60hz osvezavanje ekrana.\nHuawei P20 sadrzi Kirin 970 cip koji dostize 2.4GHz, i ima bateriju od 4000mAh.");
	}
	else if(e == 9){
		printf("\nHuawei P20 Lite izbacen je 17. juna 2019. godine. Huawei P20 Lite dolazi sa 64GB memorije i 4GB RAM memorije.\nHuawei P20 Lite tezak je 178 grama i sadrzi glavnu kameru od 16mpx. Huawei P20 Lite sadrzi ekran od 6.4 incha i 60hz osvezavanje ekrana.\nHuawei P20 Lite sadrzi Kirin 710, koji dostize 2.1GHz, i ima bateriju od 4000mAh.");
	}
	else {
		printf("\t Uneli ste nepostojeci broj, pokusajte ponovo.");
		Sleep(1000);
		goto ponovo3;
	}
	}
//xiaomi
	else if(d == 4){
		system("CLS");
		printf("\n\n\t\t\t    Dobrodosli u Xiaomi telefone!");
    	printf ("\n\n\t\t\n==============================    \t\t============================                \t============================");
    	printf ("\n1.Xiaomi Mi 11 Ultra 1300$           		2.Xiaomi Mi i11 500$                 		3.Xiaomi Redmi Note 10 Pro 360$");
    	printf ("\n==============================           \t============================                  \t============================");
 
        printf ("\n\n\n===========================           \t\t============================                 \t================================");
    	printf ("\n4.Xiaomi Mi 11T Pro 600$             	        5.Xiaomi Mi 11T 580$            		6.Xiaomi Poco X3 Pro 280$ ");
    	printf ("\n===========================               \t==========================                   \t================================");
 
	    printf ("\n\n\n==============================         \t\t============================                 \t================================");
    	printf ("\n7.Xiaomi Mi 12X 710$                            8.Xiaomi Black Shark 3 570$              	9.Xiaomi Mi 11T Lite 450$");
    	printf ("\n============================== \t          \t============================                 \t================================");
    	ponovo4:
    	printf("\n\n\t Unesite broj koji se nalaze iznad da bi dobili malo vise informacija o telefonu: ");
    	scanf("%d",&e);
    if(e == 1){
    	printf("\nXiaomi Mi 11 Ultra izbacen je 1. novembra 2021. godine. Xiaomi Mi 11 Ultra dolazi sa 128GB memorije i 6GB RAM memorije.\nXiaomi Mi 11 Ultra tezak je 207 grama i sadrzi glavnu kameru od 108mpx. Xiaomi Mi 11 Ultra sadrzi ekran od 6.67 incha i 120hz osvezavanje ekrana.\nXiaomi Mi 11 Ultra sadrzi Dimensity 920 koji dostize 2.5GHz,i ima bateriju od 5160mAh.");
	}
	else if(e == 2){
		printf("\nXiaomi Mi i11 HyperCharge izbacen je 6. januara 2022. godine. Xiaomi Mi i11 dolazi sa 128GB memorije i 6GB RAM memorije.\nXiaomi Mi i11 tezak je 204 grama i sadrzi glavnu kameru od 108mpx. Xiaomi Mi i11 sadrzi ekran od 6.67incha i 120hz osvezavanje ekrana.\nXiaomi Mi i11 sadrzi Dimensity 920 cip koji dostize 2.5GHz,i ima bateriju od 4500mAh.");
	}
	else if(e == 3){
		printf("\nXiaomi Redmi Note 10 Pro izbacen je 24. marta 2021. godine. Xiaomi Redmi Note 10 Pro dolazi sa 64GB memorije i 6GB RAM memorie.\nXiaomi Redmi Note 10 pro tezak je 193 grama i sadrzi glavnu kameru od 108mpx. Xiaomi Redmi Note 10 Pro sadrzi ekran od 6.67 incha i 120hz osvezavanje ekrana.\nXiaomi Redmi Note 10 Pro sadrzi SnapDragon 732G cip koji dostize 2.3GHz,i ima bateriju od 5020mAh.");
	}
	else if ( e == 0){ 
	goto ponovo7;
	}
	else if(e == 4){
		printf("\nXiaomi Mi 11T Pro izbacen je 4. oktobra 2021. godine. Xiaomi Mi 11T Pro dolazi sa 128GB memorije i 8GB RAM memorije.\nXiaomi Mi 11T Pro tezak je 204 grama i sadrzi glavnu kameru od 108mpx.\nXiaomi Mi 11T Pro sadrzi ekran od 6.67 incha i 120hz osvezavanje ekrana.Xiaomi Mi 11T Pro sadrzi SnapDragon 888 cip koji dostize 2.8GHz,i ima bateriju od 5000mAh.");
	}
	else if(e == 5){
		printf("\nXiaomi Mi 11T izbacen je 5. oktobra 2021. godine. Xiaomi Mi 11T dolazi sa 128GB memorije i 8GB RAM memorije.\nXiaomi Mi 11T tezak je 203 grama i sadrzi glavnu kameru od 108mpx. Xiaomi Mi 11T sadrzi ekran od 6.67 incha i 120hz osvezavanje ekrana.Xiaomi Mi 11T sadrzi Dimensity 1200 cip koji dostize 3GHz,i ima bateriju od 5000mAh.");
	}
	else if(e == 6){
		printf("\nXiaomi Poco X3 Pro izbacen je 24. marta 2021. godine. Xiaomi Poco X3 Pro dolazi sa 128GB memorije i 6GB RAM memorije.\nXiaomi Poco X3 Pro sadrzi ekran od 6.67 incha i 120hz osvezavanje ekrana.Xiaomi Poco X3 Pro sadrzi SnapDragon 860 cip koji dostize 3GHz,i ima bateriju od 5160mAh.");
	}
	else if(e == 7){
		printf("\nXiaomi Mi 12X izbacen izbacen je 1. januara 2022. godine. Xiaomi Mi 12X dolazi sa 128GB memorije i 8GB RAM memorije.\nXiaomi Mi 12X dolazi sa 6.28 incha i sadrzi glavnu kameru od 108mpx. Xiaomi Mi 12X je tezak 176 grama. Xiaomi Mi 12X sadrzi SnapDragon 870 cip koji dostize 3.2GHz,i ima bateriju od 4500mAh.");
	}
	else if(e == 8){
		printf("\nXiaomi Black Shark 3 izbacen je 17. marta 2020. godine. Xiaomi Black Shark 3 dolazi sa 256GB memorije i 8GB RAM memorije.\nXiaomi Black Shark 3 je tezak 253 grama i sadrzi glavnu kameru od 64mpx. Xiaomi Black Shark 3 sadrzi ekran od 7.1 incha i 90hz osvezavanje ekrana.\nXiaomi Black Shark 3 sadrzi SnapDragon 865cip koji dostize 2.8GHz,i ima bateriju od 5000mAh.");
	}
	else if(e == 9){
		printf("\nXiaomi Mi 11T Lite izbacen je 16. aprila 2021. godine. Xiaomi Mi 11T Lite dolazi sa 128GB memorije i 6GB RAM memorije.\nXiaomi Mi 11T Lite tezak je 159grama i sadrzi glavnu kameru od 64mpx. Xiaomi Mi 11T Lite sadrzi ekran od 6.55 incha i 90hz osvezavanje ekrana.Xiaomi Mi 11T Lite sadrzi SnapDragon 780 cip koji dostize 2.4GHz,i ima bateriju od 4250mAh.");
	}
		else {
		printf("\t Uneli ste nepostojeci broj, pokusajte ponovo.");
		Sleep(1000);
		goto ponovo4;
	}
	}
//nokia
	else if(d == 5){
		system("CLS");
		printf("\n\n\t\t\t    Dobrodosli u Nokia telefone!");
		printf ("  \n\n\t\t\n============================== \t\t============================     \t============================");
    	printf ("\n1.Nokia X100 300$           			2.Nokia G300 200$             		 3.Nokia XR20 550$");
    	printf ("  \n==============================       \t============================     \t============================");
 
 
 
        printf ("  \n\n\n===========================      \t============================       \t================================");
    	printf ("\n4.Nokia G20 200$           			5.Nokia G50 300$          		 6.Nokia G10 200$");
    	printf ("  \n===========================         \t============================       \t================================");
 
 
 
 
	    printf ("\n\n\n==============================     \t============================        \t================================");
    	printf ("\n7.Nokia 6300 4G 70$          			8.Nokia 225 4G 50$          	         9.Nokia 8.3 5G 430$");
    	printf ("\n============================== \t     \t============================      \t================================");
    	ponovo5:
    	printf("\n\n\t Unesite broj koji se nalaze iznad da bi dobili malo vise informacija o telefonu: ");
    	scanf("%d",&e);
    if(e == 1){
    	printf("\nNokia X100 izbacen je 19. novembra 2021. godine. Nokia X100 dolazi sa 128GB memorije i 6GB RAM memorije.\nNokia X100 tezak je 217 grama i sadrzi glavnu kameru od 48mpx. Nokia X100 sadrzi ekran od 6.67 incha i 60hz osvezavanje ekrana. Nokia X100 sadrzi SnapDragon 480 2GHz, i ima bateriju od 4470mAh.");
	}
	else if(e == 2){
		printf("\nNokia G300 izbacen je 19. oktobra 2021. godine. Nokia G300 dolazi sa 64GB memorije i 6GB RAM memorije.\nNokia G300 tezak je 210 grama i sadrzi 16mpx. Nokia G300 sadrzi ekran 6.5incha i 60hz osvezanje ekrana. Nokia G300 sadrzi Snapdragon 480 2GHz, i ima 4470mAh.");
	}
	else if ( e == 0){ 
	goto ponovo7;
	}
	else if(e == 3){
		printf("\nNokia XR20 izbacen je 4. avgusta 2021. godine. Nokia XR20 dolazi sa 64GB memorije i 4GB RAM memorije.\nNokia XR20 tezak je 248 grama i sadrzi glavnu kameru od 48mpx. Nokia XR20 sadrzi ekran od 6.67 incha i 60hz osvezavanje ekrana. Nokia XR20 sadrzi SnapDragon 480 2GHz,i ima 4630mAh.");
	}
	else if(e == 4){
		printf("\nNokia G20 izbacen je 17. maj 2021. godine. Nokia G20 dolazi sa 64GB memorije i 4GB RAM memorije.\nNokia G20 tezak je 197 grama i sadrzi glavnu kameru od 48mpx. Nokia G20 sadrzi ekran 6.52 incha i 60hz osvezavanje ekrana. Nokia G20 sadrzi Helio G35 2.3GHz, i ima 5050mAh.");
	}
	else if(e == 5){
		printf("\nNokia G50 izbacen je 13. oktobra 2021. godine. Nokia G50 dolazi sa 64GB memorije i 4GB RAM memorije.\nNokia G50 tezak je 220 grama i sadrzi glavnu kameru od 48mpx. Nokia G50 sadrzi ekran od 6.82 incha i 60hz osvezavanje ekrana. Nokia G50 sadrzi SnapDragon 480 2GHz,i ima 5000mAh.");
	}
	else if(e == 6){
		printf("\nNokia G10 izbacen je 26. aprila 2021. godine. Nokia G10 dolazi sa 32GB memorije i 3GB RAM memorije.\nNokia G10 tezak je 194 grama i sadrzi glavnu kameru od 13mpx. Nokia G10 sadrzi ekran od 6.52incha i 60hz osvezavanje ekran. Nokia G10 sadrzi Helio G35 2.3GHz, i ima 5050mAh.");
	}
	else if(e == 7){
		printf("\nNokia 6300 4G izbacen je 30. novembra 2020. godine. Nokia 6300 4G dolazi sa 4GB memorije i 0.5GB RAM memorije.\nNokia 6300 4G tezak je 105 grama i sadrzi glavnu kameru od 0.3mpx. Nokia 6300 4G sadrzi ekran od 2.4incha i 60hz osvezavanje ekrana. Nokia 6300 4G sadrzi SnapDragon 210 1.1GHz,i ima 1500mAh.");
	}
	else if(e == 8){
		printf("\nNokia 225 4G izbacen je 17. oktobar 2020. godine. Nokia 225 4G dolazi sa SDHC karitcom.\nNokia 225 4G tezak je 90grama i sadrzi ekran od 2.4 incha.Nokia 225 4G sadrzi UMS9117,i ima 1150mAh.");
	}
	else if(e == 9){
		printf("\nNokia 8.3 5G izbacen je 17. jun 2020. godine. Nokia 8.3 5G dolazi sa 64GB i 6GB RAM memorije.\nNokia 8.3 5G tezak je 220 grama i sadrzi glavnu kameru od 64mpx. Nokia 8.3 5G sadrzi ekran od 6.81 incha i 60hz osvezavanje ekrana. Nokia 8.3 5G sadrzi SnapDragon 765G 2.4GHz,i ima 4500mAh.");
	}
		else {
		printf("\t Uneli ste nepostojeci broj, pokusajte ponovo.");
		Sleep(1000);
		goto ponovo5;
	}
	}
//oneplus
	else if(d == 6){
		system("CLS");
		printf("\n\n\t\t\t    Dobrodosli u OnePlus telefone!");
		printf ("  \n\n\t\t\n============================== \t\t============================     \t============================");
    	printf ("\n1.OnePlus 9RT 5G 530$                    2.OnePlus 9 Pro 800$                    3.OnePlus 9 600$");
    	printf ("  \n==============================       \t============================     \t============================");
 
 
 
        printf ("  \n\n\n===========================      \t============================       \t================================");
    	printf ("\n4.OnePlus 9R 5G 550$          		 5.OnePlus 8T 530$                	 6.OnePlus Nord CE 400$");
    	printf ("  \n===========================         \t============================       \t================================");
 
 
 
 
	    printf ("\n\n\n==============================     \t============================        \t================================");
    	printf ("\n7.OnePlus Nord 2 450$         	         8.OnePlus 10 Pro 1060$          	 9.OnePlus 7T 400$");
    	printf ("\n============================== \t     \t============================      \t================================");
    	ponovo6:
		printf("\n\n\t Unesite broj koji se nalaze iznad da bi dobili malo vise informacija o telefonu: ");
    	scanf("%d",&e);
    if(e == 1){
    	printf("\nOnePlus 9RT 5G izbacen je 19. oktobra 2021. godine. OnePlus 9RT dolazi sa 128GB i 8GB RAM memorije.\nOnePlus 9RT 5G tezak je 200 grama i sadrzi glavnu kameru od 50mpx. OnePlus 9RT 5G sadrzi ekran od 6.62 incha i 120hz osvezavanje ekrana.\nOnePlus 9RT 5G sadrzi SnapDragon 888 2.8GHz, i ima 4500mAh.");
	}
	else if ( e == 0){ 
	goto ponovo7;
	}
	else if(e == 2){
		printf("\nOnePlus 9 Pro izbacen je 30. marta 2021. godine. OnePlus 9 Pro dolazi sa 128GB memorije i 8GB RAM memorije.\nOnePlus 9 Pro tezak je 197 grama i sadrzi glavnu kameru od 48mpx. OnePlus 9 Pro sadrzi ekran od 6.7 incha i 120hz osvezavanje ekrana.\nOnePlus 9 Pro sadrzi SnapDragon 888 koji dostize 2.8GHz, i ima 4500mAh.");
	}
	else if(e == 3){
		printf("\nOnePlus 9 izbacen je 26. marta 2021. godine. OnePlus 9 dolazi sa 128GB memorije i 8GB RAM memorije.\nOnePlus 9 tezak je 129 grama i sadrzi glavnu kameru od 48mpx. OnePlus 9 sadrzi ekran od 6.55 incha i 120hz osvezavanje ekrana.\nOnePlus 9 sadrzi SnasDragon 888 koji dostize 2.8GHz, i ima 4500mAh.");
	}
	else if(e == 4){
		printf("\nOnePlus 9R 5G izbacen je 14. aprila 2021. godine. OnePlus 9R dolazi sa 128GB memorije i 8GB RAM memorije.\nOnePlus 9R tezak je 189 grama i sadrzi glavnu kameru 48mpx. OnePlus 9R sadrzi ekran od 6.55 incha i 120hz osvezavanje ekrana.\nOnePlus 9R sadrzi SnapDragon 870 koji dostize 3.2GHz,i ima 4500mAh.");
	}
	else if(e == 5){
		printf("\nOnePlus 8T izbacen je 16. oktobra 2020 godine. OnePlus 8T dolazi sa 128GB memorije i 8GB RAM memorije.\nOnePlsu 8T tezak je 188 grama i sadrzi glavnu kameru od 48mpx. OnePlus 8T sadrzi ekran od 6.55 incha i 120hz osvezavanje ekrana.\nOnePlus 8T sadrzi SnapDragon 865 koji dostize 2.8GHz,i ima 4500mAh.");
	}
	else if(e == 6){
		printf("\nOnePlus Nord CE izbacen je 11. juna 2021. godine. OnePlus Nord CE dolazi sa 128GB memorije i 6GB RAM memorije.\nOnePlus Nord CE tezak je 170grama i sadrzi glavnu kameru od 64mpx. OnePlus Nord CE sadrzi ekran od 6.43 incha i 90hz osvezavanje ekrana.\nOnePlus Nord CE sadrzi SnapDragon 750 2.2GHz,i ima 4500mAh.");
	}
	else if(e == 7){
		printf("\nOnePlus Nord 2 izbacen je 28. jula 2021. godine. OnePlus Nord 2 dolazi sa 128GB memorije i 6GB RAM memorije.\nOnePlus Nord 2 tezak je 1289 grama i sadrzi glavnu kameru od 50mpx. OnePlus Nord 2 sadrzi ekran od 6.43 incha i 90hz osvezavanje ekrana.\nOnePlus Nord 2 sadrzi Dimensity 1200 3GHz, i ima 4500mAh.");
	}
	else if(e == 8){
		printf("\nOnePlus 10 Pro izbacen je 11. januara 2022. godine. OnePlus 10 Pro dolazi sa 128GB memorije i 8GB RAM memorije.\nOnePlus 10 Pro tezak je 200 grama i sadrzi glavnu kameru od 48mpx. OnePlus 10 Pro sadrzi ekran od 6.7 incha i 120hz osvezavanje ekrana.\nOnePlus 10 Pro sadrzi SM8450 SnapDragon 8 2.5GHz, i ima 5000mAh.");
	}
	else if(e == 9){
		printf("\nOnePlus 7T izbacen je 19. novembra 2019. godine. OnePlus 7T dolazi sa 256GB memorije i 12GB RAM memorije.\nOnePlus 7T tezak je 206 grama i sadrzi glavnu kameru od 48mpx. OnePlus 7T sadrzi ekran od 6.67 incha i 90hz osvezavanje ekrana.\nOnePlus 7T sadrzi SnapDragon 855+ koji dostize 2.8GHz, i ima 4085mAh.");
	}
	else {
		printf("\t Uneli ste nepostojeci broj, pokusajte ponovo.");
		Sleep(1000);
		goto ponovo6;
	}
	}
	else {
		printf("Izabrali ste nepostojecu opciju, vracamo vas nazad na pocetak.");
		Sleep(1000);
		e = getchar();
		goto ponovo7;
	}
}
    else if ( a == 5){
    laptopovi :
    	system("CLS");
    	printf("\n\n\t\t     Dobrodosli u Laptoppovi!");
 
    	printf("     \n\n===============\t   \t=============== \t==============="      );
     printf("     \n|  1.Apple   |\t     \t|    2.HP     |     \t|   3.Dell    |"      );
     printf("     \n===============\t     \t=============== \t==============="        );
 
     printf("     \n\n===============\t   \t=============== \t================"      );
     printf("     \n|   4.Acer    |\t     \t|  5.Lenevo   |     \t|   6.Razen    |"      );
     printf("     \n===============\t     \t=============== \t================"        );
 
	printf("\n\n\t       Unesite 0 da bi vas vratilo korak unazad.");
	printf ("\n\t       Izaberite marku koju zelite kupiti tako \n\t   sto ce te izabari jedan broj od navedenih gore: ");
    scanf("%d",&d);	
 
 
 
 
if(d == 1){
   apple :
   system ("cls");
 
  	printf("\n\n\t\t\t Dobro dosili u Apple proizvode");
 
  printf ("\n\n\n===========================       ============================     ==========================");
    	printf ("\n 1.APPLE MacBook Air 13 MGNE3ZEBTO82 2550$         2.APPLE MacBook Pro 14 M1 Pro 2021 MKGR3CRA  3200$      3.APPLE MacBook Pro 16 M1 Pro 2021 MK1E3ZEA 3500$");
    	printf ("\n===========================       ============================     ==========================");
 
    	printf ("\n\n\n=======================          =======================       =======================");
    	printf ("\n4.APPLE MacBook Air 13 MGN73ZEBTO81 2700$             5.APPLE MacBook Pro 16 M1 Max 2021 MK1A3/BTO/64GB/2TB 5700$        6.APPLE MacBook Pro 14 M1 Pro 2021 MKGQ3/BTO/16C/32GB/8 7200$");
    	printf ("\n=======================          =======================       =======================");
        printf("\n\n\t\t\tUnesite 0 da bi vas vratilo korak unazad.");
    	printf("\n\t Unesite broj koji se nalaze iznad da bi dobili malo vise informacija o patici: ");
    	scanf("%d",&c);	
 
  if(c == 1){
   	printf("\n\nEAN:215076\nModel procesora:Apple M1 do 3.2GHz\nDijagonala ekrana:13.3\nTip graficke karte:Integrisana Apple M1\nRAM memorija:8GB\nHDD SSD:2TB SSD ");
   }
 
 
    else if ( c == 0){
    	system("cls");
 
 
		c = getchar();
    	goto laptopovi;
	}
    else if ( c == 2){
 
 
    	printf("\n\nEAN:194252549964\nModel procesora:Apple M1 Pro\nDijagonala ekrana:14.2\nTip graficke karte:Integrisana Apple M1\nRAM memorija:16GB\nHDD SSD:512GB SSD");
	}
 
   else if ( c == 3){
 
 
    	printf("\n\nEAN:194252547496\nModel procesora:Apple M1 Pro\nDijagonala ekrana:16.2''\nTip graficke karte:Integrisana Apple M1\nRAM memorija:16GB\nHDD SSD:512GB SSD");
}
   else if ( c == 4){
 
 
    	printf("\n\nEAN:215071\nModel procesora:Apple M1 do 3.2GHz\nDijagonala ekrana:13.3\nTip graficke karte:Integrisana Apple M1\nRAM memorija:8GB\nHDD SSD:1TB SSD");
	}
 
   else if ( c == 5){
 
 
    	printf("\n\nEAN:215106\nModel procesora:Apple M1 Max\nDijagonala ekrana:16.2''\nTip graficke karte:Integrisana Apple M1\nRAM memorija:64GB\nHDD SSD:2TB SSD");
	}
 
   else if ( c == 6){
 
 
    	printf("\n\nEAN:215115\nModel procesora:Apple M1 Pro\nDijagonala ekrana:14.2\nTip graficke karte:Integrisana Apple M1\nRAM memorija:32GB\nHDD SSD:8TB SSD");
	}
 
 else{
    	c = getchar();
 
    	system("cls");
    	printf("\n\n\n\n\n\t\tUneli ste nepostojeci proj pokusajte ponovo");
 
    	Sleep(1500);
    	system("cls");
    	goto apple;
	}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
   }
 
 
    else if ( d == 0){
    	system("cls");
 
 
		c = getchar();
    	goto menu;
 
	}
 
 
 
 
 
    else if ( d == 3){
    dell:
    system ("cls");
    printf ("\n\n\n===============================       =====================================     =================================");
    	printf ("\n 1.DELL G15 5510 NOT18009 2000$         2.DELL Vostro 3510 NOT18571  1150$      3.DELL Vostro 3510 NOT18556 850$");
    	printf ("\n===============================       =====================================     =================================");
 
    	printf ("\n\n\n=======================================    ====================================        ===============================");
    	printf ("\n4.DELL Latitude 15 5520 - NOT17628 870$    5.DELL Vostro 14 3401 - NOT16732 650$        6.DELL G15 5515 NOT18459 1500$");
    	printf ("\n======================================     =====================================       ===============================");
        printf("\n\n\t\t\tUnesite 0 da bi vas vratilo korak unazad.");
    	printf("\n\t Unesite broj koji se nalaze iznad da bi dobili malo vise informacija o patici: ");
    	scanf("%d",&c);	
 
 
if(c == 1){
   	printf("\n\nEAN:5280721180099\nModel procesora:Intel® Core™ i7 10870H do 5.0GHz\nDijagonala ekrana:15.6\nTip graficke karte:GeForce RTX 3060\nRAM memorija:16GB\nHDD SSD:512GB SSD ");
   }
 
 
    else if ( c == 0){
    	system("cls");
 
 
		c = getchar();
    	goto laptopovi;
	}
    else if ( c == 2){
 
 
    	printf("\n\nEAN:5251021185718\nModel procesora:Intel® Core™ i5 1135G7 do 4.2GHz\nDijagonala ekrana:15.6\nTip graficke karte:Integrisana Intel Iris Xe Graphics G7 80EUs\nRAM memorija:8GB\nHDD SSD:256GB SSD ");
	}
 
   else if ( c == 3){
 
 
    	printf("\n\nEAN:5251021185565\nModel procesora:Intel® Core™ i3 1115G4 do 4.1GHz\nDijagonala ekrana:15.6\nTip graficke karte:Integrisana Intel UHD Graphics Xe G4 48EUs\nRAM memorija:6GB\nHDD SSD:256GB SSD");
}
   else if ( c == 4){
 
 
    	printf("\n\nEAN:5180521176288\nModel procesora:Intel® Core™ i5 1135G7 do 4.2GHz\nDijagonala ekrana:15.6\nTip graficke karte:Integrisana Intel Iris Xe Graphics G7 80EUs\nRAM memorija:8GB\nHDD SSD:256GB SSD");
	}
 
   else if ( c == 5){
 
 
    	printf("\n\nEAN:5170221167327\nModel procesora:Intel® Core™ i3 1005G1 do 3.4GHz\nDijagonala ekrana:14\nTip graficke karte:Integrisana UHD G1\nRAM memorija:4GB\nHDD SSD:1TB HDD");
	}
 
   else if ( c == 6){
 
 
    	printf("\n\nEAN:5200921184598\nModel procesora:AMD Cezanne Ryzen 5 5600H do 4.2GHz\nDijagonala ekrana:15.6\nTip graficke karte:GeForce RTX 3050\nRAM memorija:8GB\nHDD SSD:256GB SSD");
	}
 
 
 else{
    	c = getchar();
 
    	system("cls");
    	printf("\n\n\n\n\n\t\tUneli ste nepostojeci proj pokusajte ponovo");
 
    	Sleep(1500);
    	system("cls");
    	goto dell;
	}
 
 
 
 
 
 
 
 
 
 
 
	}
 
   else if ( d == 2){
   hp:
   system ("cls");
    printf ("\n\n\n=================================================       ============================     ==========================");
    	printf ("\n 1.HP Spectre x360 - 13-aw0011nm - 8NJ26EA 2200$         2.HP 250 G7 - 1F3J0EA 550$      3.HP 470 G7 - 9HP75EA 100$");
    	printf ("\n=================================================       ============================     ==========================");
 
    	printf ("\n\n\n=================================    ===============================================        ==========================");
        	printf ("\n4.HP 250 G7 Notebook-197S7EA 950$     5.HP Spectre x360 - 13-aw0012nm - 1U2V6EA 1950$        6.HP 470 G7 - 8VU28EA 770$");
        	printf ("\n=================================    ===============================================        ==========================");
        printf("\n\n\t\t\tUnesite 0 da bi vas vratilo korak unazad.");
    	printf("\n\t Unesite broj koji se nalaze iznad da bi dobili malo vise informacija o patici: ");
    	scanf("%d",&c);	
 
	if(c == 1){
   	printf("\n\nEAN:194441915532\nModel procesora:Intel Core i7-1065G7 Processor, 8M Cache, up to 3.90 GHz\nDijagonala ekrana:13.3\nTip graficke karte:Integrisana Iris Plus Graphics G7\nRAM memorija:16GB\nHDD SSD:1TB SSD ");
   }
 
 
    else if ( c == 0){
    	system("cls");
 
 
		c = getchar();
    	goto laptopovi;
	}
    else if ( c == 2){
 
 
    	printf("\n\nEAN:195122563080\nModel procesora:Intel Core i5-1035G1 procesor, 6M Cache, up to 3.60 GHz\nDijagonala ekrana:15.6\nTip graficke karte:GeForce MX110\nRAM memorija:8GB\nHDD SSD:512GB SSD ");
	}
 
   else if ( c == 3){
 
 
    	printf("\n\nEAN:194850498756\nModel procesora:Intel Core i5 10210U do 4.2GHz\nDijagonala ekrana:17.3\nTip graficke karte:Radeon® 530\nRAM memorija:8G\nHDD SSD:256GB SSD");
}
   else if ( c == 4){
 
 
    	printf("\n\nEAN:195122375256\nModel procesora:Intel Core i3-1005G1 Processor, 4M Cache, up to 3.40 GHz\nDijagonala ekrana:15.6\nTip graficke karte:Integrisana UHD G1\nRAM memorija:16GB\nHDD SSD:512GB SSD");
	}
 
   else if ( c == 5){
 
 
    	printf("\n\nEAN:195122534226\nModel procesora:Intel Core i5 1035G4 do 3.7GHz\nDijagonala ekrana:13.3\nTip graficke karte:Integrisana Iris Plus Graphics G4\nRAM memorija:8GB\nHDD SSD:1TB SSD");
	}
 
   else if ( c == 6){
 
 
    	printf("\n\nEAN:194721732705\nModel procesora:Intel Core i5 10210U do 4.2GHz\nDijagonala ekrana:17.3\nTip graficke karte:Radeon® 530\nRAM memorija:8GB\nHDD SSD:512GB SSD");
	}
 
 else{
    	c = getchar();
 
    	system("cls");
    	printf("\n\n\n\n\n\t\tUneli ste nepostojeci proj pokusajte ponovo");
 
    	Sleep(1500);
    	system("cls");
    	goto hp;
	}
 
 
 
 
 
 
}
   else if ( d == 4){
 acer:
 system("cls");
   	printf("\n\n\t\t\t Dobro dosili u Acer proizvode");
 
    printf ("\n\n\n=============================      ====================================     ============================================");
    	printf ("\n 1.ACER Aspire 3 A315-23 620$        2.ACER Aspire 3 A315-57G-790A 510$      3.ACER Aspire 3 A315-34 - NX.HE3EX.031 450$");
    	printf ("\n=============================      ====================================     ============================================");
 
    	printf ("\n\n\n===================================     ================================      ================================");
    	    printf ("\n4.ACER Nitro 5 AN515-57-790L 1890$      5.ACER PREDATOR HELIOS 300 1300$      6.ACER Aspire A315 NOT16557 800$");
         	printf ("\n===================================     ================================      ================================");
        printf("\n\n\t\t\tUnesite 0 da bi vas vratilo korak unazad.");
    	printf("\n\t Unesite broj koji se nalaze iznad da bi dobili malo vise informacija o patici: ");
    	scanf("%d",&c);
 
	if(c == 1){
   	printf("\n\nEAN:4710886044659\nModel procesora:AMD® Picasso Ryzen 5 3500U do 3.7GHz\nDijagonala ekrana:15.6\nTip graficke karte:Integrisana Radeon™ RX Vega 8\nRAM memorija:4GBHDD SSD:256GB SSD ");
   }
 
 
    else if ( c == 0){
    	system("cls");
 
 
		c = getchar();
    	goto laptopovi;
	}
    else if ( c == 2){
 
 
    	printf("\n\nEAN:4710886091400\nModel procesora:Intel® Core™ i7 1065G7 do 3.9GHz\nDijagonala ekrana:15.6\nTip graficke karte:GeForce MX330\nRAM memorija:8GB\nHDD SSD:512GB SSD ");
	}
 
   else if ( c == 3){
 
 
    	printf("\n\nEAN:4710886101901\nModel procesora:Intel® Pentium® Silver N5030 do 3.1GHz\nDijagonala ekrana:15.6\nTip graficke karte:Integrisana UHD 605\nRAM memorija:4GB\nHDD SSD:256GB SSD");
}
   else if ( c == 4){
 
 
    	printf("\n\nEAN:4710886525486\nModel procesora:Intel® Core™ i7-11800H do 4.6GHz\nDijagonala ekrana:15.6\nTip graficke karte:GeForce RTX 3060\nRAM memorija:32GB\nHDD SSD:512GB SSD");
	}
 
   else if ( c == 5){
 
 
    	printf("\n\nEAN:4710886544807\nModel procesora:Intel® Core™ i7-11800H do 4.6GHz\nDijagonala ekrana:15.6\nTip graficke karte:GeForce RTX 3050 Ti\nRAM memorija:16GB\nHDD SSD:1TB SSD ");
	}
 
   else if ( c == 6){
 
 
    	printf("\n\nEAN:4710886114987\nModel procesora:Intel® Core™ i5-1035G1 procesor, 6M Cache, up to 3.60 GHz\nDijagonala ekrana:15.6\nTip graficke karte:GeForce MX330\nRAM memorija:8GB\nHDD SSD:256GB SSD");
	}
 
 
 else{
    	c = getchar();
 
    	system("cls");
    	printf("\n\n\n\n\n\t\tUneli ste nepostojeci proj pokusajte ponovo");
 
    	Sleep(1500);
    	system("cls");
    	goto acer;
	}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
	}
 
   else if ( d == 5){
 msi:
 system("cls");
   	printf("\n\n\t\t\t Dobro dosili u Lenove laptopove");
 
    printf ("\n\n\n================================    =======================================   =======================================");
    	printf ("\n 1.LENOVO IdeaPad 3 14ADA05 520$    2.LENOVO IdeaPad 3 14ALC6 - 82KT0 655$       3.LENOVO IdeaPad 3- 82KT007ARM 550$");
    	printf ("\n================================    =======================================   =======================================");
 
    	printf ("\n\n\n================================     ================================      ===========================================");
    	    printf ("\n4.LENOVO IdeaPad 3 15IIL05 750$      5.LENOVO IdeaPad 3 14ADA05 1300$      6.LENOVO IdeaPad 3 14ITL6 - 82H700CERM 800$");
         	printf ("\n================================     ================================      ===========================================");
        printf("\n\n\t\t\tUnesite 0 da bi vas vratilo korak unazad.");
    	printf("\n\t Unesite broj koji se nalaze iznad da bi dobili malo vise informacija o patici: ");
    	scanf("%d",&c);
 
   	if(c == 1){
   	printf("\n\nEAN:4710886044659\nModel procesora:AMD® Picasso Ryzen 5 3500U do 3.7GHz\nDijagonala ekrana:15.6\nTip graficke karte:Integrisana Radeon™ RX Vega 8\nRAM memorija:4GBHDD SSD:256GB SSD ");
   }
 
 
    else if ( c == 0){
    	system("cls");
 
 
		c = getchar();
    	goto laptopovi;
	}
    else if ( c == 2){
 
 
    	printf("\n\nEAN:4710886091400\nModel procesora:Intel® Core™ i7 1065G7 do 3.9GHz\nDijagonala ekrana:15.6\nTip graficke karte:GeForce MX330\nRAM memorija:8GB\nHDD SSD:512GB SSD ");
	}
 
   else if ( c == 3){
 
 
    	printf("\n\nEAN:4710886101901\nModel procesora:Intel® Pentium® Silver N5030 do 3.1GHz\nDijagonala ekrana:15.6\nTip graficke karte:Integrisana UHD 605\nRAM memorija:4GB\nHDD SSD:256GB SSD");
}
   else if ( c == 4){
 
 
    	printf("\n\nEAN:4710886525486\nModel procesora:Intel® Core™ i7-11800H do 4.6GHz\nDijagonala ekrana:15.6\nTip graficke karte:GeForce RTX 3060\nRAM memorija:32GB\nHDD SSD:512GB SSD");
	}
 
   else if ( c == 5){
 
 
    	printf("\n\nEAN:4710886544807\nModel procesora:Intel® Core™ i7-11800H do 4.6GHz\nDijagonala ekrana:15.6\nTip graficke karte:GeForce RTX 3050 Ti\nRAM memorija:16GB\nHDD SSD:1TB SSD ");
	}
 
   else if ( c == 6){
 
 
    	printf("\n\nEAN:4710886114987\nModel procesora:Intel® Core™ i5-1035G1 procesor, 6M Cache, up to 3.60 GHz\nDijagonala ekrana:15.6\nTip graficke karte:GeForce MX330\nRAM memorija:8GB\nHDD SSD:256GB SSD");
	}
 
 
 else{
    	c = getchar();
 
    	system("cls");
    	printf("\n\n\n\n\n\t\tUneli ste nepostojeci proj pokusajte ponovo");
 
    	Sleep(1500);
    	system("cls");
    	goto msi;
	}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
	}
 
   else if ( d == 6){
  ryzer:
 system("cls");
 
 
    printf ("\n\n\n=======================================    ==========================================       =============================================");
    	printf ("\n 1.Samsung Electronics Galaxy Pro 900$     2.Samsung Electronics Galaxy Book Pro 1200$       3.Samsung Electronics Galaxy Book Pro 1250$");
    	printf ("\n=======================================    ==========================================       =============================================");
 
    	printf ("\n\n\n==========================================    =====================================    ==  ===========================================");
    	    printf ("\n4.Samsung Electronics Galaxy Book Go 750$      5.Samsung Electronics Book Go 1300$      6.Samsung Electronics Galaxy Book Ion 800$");
         	printf ("\n==========================================    =====================================    =============================================");
        printf("\n\n\t\t\tUnesite 0 da bi vas vratilo korak unazad.");
    	printf("\n\t Unesite broj koji se nalaze iznad da bi dobili malo vise informacija o patici: ");
    	scanf("%d",&c);
 
 
	if(c == 1){
   	printf("\n\nEAN:4710886044659\nModel procesora:AMD® Picasso Ryzen 5 3500U do 3.7GHz\nDijagonala ekrana:15.6\nTip graficke karte:Integrisana Radeon™ RX Vega 8\nRAM memorija:4GBHDD SSD:256GB SSD ");
   }
 
 
    else if ( c == 0){
    	system("cls");
 
 
		c = getchar();
    	goto laptopovi;
	}
    else if ( c == 2){
 
 
    	printf("\n\nEAN:4710886091400\nModel procesora:Intel® Core™ i7 1065G7 do 3.9GHz\nDijagonala ekrana:15.6\nTip graficke karte:GeForce MX330\nRAM memorija:8GB\nHDD SSD:512GB SSD ");
	}
 
   else if ( c == 3){
 
 
    	printf("\n\nEAN:4710886101901\nModel procesora:Intel® Pentium® Silver N5030 do 3.1GHz\nDijagonala ekrana:15.6\nTip graficke karte:Integrisana UHD 605\nRAM memorija:4GB\nHDD SSD:256GB SSD");
}
   else if ( c == 4){
 
 
    	printf("\n\nEAN:4710886525486\nModel procesora:Intel® Core™ i7-11800H do 4.6GHz\nDijagonala ekrana:15.6\nTip graficke karte:GeForce RTX 3060\nRAM memorija:32GB\nHDD SSD:512GB SSD");
	}
 
   else if ( c == 5){
 
 
    	printf("\n\nEAN:4710886544807\nModel procesora:Intel® Core™ i7-11800H do 4.6GHz\nDijagonala ekrana:15.6\nTip graficke karte:GeForce RTX 3050 Ti\nRAM memorija:16GB\nHDD SSD:1TB SSD ");
	}
 
   else if ( c == 6){
 
 
    	printf("\n\nEAN:4710886114987\nModel procesora:Intel® Core™ i5-1035G1 procesor, 6M Cache, up to 3.60 GHz\nDijagonala ekrana:15.6\nTip graficke karte:GeForce MX330\nRAM memorija:8GB\nHDD SSD:256GB SSD");
	}
 
 
 else{
    	c = getchar();
 
    	system("cls");
    	printf("\n\n\n\n\n\t\tUneli ste nepostojeci proj pokusajte ponovo");
 
    	Sleep(1500);
    	system("cls");
    	goto acer;
	}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
	}
 
 else{
    	c = getchar();
 
    	system("cls");
    	printf("\n\n\n\n\n\t\tUneli ste nepostojeci proj pokusajte ponovo");
 
    	Sleep(1500);
    	system("cls");
    	goto laptopovi;
	}
 
 
 
	}
 
  else if ( a == 6){
    komp :
         system("CLS");
        printf("\n\n\t\tDobrodosli u Komponente!");
 
        
        
         printf("     \n\n===================\t   \t=================== \t======================="      );
         printf("     \n|  1.Graficke     |\t     \t|   2.Procesori   | \t|   3.Maticne Ploce   |"      );
         printf("     \n===================\t     \t=================== \t======================="        );
 
        printf("     \n\n=====================\t   \t=============== \t================="      );
        printf("     \n|  4.HDD/SSD   |\t        |  5.Ram      |    \t| 6.Kucista     |"      );
        printf("     \n=====================\t     \t=============== \t================="        );
 
        printf ("\n\n\t       Izaberite proizvod koji zelite kupiti tako \n\t   sto ce te izabari jedan broj od navedenih gore\n\t\tUnesite '0' da se vratite nazad.");
        printf("\n\t\t");
		scanf("%d",&k);
 
    if (k == 1)
    {
        system("CLS");
        printf("\n\n\t\t\t    Dobrodosli u kategoriju graficke!");
        printf ("  \n\n\t\n===================================== \t===========================================\t===============================================");
        printf ("\n 1.ZOTAC Gaming GeForce RTX 3060 850$ \t 2.ZOTAC Gaming GeForce GTX 1660 Super 628$ \t 3.PowerColor Hellhound AMD Radeon RX 6600 650$");
        printf ("  \n===================================== \t===========================================\t===============================================");
 
 
 
        printf ("  \n\n\n=================================== \t=================================\t============================");
        printf ("\n 4.ZER-LON GeForce GTX 1050 Ti 350$ \t 5.ASUS GeForce GTX 1050 Ti  400$ \t  6.GeForce GT 1030  175$");
        printf ("  \n=================================== \t=================================\t============================");
 
 
 
 
        printf ("\n\n\n======================================= \t ============================================\t        =================================");
        printf ("\n 7.XFX Speedster Radeon RX 6600 XT 739$ \t 8.PowerColor Fighter AMD Radeon RX 6600 609$ \t           9.ASUS GeForce RTX 2060 679$");
        printf ("\n======================================= \t ============================================\t        =================================");
 
 
        printf("\n\n\t Unesite broj koji se nalaze iznad da bi dobili malo vise informacija o grafickoj kartici: ");
        scanf("%d",&k1);
    }
 
    if (k1 == 1)
    {
        printf("\n12GB 192-bit GDDR6, 15 Gbps, PCIE 4.0; Boost Clock 1807 MHz\nIceStorm 2.0 Cooling, Active Fan Control, Freeze Fan Stop, Metal Backplate\nNVIDIA Ampere architecture, 2nd Gen Ray Tracing Cores, 3rd Gen Tensor Cores\n3 x DisplayPort 1.4a, 1 x HDMI 2.1, DirectX 12 Ultimate, Vulkan RT API, OpenGL 4.6\n");
    }
 
    else if (k1 == 2)
    {
        printf("\nNew turing architecture 6gb 192-bit gddr6\nDual slot, 4k/ hdr/ VR ready 3 x DisplayPort 1.4, 1 x HDMI 2.0b\nBoost clock 1785 mhz\n");
    }
 
    else if (k1 == 3)
    {
        printf("\nVideo Memory: 8GB GDDR6, Stream Processor: 1792\nGame Clock: 2044MHz, Boost Clock: 2491MHz, Memory Clock: 14 Gbps\n");
    }
 
    else if (k1 == 4)
    {
        printf("\nGDDR5 video memory, 7008 MHz speed\nMicrosoft DirectX 12 API, Vulkan API, OpenGL 4.5, HDCP 2.2, NVIDIA GPU Boost 3.0, Multi Monitor.\nTwin 9cm low noise fans with 9 custom fan blades\nNo external power supply, just plug and play(Please ensure that your computer already has the driver for this type). About 75W full-load power consumption, 300W minimum PSU recommendation.\n");
    }
 
    else if (k1 == 5)
    {
        printf("\nMemory clock: 7008 mhz\nPhoenix double ball bearing cooling fan provides superior airflow with 2x longer lifespan;\nVideo memory: 4GB\n");
    }
 
    else if (k1 == 6)
    {
        printf("\n4GB GDDR4 64bit\nThe large air volume fan with integrated heat sink fins brings better heat dissipation efficiency;\nHDMI2.0 latest high-definition interface, watch 4K movies without pressure\n");
    }
 
    else if (k1 == 7)
    {
        printf("\nMemory: 8GB GDDR6 AMD RDNA 2 architecture elevates and unifies the gaming\nBoost Clock: Up To 2607MHz, Cooling: XFX Speedster QICK308 Triple Fan Cooling");
    }
 
    else if(k1 == 8)
    {
        printf("\nVideo Memory: 8GB GDDR6, Stream Processor: 1792, Game Clock: 2044MHz\nBoost Clock: 2491MHz, Memory Clock: 14 Gbps");
    }
 
    else if(k1 == 9)
    {
        printf("\n1785 MHz Boost Clock, 1920 CUDA cores and overclocked 6GB GDDR6 memory\nSupports up-to 4 monitors with DisplayPort 1. 4, HDMI 2. 0 and DVI port\nWing-Blade Fans boasts IP5X dust-resistance and operates at 0 dB levels when temperatures hit below 55C.\nProtective Backplate features a durable aluminum construction to prevent PCB flex and trace damage.");
    }
    
    if(k == 2)
    {
        system("CLS");
        printf("\n\n\t\t\t    Dobrodosli u kategoriju procesori!");
        printf ("  \n\n\t\n========================== \t===============================\t================================");
        printf ("\n 1.AMD Ryzen 5 5600X 300$ \t 2.Intel Core i3-10100F 92$ \t 3.Intel Core i5-11600K 280$");
        printf ("  \n========================== \t===============================\t================================");
 
 
 
        printf ("  \n\n\n================================\t==============================\t============================");
        printf ("\n 4.AMD Ryzen 9 5900X 569$ \t        5.Intel Core i5-9400 187$ \t     6.AMD Ryzen 7 3800X  334$");
        printf ("  \n================================\t==============================\t============================");
 
 
 
 
        printf ("\n\n\n============================== \t =================================\t     ==============================");
        printf ("\n 7.Intel Core i7-9700K 387$ \t 8.AMD Ryzen 7 3700X 369$ \t              9.AMD Ryzen 5 1600 274$");
        printf ("\n============================== \t ================================\t     ==============================");
 
 
        printf("\n\n\t Unesite broj koji se nalaze iznad da bi dobili malo vise informacija o procesoru: ");
        scanf("%d",&k2);
    }
 
    else if (k2 == 1)
    {
        printf("\n6 core, 12 threads\n4.6 GHz Max Boost, unlocked for overclocking, 35 MB of cache, DDR-3200 support");
    }
 
    else if (k2 == 2)
    {
        printf("\n3.6GHz / 6MB LGA1200 4C / 8T\n");
    }
 
    else if (k2 == 3)
    {
        printf("\n6 Cores up to 4.9 GHz Unlocked LGA1200\nPCIe Gen 4.0 Support");
    }
 
    else if (k2 == 4)
    {
        printf("\n12 cores and 24 processing threads\n4.8 GHz Max Boost, unlocked for overclocking, 70 MB of cache, DDR-3200 support\n");
    }
 
    else if(k2 == 5)
    {
        printf("\n6 Cores/ 6 Threads\n2. 90 GHz up to 4. 10 GHz Max Turbo Frequency/ 9 MB cache");
    }
 
    else if(k2 == 6)
    {
        printf("\n4.5 GHz max Boost, unlocked for overclocking\n8 Cores and 16 processing threads, bundled with the AMD Wraith Prism cooler with color controlled LED support");
    }
 
    else if(k2 == 7)
    {
        printf("\n8 Cores / 8 Threads\n3.60 GHz up to 4.90 GHz / 12 MB Cache\nCompatible only with Motherboards based on Intel 300 Series Chipsets\nIntel Optane Memory Supported\nMemory Support Maximum Capacity 64 GB Memory Support DDR4 2666 MHz ECC Memory No Channel Architecture Dual Channel Maximum Memory Bandwidth 41 GB/s");
    }
 
    else if(k2 == 8)
    {
        printf("\n8 Cores and 16 processing threads bundled with the AMD Wraith Prism cooler with color controlled LED support\n4 4 GHz max Boost unlocked for overclocking 36 MB of game Cache DDR4 3200 MHz system memory specification");
    }
    else if(k2 == 9)
    {
        printf("\nFrequency: 3.6 ghz precision boost\n6 cores/12 threads unlocked\nCache: 3 mb/19 mb (l2/l3)\nSocket type: Am4; Max Temps : 95°C; PCI Express Version : PCIe 3.0 x16\nThermal solution: Wraith spire cooler; Base Clock:3.2GHz");
    } 
 
    if(k == 3)
    {
        system("CLS");
        printf("\n\n\t\t\t    Dobrodosli u kategoriju maticne ploce!");
        printf ("  \n\n\t\n========================== \t===============================\t=======================================");
        printf ("\n 1.MSI MAG B550 TOMAHAWK 169$ \t 2.MSI Z590-A PRO ProSeries 160$ \t 3.ASUS ROG Strix B450-F 140$");
        printf ("  \n========================== \t===============================\t=======================================");
 
 
 
        printf ("  \n\n\n================================\t==============================\t====================================");
        printf ("\n 4.MSI MAG B550 TOMAHAWK 180$ \t        5.ASUS Prime B450M-A 80$ \t     6.GIGABYTE B450 AORUS PRO  120$");
        printf ("  \n================================\t==============================\t====================================");
 
 
 
 
        printf ("\n\n\n============================== \t =================================\t     ==============================");
        printf ("\n 7.ASUS ROG Strix B550-F 180$ \t 8.ASUS Prime H510M-A 99$ \t              9.GIGABYTE B560 AORUS PRO 200$");
        printf ("\n============================== \t ================================\t     ==============================");
 
 
        printf("\n\n\t Unesite broj koji se nalaze iznad da bi dobili malo vise informacija o maticnoj ploci: ");
        scanf("%d",&k3);
    }
 
    if(k3 == 1)
    {
        printf("\nSupport for 3rd Gen AMD Ryzen processors and future AMD Ryzen processors with BIOS update\nSupports dual channel DDR4 memory up to 128 GB (4866 MHz)\nOn-board dual LAN: 2.5G LAN plus Gigabit LAN\nMystic Light: RGB LED lighting and extendable pin headers – 16.8 million colors / 29 effects\nAudio Boost rewards your ears with studio grade sound quality for immersive gaming experiences\nPremium Thermal Solution: Aluminum Cover with additional choke thermal pad rated for 7W/mk and PCB with 2 ounce thickened copper\nLightning Fast Game Experience: PCIe 4.0, Lightning Gen 4 M.2 with M.2 Shield Frozr, AMD Turbo USB 3.2 GEN 2\n");
    }
    else if(k3 == 2)
    {
        printf("Supports 11th and 10th Gen Intel Core/Pentium/Celeron processors for LGA 1200 Socket\nSupports DDR4 Memory, up to 5333(OC) MHz\nLightning Fast Experience: PCIe 4.0, Lightning Gen4 x4 M.2 with M.2 Shield Frozr, Intel Turbo USB 3.2 Gen 2");
    }
    else if (k3 == 3)
    {
        printf("\nAMD AM4 Socket: Compatible to Ryzen 5000, 3rd/2nd/1st Gen AMD Ryzen CPUs\nRobust Power Design: 8+2 DrMOS power stages with high-quality alloy chokes and durable capacitors provide reliable power for the last AMD high-count-core CPUs\nOptimized Thermal Solution: Extended VRM and PCH heatsinks, M.2 heatsinks, multiple hybrid fan headers and fan speed management with Fan Xpert utility\nBest Gaming Connectivity: Supports HDMI 2.0b(4K@60HZ) and DisplayPort 1.2 output, featuring dual M.2 slots (NVMe SSD), 2x PCIe 3.0x16 Slot, USB 3.2 Gen 2 Type-A port and USB 3.1 Gen 2 Type-A & Type-C ports");
    }
    else if (k3 == 4)
    {
        printf("\nSupport for 3rd Gen AMD Ryzen processors and future AMD Ryzen processors with BIOS update\nSupports dual channel DDR4 memory up to 128 GB (4866 MHz)\nOn-board dual LAN: 2.5G LAN plus Gigabit LAN\nMystic Light: RGB LED lighting and extendable pin headers – 16.8 million colors / 29 effects\nAudio Boost rewards your ears with studio grade sound quality for immersive gaming experiences\nPremium Thermal Solution: Aluminum Cover with additional choke thermal pad rated for 7W/mk and PCB with 2 ounce thickened copper\nLightning Fast Game Experience: PCIe 4.0, Lightning Gen 4 M.2 with M.2 Shield Frozr, AMD Turbo USB 3.2 GEN 2");
    }
    else if (k3 == 5)
    {
        printf("\nAMD AM4 Socket : Compatible to Ryzen 5000, 3rd/2nd/1st Gen AMD Ryzen CPUs\nDesigned for Productivity: USB 3.2 Gen 2 with 10Gbps ultra-fast transfer speed, onboard M.2 support, 4xDIMMs support up to 128GB DDR4 with 4400 (O.C.) performance, HDMI 2.0b/DVI/D-Sub\nOptimized Cooling: VRM & PCH heatsink with extensive surface, thermal pads help transfer heat from the inductor and phase array to the heatsink. Flexible fan controls for ultimate cooling and quietness with ASUS exclusive Fan Xpert 2+\nBuilt to Last: all-round protection with LANGuard, DRAM overcurrent protection, overvoltage protection, SafeSlot Core safeguards and stainless-steel back I/O, 1000+ compatible devices, 8000+ Validation Hours\nPC DIY Friendly: With BIOS Flashback and ASUS exclusive UEFI BIOS");
    }
    else if (k3 == 6)
    {
        printf("\nSupports AMD 1st & 2nd generation Ryzen/ Ryzen with Radeon Vega graphics processors\nDual channel non-ECC unbuffered DDR4, 4 DIMMs\nIntel Ethernet LAN plus Dual band 802.11AC Wi-Fi\nDual PCIe Gen3 M.2 NVMe with dual thermal guards\nAlc1220 vb enhanced audio with WIMA capacitors. Support for 11AC 160MHz wireless standard and up to 1.73 Gaps data rate. Intel WI-FI driver only support for Win10 64bit\nRGB Fusion with digital LED & RGB LED headers\nSmart fan 5 with fan stop");
    }
    else if (k3 == 7)
    {
        printf("\nAMD AM4 Socket and PCIe 4. 0: The perfect pairing for Zen 3 Ryzen 5000 & 3rd Gen AMD Ryzen CPUs\nRobust Power Design: 12plus2 DrMOS power stages with high-quality alloy chokes and durable capacitors provide reliable power for the last AMD high-count-core CPUs\nOptimized Thermal Solution: Fanless VRM and chipset heatsinks with ASUS Stack Cool 3plus design keep your system running reliably under heavy load by enhancing passive cooling capacity for critical onboard components.\nHigh-performance Gaming Networking: 2. 5 Gb LAN with ASUS LANGuard\nBest Gaming Connectivity: Supports HDMI 2. 1(4Kat60HZ) and DisplayPort 1. 2 output, featuring dual M. 2 slots (NVMe SSD)—one with PCIe 4. 0 x4 connectivity, USB 3. 2 Gen 2 Type-C port and Thunderbolt 3 header");
    }
    else if (k3 == 8)
    {
        printf("\nIntel LGA 1200 socket: Ready for 11th Gen Intel Core processors\nUltrafast connectivity: M.2 NVMe SSD, 1Gb Ethernet, USB 3.2 Gen 1 Type-A, DP/HDMI/D-Sub, SPI-TPM header\nEnhanced Power Solution: 8 DrMOS power stages, ProCool connector, alloy chokes and durable capacitors for stable power delivery in the most demanding situations\nASUS-exclusive self-recovering BIOS technology for automatic system BIOS recovery from a verified backup\nASUS CSM motherboard: ASUS Corporate Stable Model, with up to 36-month Supply, EOL notice & ECN control\n");
    }
    else if (k3 == 9)
    {
        printf("\nSupports 11th and 10th Gen Intel Core Series Processors\nDual Channel Non-ECC Unbuffered DDR4, 4 DIMMs\nDirect 12+1 Phases Digital VRM Solution with 50A DrMOS\nShielded Memory Routing for Better Memory Overclocking\nFully Covered Thermal Design with High Coverage MOSFET Heatsinks");
    }
 
    if(k == 4)
    {
        system("CLS");
        printf("\n\n\t\t\t    Dobrodosli u kategoriju HDD/SSD!");
        printf ("  \n\n\t\n=================================== \t=================================\t=======================================");
        printf ("\n 1.SAMSUNG 870 QVO SATA III 2.5 99$ \t 2.Seagate Barracuda 3 TB 100$ \t       3.Samsung SSD 870 EVO, 1 TB 120$");
        printf ("  \n=================================== \t=================================\t=======================================");
 
 
 
        printf ("  \n\n\n===================================\t==================================\t================================");
        printf ("\n 4.SAMSUNG 980 SSD 1TB M.2 NVMe 114$ \t 5.Kingston 480GB A400 SATA 3 2.5 50$ \t 6.Seagate Barracuda 1TB  60$");
        printf ("  \n===================================\t==================================\t================================");
 
 
 
 
        printf ("\n\n\n==================================== \t =======================================\t ===========================================");
        printf ("\n 7.Western Digital 1TB WD Blue 40$ \t 8.Seagate Bare Drives BarraCuda 1TB 45$ \t  9.SAMSUNG 970 EVO Plus SSD 2TB - M.2 NVMe 200$");
        printf ("\n==================================== \t ======================================\t     ==========================================");
 
 
        printf("\n\n\t Unesite broj koji se nalaze iznad da bi dobili malo vise informacija o Hard disku/Ssd-u: ");
        scanf("%d",&k4);
    } 
    if (k4 == 1)
    {
        printf("\nGO BIG, DO MORE: The 870 QVO is Samsung's latest 2nd generation QLC SSD with up to 8TB of storage capacity\nENHANCED IN EVERY WAY: With an expanded, SATA interface limit of 560/530 MB/s sequential speeds, the 870 QVO improves random access speed and sustained performance\nBOOST CAPACITY: The 870 QVO is available in 1, 2, 4 and 8TB\nRELIABLE AND SUSTAINABLE: The capacity of the 8TB 870 QVO increases reliability up to 2,880 TBW using a refined ECC algorithm for stable performance\nUPGRADE WITH EASE: Upgrading to 870 QVO is now easier than ever for anyone with a desktop PC or laptop that supports a standard 2.5 inch SATA form factor.");
    } 
    else if (k4 == 2)
    {
        printf("\nStorage Capacity: 3 TB\nPlatform Supported: Mac\nPlatform Supported: PC\nFeatures: AcuTrac Technology\nFeatures: OptiCache Technology\n");
    }
    else if (k4 == 3)
    {
        printf("\nInterface: achieves the maximum SATA limit of 560/530 MB/s sequential speeds\nIntelligent Turbo Write: accelerates write speed and maintains long-term high performance\nSamsung Magician 6 Software: manage your drive with a range of useful tools to help you keep up with the latest updates, monitor the drive’s health and statu\nDesigned for anyone with a desktop PC or laptop that supports a standard 2.5-inch SATA form factor\nAvailable capacity: 1 TB");
    }
    else if (k4 == 4)
    {
        printf("\nUPGRADE TO IMPRESSIVE NVMe SPEED Whether you need a boost for gaming or a seamless workflow for heavy graphics, the 980 is a smart choice for outstanding SSD performance\nPACKED WITH SPEED 980 delivers value, without sacrificing sequential read write speeds up to 3,500 3,000 MB s\nKEEP MOVING WITH FULL POWER MODE Keep your SSD running at its peak with Full Power Mode, which drives continuous and consistent high performance\nBUILT FOR THE LONG RUN With up to 600 TBW and the 980's optimized endurance comes with trusted reliability");
    }
    else if (k4 == 5)
    {
        printf("\nFast start up, loading and file transfers. A400 has a 7 millimeter form factor to fit in a wider array of systems. It’s ideal for slimmer notebooks and in systems with limited available space\nMore reliable and durable than a hard drive\nMultiple capacities with space for applications or a hard drive replacement; Operating temperature: 0°C-70°C\nCapacity: 480GB, Interface: SATA Rev. 3.0 (6Gb/s) with backwards compatibility to SATA Rev. 2.0. 480GB to 500MB/s Read and 450MB/s Write");
    }
    else if (k4 == 6)
    {
        printf("\nFastest Hard Drive delivers 7200RPM spin speed along with sustained data rates up to 160MB/s and burst data rates of 6Gb/s\nThanks to thin 7mm z-height, it’s the perfect fit for thin laptop upgrades and similar small-form factor systems\nCompatible with Creative pros systems, Desktop or all-in-one PCs, Home servers, Entry-level direct-attached storage devices (DAS)\nBundled with 2 years of Seagate Rescue Data Recovery Services, this drive is protected for 2 years against any mechanical, accidental, or natural disaster\n5- year product warranty and 300TB/year workload limit");
    }
    else if (k4 == 7)
    {
        printf("\n200 RPM, SATA 6 Gb/s, 64 MB Cache, 3.5\nReliable everyday computing, WD quality and reliability\n");
    }
    else if (k4 == 8)
    {
        printf("\n3.5 Inch SATA 6 Gb/s 7200 RPM 64MB Cache for Computer Desktop PC\n");
    }
    else if (k4 == 9)
    {
        printf("\nINNOVATIVE V-NAND TECHNOLOGY: Powered by Samsung V-NAND Technology, the 970 EVO Plus SSD’s NVMe interface (PCIe Gen 3.0 x4 NVMe 1.3) offers enhanced bandwidth, low latency, and power efficiency ideal for tech enthusiasts, high end gamers, and 4K & 3D content designers\nBREAKTHROUGH READ WRITE SPEEDS: Sequential read and write performance levels of up to 3,500MB s and 3,300MB s, respectively; Random Read (4KB, QD32): Up to 600,000 IOPS Random Read\nPERFORMANCE OPTIMIZATION AND DATA SECURITY: Seamless cloning and file transfers with Samsung Magician Software, the ideal SSD management solution for performance optimization and data security with automatic firmware updates\nSUPERIOR HEAT DISSIPATION: Samsung’s Dynamic Thermal Guard automatically monitors and maintains optimal operating temperatures to minimize performance drops\n5-YEAR LIMITED WARRANTY: 5-year limited warranty or 600 TBW (Terabytes Written)");
    } 
    if(k == 5)
    {
        system("CLS");
        printf("\n\n\t\t\t    Dobrodosli u kategoriju RAM!");
        printf ("  \n\n\t\n========================== \t=============================================================\t==============================================================");
        printf ("\n 1.Kingston Fury Beast 8 GB 2666 MHz 2.5 46$ \t 2.Kingston Fury Beast RGB 8GB 3200MHz 50$ \t 3.Kingston Fury Renegade RGB 16 GB 110$");
        printf ("  \n========================== \t=============================================================\t==============================================================");
 
 
 
        printf ("  \n\n\n================================\t============================================================\t==========================================================");
        printf ("\n 4.HyperX Fury 8GB 3200MHz KIT of 2 75$ \t 5.Corsair Vengeance RGB PRO 16GB (2x8GB) 100$ \t 6.Patriot Viper Steel DDR4 16GB (2 x 8GB)  70$");
        printf ("  \n================================\t============================================================\t==========================================================");
 
 
 
 
        printf ("\n\n\n================================ \t ===================================\t     ====================================");
        printf ("\n 7.G.Skill RipJaws V Series 16GB (2 x 8GB) 70$ \t 8.Corsair Vengeance LPX 8GB (1x8GB) 45$ \t 9.TEAMGROUP Elite Plus DDR4 16GB Kit (2 x 8GB) 55$");
        printf ("\n================================ \t ==================================\t     ====================================");
 
 
        printf("\n\n\t Unesite broj koji se nalaze iznad da bi dobili malo vise informacija o ram memoriji: ");
        scanf("%d",&k5);
    } 
    if (k5 == 1)
    {
        printf("\nDDR4 CL16 Desktop Memory Single Module\n8 GB 2666 MHz\nLow-profile heat spreader design\nCost-efficient, high-performance DDR4 upgrade\nIntel XMP-ready\n");
    }else if (k5 == 2)
    {
        printf("\n8gb RGB 3200mhz\nStunning RGB lighting with aggressive style¹\nPatented [Kingston FURY] Infrared Sync Technology\nIntel XMP-ready, Ready for AMD Ryzen\nPlug N Play functionality");
    }else if (k5 == 3)
    {
        printf("\n2 x 8 GB) 3200 MHz DDR4 CL16 Desktop Memory Kit of 2Stunning RGB style¹\nPatented Kingston FURY Infrared Sync technology\nFierce aluminum heat spreader complements the smooth RGB effects\nHigh speeds, low latency DDR4 performance\nIntel XMP Certified profiles optimized for Intel's latest");
    }else if (k5 == 4)
    {
        printf("\nDDR4 CL16 DIMM (Kit of 2)  Black XMP Desktop Memory\nUpdated low-profile heat spreader design\nCost-efficient, high-performance DDR4 upgrade\nIntel XMP-ready profiles optimized for Intel’s latest chipsets\nAvailable in fast speeds up to 3466MHz");
    }else if (k5 == 5)
    {
        printf("\nDDR4 3200MHz C16 LED Desktop Memory\nCustomize lighting profiles with millions of different patterns and colors, or create your own in CORSAIR iCUE software.\nCompatible with Intel and AMD DDR4 motherboards.\nSupports Intel XMP 2.0 for simple one-setting installation and optimum performance.\nBuilt-in aluminum heat spreader provides superb memory cooling even when overclocked.\n");
    }else if (k5 == 6)
    {
        printf("\nCapacity: 16GB (2 x 8GB) DDR4\nBase Frequency: PC4-17000 (2133MHz); Up to PC4-25600 (3200MHz) with XMP 2.0 enabled\nBase Timings: 15-15-15-36; Overclock timing with XMP 2.0 enabled Tested Timings: 16-18-18-16\nCOMPATIBILITY: Tested on the latest Intel & AMD platforms\nCustom design and series: All aluminium heat shield featuring gunmetal grey sides with diamond- cut viper logo and black top");
    }else if (k5 == 7)
    {
        printf("\nDDR4 3600 CL18-22-22-42 1.35V Dual Channel Desktop Memory\n16GB kit containing 2 x 8GB modules, DDR4-3600, 288-Pin, CAS Latency CL18 (18-22-22-42) at 1.35V\nECC: No, Dual Channel Kit, Color: Black, Recommended Use: High Performance or Gaming Memory\n");
    }else if (k5 == 8)
    {
        printf("\nDDR4 3600 (PC4-28800) C18 Optimized for AMD Ryzen - Black\nA low-profile height of just 34mm ensures that VENGEANCE LPX even fits in most small-form-factor builds\nSupports Intel XMP 2.0 for simple one-setting installation and setup\nAvailable in multiple colors to match the style of your system\nHand-sorted memory chips ensure high performance with generous overclocking headroom\n");
    }else if (k5 == 9)
    {
        printf("\n2666MHz PC4-21300 CL19 Unbuffered Non-ECC 1.2V U-DIMM 288 Pin PC Computer Desktop Memory Module Ram Upgrade - Red & Black\nLifetime warranty and Free technical support\nAdherence to JEDEC and compliance to RoHS with respect to environmental protection regulation, production and manufacturing\n");
    }
 
    if(k == 6)
    {
        system("CLS");
        printf("\n\n\t\t\t    Dobrodosli u kategoriju Kucista!");
        printf ("  \n\n\t\n========================== \t===============================\t================================");
        printf ("\n 1. Falcon Pathfinder Window RGB 46$ \t 2.AeroCool Cylon RGB 50$ \t 3.MOROVOL ATX PC Case 70$");
        printf ("  \n========================== \t===============================\t================================");
 
 
 
        printf ("  \n\n\n==========================\t============================\t==========================");
        printf ("\n 4.NZXT H510 100$ \t         5.Antec NX260 80$ \t  6.Montech Fighter 500 Black 70$");
        printf ("  \n==========================\t============================\t==========================");
 
 
 
 
        printf ("\n\n\n============================== \t =================================\t  =============================");
        printf ("\n 7.Zalman S3 ATX Mid Tower 55$ \t 8.Corsair Carbide Series 75$ \t          9.Thermaltake Versa H22 Black 50$");
        printf ("\n============================== \t ================================\t   ==============================");
 
 
        printf("\n\n\t Unesite broj koji se nalaze iznad da bi dobili malo vise informacija o kucistu: ");
        scanf("%d",&k6);
   
    if (k6 == 1)
    {
        printf("\n1x USB3.0, 2x USB2.0, 1x HD Audio + AC 97 ; Power Switch/Reset buttons\nMid-Tower\nUz kucište dolaze ugrasdjeni ventilatori: Napred 1x 120 RGB (sa fiksim bojama) , Pozadi 1x120mm RGB (sa fiksim bojama). Podržana montaža ventilatora, Gore 2x 120mm.\n");
    }
    else if (k6 == 2)
    {
        printf("\nFull Acrylic Side Window RGB ready Mid Tower case. Elegant backslash LED with 13 lighting modes on front panel. 6 RGB flow lighting modes. 7 solid color modes.\nSupports liquid cooling: 240mm radiator in the front panel. Supports air cooling: 120mm fan on top to enhance cooling performance. Supports high-end graphics cards up to 371mm.\nSupports VGA fan bracket design: two 120mm fans for superior cooling performance of VGA. Supports SD or micro SD memory card. Dual chamber design for improved ventilation.\nRemovable PSU dust filter for easy cleaning. Steel Thickness: 0.5mm. Motherboards: ATX/micro ATX/mini-ITX. Liquid Cooling: Front: 240mm Radiator (Optional).\nI/O Ports: USB3.0 x 1; USB2.0 x 2 ; HD Audio & Mic. Air Cooling: Front: 120mm x 3 or 140mm x 2 (Optional); Top: 120mm x 1 (Optional); Rear: 120mm x 1 (Includes 120mm Fan).");
    }
    else if (k6 == 3)
    {
        printf("\n[Perfect Airflow] Irregular and mesh front panel is the optimal cooling performance panel that features a stereo contour and is also providing high airflow and great light show at the same time.\n[2pcs RGB Fans and ARGB LED] Morovol PC case Pre-installed with 2 RGB 120mm case fans are fixed RGB lighting capable and provide considerable airflow. The ARGB LED strip on the front panel also makes this case more unique in appearance. Note: The Fans lighting is fixed, not addressable.\n[Precise Design] Computer case supports up to ATX motherboards, and graphics cards up to 300mm. Besides, it can house 2 x 3.5” HDD and 2 x 2.5” SSD.\n[Tempered Glass] Mid-tower case design with a tempered glass side panel, precision-engineered for strength as well as aesthetics. It can display your accessories perfectly, internal easy to install PC parts.\n[Top I/O panel] Gaming case quick and easy access to I/O panel featuring 1 x USB 3.0 port, 2x USB 2.0 ports, HD audio, and mic ports, reset/power button.");
    }
    
    else if (k6 == 4)
    {
        printf("\nNew features: Front I/O USB Type-C Port and Tempered glass side panel with single screw installation\nEnhanced cable management: Our patented cable routing kit with pre-installed channels and straps makes wiring easy and intuitive\nSTREAMLINED COOLING: 2 Aer F120mm fans included for optimal internal airflow and the front panel and PSU intakes include removable filters, removable bracket designed for radiators up to 240mm - simplifies the installation of either closed-loop or custom-loop water cooling\nMotherboard support: Mini-ITX, MicroATX, and ATX\n");
    }
    
 
    else if (k6 == 5)
    {
        printf("\nMotherboard Support: Up to ATX\n3 x 120 mm ARGB fan in rear included\nGraphics Card Support: Up to 310 mm\nPSU Support: Up to 185 mm(with HDD) Up to 310 mm(without HDD)\nTempered glass Side panel");
    }
    
    else if (k6 == 6)
    {
        printf("\nFull View Glass Side Panel - The large sized Glass Side Panel, allows for a full view of your PC setup and glorious chromatic lighting effects.\nFine Metal Mesh Front - Large area front mesh with LED Rainbow fans allow maximum airflow and with the bottom mesh providing cooling for your power supply keeping everything stable.\nUnique Design with M Modeling Architecture - Front panel is not only designed with our logo of Montech, but also combined the top triangle with bottom triangle. This design makes this panel be unique.\nDazzling Rainbow Fans - Four pre-installed dazzling LED Rainbow fans, for a glorious color space and lighting effects. Pre-installed 4 dazzling rainbow fans create gorgeous color space.\nExcellent Dust Resistance - Magnetic top vent screen provides excellent dust resistance and is easy to unmount.");
    }
    
    else if (k6 == 7)
    {
        printf("\nLuxurious Hairline Front Panel Design & Dual Intake Design with Metal Finish\nFull Acrylic windowed side-panel applied\nDual line front ventilation with metallic Decoration\nTop & Bottom Dust Filter (smooth Air Circulation & Protect the case from dust)\nZalman's Optimized Cooling Solution (up to 8 fans can be installed)\nConvenient Interface (USB 3.0, 2.0, Reset Button)\nFront Radiator Max 120mm (VGA Card Max 330mm)\n");
    }
    
    else if (k6 == 8)
    {
        printf("\nGive your system a look that's both clean and classic with smooth curved edges, a polished finish, and a front-facing Corsair logo backlit by an RGB fan with six customizable RGB LEDs.\nAn edge-to-edge Tempered glass Side panel window shows off your PC's components.\nA full-length PSU cover hides your PSU and cables out of sight, making immaculate builds easier to create than ever.\nFits up to 6x 120mm or 4x 140mm cooling fans for terrific airflow that keeps your PC cool, or multiple radiators in sizes up to 360mm.\nConnect the included RGB fan to compatible Asus, Gigabyte, or MSI motherboards and their accompanying software to customize and control RGB fan lighting");
    }
    
    else if (k6 == 9)
    {
        printf("\n[Enhanced airflow] – perforated metal front and top panel, heightened food stands, and specially designed cable routing gap enhance airflow for maximum ventilation\n[3+3+3 drive bay] – 5. 25” x 3 plus 2. 5”/3. 5” x 3 plus 2. 5” x 3\n[Tool-free installation] – tool-free drive bay design minimizes the hassles of installing/removing. Tool-free mount fan can be clipped on the dust filter\nOne 120mm rear fan pre-installed with the option of two 120mm front intake fans to optimize system ventilation\nSupports Mini ITX, Micro ATX, ATX Motherboard\nI/O port - USB 3. 0 x 1, USB2. 0 x 2, HD Audio x 1\nMax CPU cooler height: 155mm/ Max VGA length: 315mm\nDimension – 16. 9” x 8. 2” x 18. 9”/ 9. 3 lbs.");
    }
    else {
    	printf("\t\tNepostojeci broj.");
	}
}
	else if(k == 0){
		system("CLS");
		goto menu;
	}
}
if(a == 0){
    	goto odabir;
	}

    else {
        printf("\t\tNeposotojeci broj.");
        exit(0);
    }
}
//-----------------------------------------------------------------------------------------------------------------------------------------------//
	//kalendar
	else if(odabir == 10){
		system("cls");
    int year,day=0,dayInMonth,weekDay=0,startingDay,month;
    char nazadammar[20];
    nazadammar1:
    printf("Unesite godinu: ");
    scanf("%d",&year);
    char *months[]={"Januar","Februar","Mart","April","Maj","Jun","Jul","Avgust","Septembar","Oktobar","Novembar","Decembar"};
    int monthDays[]={31,28,31,30,31,30,31,31,30,31,30,31};
    if((year%4==0&&year%100!=0)||year%400==0)
    {
        monthDays[1]=29;
    }
    startingDay=get_first_weekDay(year);
    for(month=0;month<12;month++)
    {
        dayInMonth=monthDays[month]+1;
        printf("\n\n------------------%s----------------",months[month]);
        printf("\n  Ned   Pon  Uto  Sre  Cetv Pet  Sub\n");
        for(weekDay=0;weekDay<startingDay;weekDay++)
        {
           printf("     ");
        }
        for(day=1;day<dayInMonth;day++)
        {
            printf("%5d",day);
            if(++weekDay>6)
            {
                printf("\n");
                weekDay=0;
            }
            startingDay=weekDay;
        }
	}
	printf("\n");
	printf("\nUkoliko zelite da opet uneste godinu upisite 'Again', a ako zelite da se vratite nazad upisite 'Back'\n");
	scanf("%s",&nazadammar);
	if(strcmp(nazadammar,"Again")== 0){
		system("CLS");
		goto nazadammar1;
	}
	if(strcmp(nazadammar,"Back")== 0){
		system("CLS");
		goto odabir;
	}
	else {
		printf("Izabrali ste nepostojecu opciju.");
	}
	}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
//atlas
	else if(odabir == 8){
		char d[20];
 		char back[20];
 
 	againmitro:
	printf("Unesite bilo koju drzavu !!! = ");
	 scanf(" %[^\n]%*c",d);
 
	if(strcmp(d, "Srbija")== 0) {
 
		printf("\n Beograd");
 
	}if(strcmp(d, "Emirati")== 0) {
 
		printf("\n Abu Dabi");
 
	}if(strcmp(d, "Nigerija")== 0) {
 
		printf("\n Abudza ");
 
	}if(strcmp(d, "Etiopija")== 0) {
 
		printf("\n Adis Abeba ");
 
	}if(strcmp(d, "Gana")== 0) {
 
		printf("\n Akra");
 
	}if(strcmp(d, "Alzir")== 0) {
 
		printf("\n Alzir");
 
	}if(strcmp(d, "Jordan")== 0) {
 
		printf("\n Aman ");
 
	}if(strcmp(d, "Holandija")== 0) {
 
		printf("\n Amsterdam");
 
	}if(strcmp(d, "Andora")== 0) {
 
		printf("\n Andora la velja");
 
	}if(strcmp(d, "Turska")== 0) {
 
		printf("\n Ankara");
 
	}if(strcmp(d, "Madagaskar")== 0) {
 
		printf("\n Antananarivo");
 
	}if(strcmp(d, "Samoa")== 0) {
 
		printf("\n Apija");
 
	}if(strcmp(d, "Eritreja")== 0) {
 
		printf("\n Asmara");
 
	}if(strcmp(d, "Paragvaj")== 0) {
 
		printf("\n Asunsion");
 
	}if(strcmp(d, "Grcka")== 0) {
 
		printf("\n Atina");
 
	}if(strcmp(d, "Turkmenistan")== 0) {
 
		printf("\n Ashabad");
 
	}if(strcmp(d, "Irak")== 0) {
 
		printf("\n Bagdad");
 
	}if(strcmp(d, "Azerbejdzan")== 0) {
 
		printf("\n Baku");
 
	}if(strcmp(d, "Mali")== 0) {
 
		printf("\n Bamako");
 
	}if(strcmp(d, "Centralno africka republika")== 0) {
 
		printf("\n Bangi");
 
	}if(strcmp(d, "Tajland")== 0) {
 
		printf("\n Bangkok");
 
	}if(strcmp(d, "Brunej")== 0) {
 
		printf("\n Begavan");
 
	}if(strcmp(d, "Gambija")== 0) {
 
		printf("\n Bandzul");
 
	}if(strcmp(d, "Sent kits i Nevis")== 0) {
 
		printf("\n Baster");
 
	}if(strcmp(d, "Liban")== 0) {
 
		printf("\n Bejrut");
 
	}if(strcmp(d, "Belize")== 0) {
 
		printf("\n Belmopan");
 
	}if(strcmp(d, "Nemacka")== 0) {
 
		printf("\n Berlin");
 
	}if(strcmp(d, "Svajcarska")== 0) {
 
		printf("\n Bern");
 
	}if(strcmp(d, "Austrija")== 0) {
 
		printf("\n Bec");
 
	}if(strcmp(d, "Gvineja bisao")== 0) {
 
		printf("\n Bisau");
 
	}if(strcmp(d, "Kirgistan")== 0) {
 
		printf("\n Biskek");
 
	}if(strcmp(d, "Kolumbija")== 0) {
 
		printf("\n bogota");
 
	}if(strcmp(d, "Republika Kongo")== 0) {
 
		printf("\n Brazavil");
 
	}if(strcmp(d, "Brazil")== 0) {
 
		printf("\n Brazilija");
 
	}if(strcmp(d, "Slovacka")== 0) {
 
		printf("\n Bratislava");
 
	}if(strcmp(d, "Belgija")== 0) {
 
		printf("\n Brisel");
 
	}if(strcmp(d, "Barbados")== 0) {
 
		printf("\n Bridztaun");
 
	}if(strcmp(d, "Madjarska")== 0) {
 
		printf("\n Budimpesta");
 
	}if(strcmp(d, "Argentina")== 0) {
 
		printf("\n Buenos ajres");
 
	}if(strcmp(d, "Rumunija")== 0) {
 
		printf("\n Bukurest");
 
	}if(strcmp(d, "Lihtenstajn")== 0) {
 
		printf("\n Baduc");
 
	}if(strcmp(d, "Malta")== 0) {
 
		printf("\n Valeta");
 
	}if(strcmp(d, "Poljska")== 0) {
 
		printf("\n Varsava");
 
	}if(strcmp(d, "Vatikan")== 0) {
 
		printf("\n Vatikan");
 
	}if(strcmp(d, "SAD")== 0) {
 
		printf("\n Vasington");
 
	}if(strcmp(d, "Novi Zeland")== 0) {
 
		printf("\n Velington");
 
	}if(strcmp(d, "Laos")== 0) {
 
		printf("\n Vijentijan");
 
	}if(strcmp(d, "Sejseli")== 0) {
 
		printf("\n Viktorija");
 
	}if(strcmp(d, "Litvanija")== 0) {
 
		printf("\n Vilnjus");
 
	}if(strcmp(d, "Namibija")== 0) {
 
		printf("\n Vindhuk");
 
 
	}if(strcmp(d, "Gvatemala")== 0) {
 
		printf("\n Gvatemala");
 
	}if(strcmp(d, "Burundi")== 0) {
 
		printf("\n Gitega");
 
	}if(strcmp(d, "Irska")== 0) {
 
		printf("\n Dablin");
 
	}if(strcmp(d, "Banglades")== 0) {
 
		printf("\n Daka");
 
	}if(strcmp(d, "Senegal")== 0) {
 
		printf("\n Dakar");
 
	}if(strcmp(d, "Sirija")== 0) {
 
		printf("\n Damask");
 
 
 
	}if(strcmp(d, "Istocni timor")== 0) {
 
		printf("\n Dili");
 
 
	}if(strcmp(d, "Tanzanija")== 0) {
 
		printf("\n Dodoma");
 
 
	}if(strcmp(d, "Katar")== 0) {
 
		printf("\n Doha");
 
 
 
	}if(strcmp(d, "Tadzikinistan")== 0) {
 
		printf("\n Dusanbe");
 
	}if(strcmp(d, "Hrvatska")== 0) {
 
		printf("\n Zagreb");
 
	}if(strcmp(d, "Pakistan")== 0) {
 
		printf("\n Islamabad");
 
 
	}if(strcmp(d, "Obala slonovace")== 0) {
 
		printf("\n Jamusukro");
 
 
	        }if(strcmp(d, "Nauru")== 0) {
 
		printf("\n Jaren");
 
 
	        }if(strcmp(d, "Kamerun")== 0) {
 
		printf("\n Jaunde");
 
 
	   }if(strcmp(d, "Jermenija")== 0) {
 
		printf("\n Jerevan");
 
 
	   }if(strcmp(d, "Izrael")== 0) {
 
		printf("\nJerusalim ");
 
 
		}if(strcmp(d, "Kiribati")== 0) {
 
		printf("\n Juzna tarava");
 
 
		}if(strcmp(d, "Avganistan")== 0) {
 
		printf("\n kabul");
 
 
		}if(strcmp(d, "Egipat")== 0) {
 
		printf("\n Kairo");
 
 
		}if(strcmp(d, "Uganda")== 0) {
 
		printf("\n Kampala");
 
		}if(strcmp(d, "Australija")== 0) {
 
		printf("\n Kanbera");
 
		}if(strcmp(d, "Venecuela")== 0) {
 
		printf("\n Karakas");
 
		}if(strcmp(d, "Sudan")== 0) {
 
		printf("\n Kartum");
 
 
		}if(strcmp(d, "Sveta Lucija")== 0) {
 
		printf("\n Kastri");
 
 
 
		}if(strcmp(d, "Nepal")== 0) {
 
		printf("\n Katmandu");
 
		}if(strcmp(d, "Ruanda")== 0) {
 
		printf("\n Kigali");
 
 
		}if(strcmp(d, "Ukrajina")== 0) {
 
		printf("\n Kijev");
 
 
		}if(strcmp(d, "Sent Vinsent i Grenadini")== 0) {
 
		printf("\n Kingstaun");
 
		}if(strcmp(d, "Jamajka")== 0) {
 
		printf("\n Kingston");
 
 
		}if(strcmp(d, "Dr Kongo")== 0) {
 
		printf("\n Kinsasa");
 
 
		}if(strcmp(d, "Ekvador")== 0) {
 
		printf("\n Kito");
 
 
		}if(strcmp(d, "Moldavija")== 0) {
 
		printf("\n Kisinjev");
 
 
		}if(strcmp(d, "Gvineja")== 0) {
 
		printf("\n Konakri");
 
 
		}if(strcmp(d, "Danska")== 0) {
 
		printf("\n Kopenhagen");
 
		}if(strcmp(d, "Malezija")== 0) {
 
		printf("\n Kuala Lumpur");
 
 
		}if(strcmp(d, "Kuvajt")== 0) {
 
		printf("\n Kuvajt");
 
		}if(strcmp(d, "Bolivija")== 0) {
 
		printf("\n La Paz");
 
 
		}if(strcmp(d, "Gabon")== 0) {
 
		printf("\n Libervil");
 
		}if(strcmp(d, "Malavi")== 0) {
 
		printf("\n Lilongve");
 
 
		}if(strcmp(d, "Peru")== 0) {
 
		printf("\n Lima");
 
		}if(strcmp(d, "Portugal")== 0) {
 
		printf("\n Lisabon");
 
 
		}if(strcmp(d, "Togo")== 0) {
 
		printf("\n Lome");
 
 
		}if(strcmp(d, "Ujedinjeno Kraljevstvo")== 0) {
 
		printf("\n London");
 
		}if(strcmp(d, "Angola")== 0) {
 
		printf("\n Luanda");
 
 
		}if(strcmp(d, "Luksemburg")== 0) {
 
		printf("\n Luksemburg");
 
		}if(strcmp(d, "Zambija ")== 0) {
 
		printf("\n Lusaka");
 
 
	   }if(strcmp(d, "Slovenija")== 0) {
 
		printf("\n Ljubljana");
 
 
	   }if(strcmp(d, "Spanija")== 0) {
 
		printf("\n Madrid");
 
 
 
 
	   }if(strcmp(d, "Ekvatorijalna Gvineja")== 0) {
 
		printf("\n Malabo");
 
 
	   }if(strcmp(d, "Maldivi")== 0) {
 
		printf("\n Male");
 
 
	   }if(strcmp(d, "Nikaragva")== 0) {
 
		printf("\n Managva");
 
 
 
	   }if(strcmp(d, "Bahrein")== 0) {
 
		printf("\n Manama");
 
 
 
 
	   }if(strcmp(d, "Filipini")== 0) {
 
		printf("\n Manila");
 
 
	   }if(strcmp(d, "Mozambik")== 0) {
 
		printf("\n Maputo");
 
	   }if(strcmp(d, "Lesoto")== 0) {
 
		printf("\n Maseru");
 
 
 
	   }if(strcmp(d, "Oman")== 0) {
 
		printf("\n Maskat");
 
 
 
	   }if(strcmp(d, "Marsalska Ostrva")== 0) {
 
		printf("\n Madzuro");
 
 
 
	   }if(strcmp(d, "Esvatini")== 0) {
 
		printf("\n Mbabane");
 
 
	   }if(strcmp(d, "Meksiko")== 0) {
 
		printf("\n Meksiko");
 
 
 
 
 
 
	   }if(strcmp(d, "Belorusija")== 0) {
 
		printf("\n Minsk");
 
 
	   }if(strcmp(d, "Somalija")== 0) {
 
		printf("\n Mogadisu");
 
 
	   }if(strcmp(d, "Monako")== 0) {
 
		printf("\n Monako");
 
 
	   }if(strcmp(d, "Liberija")== 0) {
 
		printf("\n Monrovija");
 
 
	   }if(strcmp(d, "Urugvaj")== 0) {
 
		printf("\n Montevideo");
 
 
 
	   }if(strcmp(d, "Komori")== 0) {
 
		printf("\n Moroni");
 
 
 
 
	   }if(strcmp(d, "Rusija")== 0) {
 
		printf("\n Moskva");
 
 
	   }if(strcmp(d, "Kenija")== 0) {
 
		printf("\n Najrobi");

	   }if(strcmp(d, "Bahame")== 0) {
 
		printf("\n Nasau");
 
	   }if(strcmp(d, "Palau")== 0) {
 
		printf("\n Ngerulmud");
 
 
	   }if(strcmp(d, "Mjanmar")== 0) {
 
		printf("\n Nejpjido");
 
 
 
	   }if(strcmp(d, "Niger")== 0) {
 
		printf("\n Nijamej");
 
 
	   }if(strcmp(d, "Kipar")== 0) {
 
		printf("\n Nikozija");
 
 
 
	   }if(strcmp(d, "Mauritanija")== 0) {
 
		printf("\n Nuaksot");
 
	   }if(strcmp(d, "Tonga")== 0) {
 
		printf("\n Nukualofa");
 
 
 
 
	   }if(strcmp(d, "Kazahstan")== 0) {
 
		printf("\n Nur Sultan");
 
 
	   }if(strcmp(d, "Cad")== 0) {
 
		printf("\n Ndzamena");
 
 
	   }if(strcmp(d, "Indija")== 0) {
 
		printf("\n Nju Delhi");
 
 
	   }if(strcmp(d, "Norveska")== 0) {
 
		printf("\n Oslo");
 
 
 
	   }if(strcmp(d, "Kanada")== 0) {
 
		printf("\n Otava");
 
	   }if(strcmp(d, "Mikronezija")== 0) {
 
		printf("\n Palikir");
 
 
 
	   }if(strcmp(d, "Panama")== 0) {
 
		printf("\n Panama");
 
 
 
	   }if(strcmp(d, "Surinam")== 0) {
 
		printf("\n Paranaribo");
 
 
	   }if(strcmp(d, "Francuska")== 0) {
 
		printf("\n Pariz");
 
 
 
	   }if(strcmp(d, "Kina")== 0) {
 
		printf("\n Peking");
 
 
 
	   }if(strcmp(d, "Severna Koreja")== 0) {
 
		printf("\n Pjongjang");
 
 
 
	   }if(strcmp(d, "Kambodza")== 0) {
 
		printf("\n Pnom Pen");
 
 
 
	   }if(strcmp(d, "Crna Gora")== 0) {
 
		printf("\n Podgorica");
 
 
 
	   }if(strcmp(d, "Vanuatu")== 0) {
 
		printf("\n Port Vila");
 
 
	   }if(strcmp(d, "Mauricijus")== 0) {
 
		printf("\n Port Luj");
 
 
 
 
	   }if(strcmp(d, "Papua Nova Gvineja")== 0) {
 
		printf("\n Port Morzbi");
 
 
 
 
	   }if(strcmp(d, "Haiti")== 0) {
 
		printf("\n Port o Prens");
 
	   }if(strcmp(d, "Trinidad i Tobago")== 0) {
 
		printf("\n Port Ov Spejn");
 
 
 
 
	   }if(strcmp(d, "Benin")== 0) {
 
		printf("\n Porto Novo");
 
 
	   }if(strcmp(d, "Ceska")== 0) {
 
		printf("\n Prag");
 
 
	   }if(strcmp(d, "Zelenortska Ostrva")== 0) {
 
		printf("\n Praja");
 
 
 
	   }if(strcmp(d, "Juznoafricka Republika")== 0) {
 
		printf("\n Petorija");
 
 
 
	   }if(strcmp(d, "Maroko")== 0) {
 
		printf("\n Rabat");
 
 
 
 
	   }if(strcmp(d, "Island")== 0) {
 
		printf("\n Rejkjavik");
 
 
	   }if(strcmp(d, "Letonija")== 0) {
 
		printf("\n Riga");
 
 
 
	   }if(strcmp(d, "Saudijska Arabija")== 0) {
 
		printf("\n Rijad");
 
 
 
	   }if(strcmp(d, "Italija")== 0) {
 
		printf("\n Rim");
 
 
 
	   }if(strcmp(d, "Dominika")== 0) {
 
		printf("\n Rozo");
 
 
 
	   }if(strcmp(d, "San Marino")== 0) {
 
		printf("\n San Marino");
 
 
 
	   }if(strcmp(d, "Salvador")== 0) {
 
		printf("\n San Salvador");
 
 
 
	   }if(strcmp(d, "Kostarika")== 0) {
 
		printf("\n San Hose");
 
 
 
	   }if(strcmp(d, "Jemen")== 0) {
 
		printf("\n Sana");
 
 
 
	   }if(strcmp(d, "Cile")== 0) {
 
		printf("\n Santijago");
 
 
	   }if(strcmp(d, "Domikanska Republika")== 0) {
 
		printf("\n Santo Domigo");
 
 
 
	   }if(strcmp(d, "Sao Tome i Principe")== 0) {
 
		printf("\n Sao Tome");
 
 
 
 
 
	   }if(strcmp(d, "Bosna i Hercegovina")== 0) {
 
		printf("\n Sarajevo");
 
 
 
 
	   }if(strcmp(d, "Antigva i Barbuda")== 0) {
 
		printf("\n Sent Dzons");
 
 
	   }if(strcmp(d, "Grenada")== 0) {
 
		printf("\n Sent Dzordziz");
 
 
 
	   }if(strcmp(d, "Juzna Koreja")== 0) {
 
		printf("\n Seul");
 
 
	   }if(strcmp(d, "Singapur")== 0) {
 
		printf("\n Singapur");
 
 
 
	   }if(strcmp(d, "Makedonija")== 0) {
 
		printf("\n Skoplje");
 
 
 
	   }if(strcmp(d, "Bugarska")== 0) {
 
		printf("\n Sofija");
 
 
 
 
	   }if(strcmp(d, "Sri Lanka")== 0) {
 
		printf("\n Sri Dzajavardenepura Kote");
 
 
 
	   }if(strcmp(d, "Svedska")== 0) {
 
		printf("\n Stokholm");
 
 
 
	   }if(strcmp(d, "Fidzi")== 0) {
 
		printf("\n Suvak");
 
 
	   }if(strcmp(d, "Estonija")== 0) {
 
		printf("\n Talin");
 
 
 
	   }if(strcmp(d, "Uzbekistan")== 0) {
 
		printf("\n Taskent");
 
 
 
 
	   }if(strcmp(d, "Gruzija")== 0) {
 
		printf("\n Tbilisi");
 
 
 
	   }if(strcmp(d, "Honduras")== 0) {
 
		printf("\n Tegusigalpa");
 
 
 
	   }if(strcmp(d, "Iran")== 0) {
 
		printf("\n Teheran");
 
 
 
 
	   }if(strcmp(d, "Butan")== 0) {
 
		printf("\n Timbu");
 
 
 
	   }if(strcmp(d, "Albanija")== 0) {
 
		printf("\n Tirana");
 
 
 
	   }if(strcmp(d, "Japan")== 0) {
 
		printf("\n Tokio");
 
 
 
	   }if(strcmp(d, "Libija")== 0) {
 
		printf("\n Tripoli");
 
 
 
	   }if(strcmp(d, "Tunis")== 0) {
 
		printf("\n Tunis");
 
 
 
 
	   }if(strcmp(d, "Burkina Faso")== 0) {
 
		printf("\n Uagadugu");
 
 
 
 
	   }if(strcmp(d, "Mongolija")== 0) {
 
		printf("\n Ulan batol");
 
 
 
	   }if(strcmp(d, "Sijera Leone")== 0) {
 
		printf("\n Fritaun");
 
 
 
 
	   }if(strcmp(d, "Tuvalu")== 0) {
 
		printf("\n Funafuti");
 
 
 
 
	   }if(strcmp(d, "Kuba")== 0) {
 
		printf("\n Havana");
 
 
 
 
	   }if(strcmp(d, "Vijetnam")== 0) {
 
		printf("\n Hanoj");
 
 
 
 
 
	   }if(strcmp(d, "Zimbabve")== 0) {
 
		printf("\n Harare");
 
 
 
 
	   }if(strcmp(d, "Finska")== 0) {
 
		printf("\n Helsinki");
 
 
 
	   }if(strcmp(d, "Solomonska ostrva")== 0) {
 
		printf("\n Honijara");
 
 
 
	   }if(strcmp(d, "Indonezija")== 0) {
 
		printf("\n Dzakarta");
 
 
 
	   }if(strcmp(d, "Dzibuti")== 0) {
 
		printf("\n Dzibuti");
 
 
 
	   }if(strcmp(d, "Gvajana")== 0) {
 
		printf("\n Dzordztaun");
 
 
 
	   }if(strcmp(d, "Juzni Sudan")== 0) {
 
		printf("\n Dzuba");
	   } 
	   	printf("\n");
	   	printf("\n Ako zelite da se vratite nazad, upisite 'Back',ako zelite ponovo da pretrazite upisite 'Again', a ako zelite da izadjete iz programa upisite 'Exit'.\n");
	   	scanf("%s",&back);
	   	if(strcmp(back,"Back")== 0){
	   		system("CLS");
	   		goto odabir;
		   }
		if(strcmp(back,"Again")== 0){
			system("CLS");
			goto againmitro;
		}
		if(strcmp(back,"Exit")== 0){
			system("CLS");
			printf("Odabrali ste opciju izlazak iz programa.");
			exit(0);
		}
	}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

	else if (sifra1 != sifra){
		system("CLS");
		    printf("\t\t\t\t\t _______________________\n");
		    printf("\t\t\t\t\t(  --      (O)       -- )\n");
		    printf("\t\t\t\t\t(_______________________)\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t|    Niste tacno uneli  |\n");
		    printf("\t\t\t\t\t|         sifru.        |\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t|                       |\n");
		    printf("\t\t\t\t\t(___    ___( )___    ___)\n"); 
		    printf("\t\t\t\t\t(_______________________)\n"); 
		    Sleep(500);
		    while(pokusaj > 0)
            {
                pokusaj--;
                system("CLS");
                goto sifra;
                if (pokusaj == 0)
                {
            	printf("\t\t\t\t\t _______________________\n");
			    printf("\t\t\t\t\t(  --      (O)       -- )\n");
			    printf("\t\t\t\t\t(_______________________)\n");
			    printf("\t\t\t\t\t|                       |\n");
			    printf("\t\t\t\t\t|                       |\n");
			    printf("\t\t\t\t\t|                       |\n");
			    printf("\t\t\t\t\t|                       |\n");
			    printf("\t\t\t\t\t|                       |\n");
			    printf("\t\t\t\t\t|       Nemate vise     |\n");
			    printf("\t\t\t\t\t|        pokusaja.      |\n");
			    printf("\t\t\t\t\t|                       |\n");
			    printf("\t\t\t\t\t|                       |\n");
			    printf("\t\t\t\t\t|                       |\n");
			    printf("\t\t\t\t\t|                       |\n");
			    printf("\t\t\t\t\t|                       |\n");
			    printf("\t\t\t\t\t(___    ___( )___    ___)\n"); 
			    printf("\t\t\t\t\t(_______________________)\n"); 
                }
    	}
    }
    else {
    	printf("\t\t\t\tUneli ste nepostojecu opciju, pokusajte ponovo.");
    	Sleep(500);
    	goto odabir;
	}
}
