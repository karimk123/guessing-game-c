#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

char name[20];

typedef enum {
   F, T
}
boolean;

void playGame(){
    
    int guessesTaken = 0;
    int response;
    srand(time(0));

    int number = rand() % 20;
    int answer;
    printf("\nWell, %s im thinking of a number (1 to 20) now what do you think it is?\n", name);
    while(guessesTaken < 3){


    printf("Take a guess\n");
    scanf("%i",&answer);
    guessesTaken++;

    if(answer < number){
        //if the answer if more 
        printf("My number is higher than that!!!!!!!!!\n");
        scanf("&i", &answer);
    }
     if(answer > number){
        //if the answer is lower
        printf("My number is lower than that!!!!!!!!!!!!!!!\n");
        
    }
     if(answer == number){
        printf("Correct!\n");
        break;
    }

}
    if(answer != number){
        printf("Nope, the number i was thinking of was %i.\n", number);
    }

    
    printf("Do you want to play again? (1 = yes, 2 = no)\n");

    
    scanf("%i", &response);

   if(response == 1){
        printf("restarting...\n");
        printf("%c",response);
        playGame();
        guessesTaken = 0;
        

    }
    else{
        printf("\nBye, thanks for playing!");
    }
        
        

    
    
    
        
}
    



int main(void){

    printf(R"EOF(
   ________  __________________ _____   ________   _________    __  _________
  / ____/ / / / ____/ ___/ ___//  _/ | / / ____/  / ____/   |  /  |/  / ____/
 / / __/ / / / __/  \__ \\__ \ / //  |/ / / __   / / __/ /| | / /|_/ / __/   
/ /_/ / /_/ / /___ ___/ /__/ // // /|  / /_/ /  / /_/ / ___ |/ /  / / /___   
\____/\____/_____//____/____/___/_/ |_/\____/   \____/_/  |_/_/  /_/_____/   
 )EOF");

    
    printf("\n\n\n\nWhat is your name?\n");
    gets(name); 
    playGame();  

}

