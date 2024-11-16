//ROCK PAPER SCISSOR
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <ctype.h>

char play(char c[8],char c2[8]);

int main(){
    int i,a;
    char user1[8],res,*comp;
    for(i=0;i<55;i++)
    printf("* ");

    printf("\n \t\t\t\t\t ROCK PAPER SCISSOR \t\t\t\t\t");

    printf("\n");

    printf("\n RULES: \n 1.USER HAVE TO CHOOSE ANY ONE OPTION FROM ROCK,PAPER & SCISSOR \n 2.THEN COMPUTER WILL CHOOSE ANY OPTION ACCORDING TO THE RANDOM NO. GENERATED \n 3. YOU HAVE TO RUN THE PROGRAM AGAIN IN ORDER TO PLAY THE GAME AGAIN \n4.REMEMBER ROCK WIN AGAINST SCISSOR \t PAPER WIN AGAINST ROCK \t SCISSOR WIN AGAINST PAPER.");

    printf("\n");

    for(i=0;i<55;i++)
    printf("* ");

    printf("\n Available choices\n1:ROCK \n2:PAPER\n3:SCISSOR\nEnter your choice: ");
    scanf("%s",user1);

  for (i=0; user1[i] != '\0'; i++) {
    user1[i] = toupper(user1[i]);
  }

    srand(time(NULL));
    a = rand() % 100 + 1;
    if(a<=32){
        comp="ROCK";
    }

    else if(a>=33 && a<=65){
        comp="PAPER";
    }

    else{
        comp="SCISSOR";
    }

    printf("COMPUTER CHOOSES\n");
    sleep(2);
    printf("%s\n",comp);

    res=play(user1,comp);
    if (res=='w'){
        printf("\n CONGRATULATIONS YOU WON!");
    }

    else if (res=='l'){
        printf("\n OH NO BETTER LUCK NEXT TIME");

    }

    else if (res=='d'){
        printf("\n ITS A DRAW");
    }

    return 0;
}



char play(char user1[8], char comp[8])
{
    if(strcmp(user1,comp)==0)
    return 'd';

    else if(strcmp(user1,"ROCK")==0 && strcmp(comp,"SCISSOR")==0){
        return 'w';
    }

    else if(strcmp(user1,"ROCK")==0 && strcmp(comp,"PAPER")==0){
        return 'l';
    }

    else if(strcmp(user1,"PAPER")==0 && strcmp(comp,"ROCK")==0){
        return 'w';
    }

    else if(strcmp(user1,"PAPER")==0 && strcmp(comp,"SCISSOR")==0){
        return 'l';
    }

     else if(strcmp(user1,"SCISSOR")==0 && strcmp(comp,"PAPER")==0){
        return 'w';
    }

     else if(strcmp(user1,"SCISSOR")==0 && strcmp(comp,"ROCK")==0){
        return 'l';
    }

}






