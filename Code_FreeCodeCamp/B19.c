#include<stdio.h>
#include<stdlib.h>
int main(){
	// Building a guessing game
	int secretNumber = 3;
	int guess, outOfGuess = 0;
	int guessCount = 0;
	int guessLimit = 3;
	
	while(guess != secretNumber && outOfGuess == 0){
		if(guessCount < guessLimit){
			printf("Enter a number : "); scanf("%d", &guess);
			guessCount++;
		}else{
			outOfGuess = 1;
		}
	}
	if(outOfGuess == 1){
		printf("Out of guess !!!");
	}else{
		printf("You win !!!");
	}
	
	return 0;
}
