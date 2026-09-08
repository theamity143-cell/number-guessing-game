#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number;
    int guess  ; 
    int max_guess = 5;
    int attempt_remaining ; 
    int play_game ; 
    
    
    srand(time(0));
    
    do{
        number = rand() % 100 + 1;
        int _no_of_guess = 0 ; 
        int score = 100 ; 
    do{
        printf("guess the number");
        scanf("%d" , &guess);
        if(guess> number){
            printf("lower number plz!!!\n");
            score-=10 ; 
        }
        else if(guess < number){
            printf("higer number plz!!!\n");
            score-=10 ; 
        }
        else{
            printf("congrats you guess the number!!!\n");
            printf("the gusses number is %d\n" ,  guess);    
        }
        _no_of_guess++;
        attempt_remaining = max_guess - _no_of_guess ; 
        printf("the attempts left is %d\n" , attempt_remaining);
        printf("your score is %d\n" , score);  
        
        
    }while(guess!= number && _no_of_guess < max_guess);
    
    
    if(guess==number){
        printf("you guess the number correctly\n");
        printf(" you guess the number in %d guesses\n" , _no_of_guess);
    }
    else{
        printf("you loose the game\n");
        printf("the number by the computer is %d\n" , number);
    }  

    printf("Do you want to play again? (1 = Yes, 0 = No): ");
    scanf("%d", &play_game);
}while(play_game==1);
        
    
    return 0 ;

}