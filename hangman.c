#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){

    int i;
    int size=0;
    char word[8];
    char letter;
    int chance=1;
    int checkletter[8]={0,0,0,0,0,0,0,0};
    char guess[8];
    int checkguess=0;
    int lives=5;
    int a=1;


    for(i=0;i<=108;i++)
    printf("-");
    
    printf("\n");

    printf("\t\t\t\t\t WELCOME TO HANGMAN :) \t\t\t\t\t");

    printf("\n");

    for(i=0;i<=108;i++)
    printf("-");

    srand(time(NULL));
    for(i=0;i<8;i++){
        word[i] = rand()%('z'-'a'+ 1) + 'a';
    }

    while(chance<=8){
        printf("\n WORD : ");

        for(i=0;i<8;i++){
            if(checkletter[i]==1){
                printf("%c",word[i]);

            }
            else{
                printf("_ ");
            }        
        }

    puts("");
    printf("\nENTER THE LETTER OF YOUR CHOICE\n");
    fgets(guess,8,stdin);

     
    letter=guess[0];

    printf("\nENTER LETTER : %c\n",letter);

    checkguess=chance;

    for(i=0;i<size;i++){
        if(checkletter[i]==1){
            continue;
        }

        if(letter==word[i]){
            checkletter[i]=1;
            chance++;
        }
    }

    if (checkguess == chance){
        lives--;
        printf("YOU GUESSED IT WRONG TRY AGAIN \n");


        if(lives==0)
        break;
    }

    else{
        printf("YOU GUESSED IT CORRECTLY \n");
    }

    if(a==1){
        printf("\nEXAMPLE ^ \n\n YOU GOT 4 TRIES \n THE GAME STARTS NOW \n");
    }
    a++;

}

if(lives == 0){
    printf("\nOH NO YOU LOST THE GAME !! TIME TO BE HANGED---\n");
}

else{
    printf("\nHURRAYY YOU WON LEESGGGOOO\n");

}




















}