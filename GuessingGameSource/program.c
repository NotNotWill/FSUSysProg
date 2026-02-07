/*

	Program: Guess the Number

	Author: William Peterson

	Class: CSC2560 - Systems Programming

*/

// C Definitions
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int low, high, middle, search_space;
	int counter = 0;
	int actual_counter = 0;
	char answer;

	
	printf("Please enter low bound \n");
	scanf(" %d", &low);

	printf("Please enter high bound \n");
	scanf(" %d", &high);
	
	printf("Your number has to be between %d and %d. \n", low, high);

	search_space = high - low;


	// Counting how many questions
	while (search_space != 0)
	{
		search_space = search_space/2;
		counter = counter + 1;
	}

	printf("I will guess your number with maximum %d questions \n", counter);
	

	// Initial question
	counter = 1;

	// While loop asking questions about middle number 
	while(low < high)
	{
		printf("\n Question %d \n", counter);

		middle = (high + low)/2;

		printf("Please enter e if your number is equal to %d \n", middle);
		printf("Please enter g if your number is greater than to %d \n", middle);
		printf("Please enter s if your number is smaller than to %d \n", middle);

		scanf(" %c", &answer);

		if(answer == 'e')
		{
			low = high + 1;
		}
		else if(answer=='g')
		{
			low = middle + 1;
		}
		else if(answer=='s')
		{
			high = middle - 1;
		}
		else
		{
			printf("Try again.");
			actual_counter--;
			counter--;
		}
		actual_counter++;
		counter++;
	}

	if(middle == middle || middle == high || middle == low)
		{
			middle = (high + low)/2;
			printf("I have guessed your number in %d guesses! It is %d Thanks for playing \n", actual_counter, middle);
		}
	
	getchar();

	return 0;
}
