#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <stdlib.h>
#include <cstdio>
#include <conio.h>

void difficulty();
void easy();
void medium();
void hard();
void correct();
void tooHigh();
void tooLow();
void counterUp();
void resetCounter();
void tryAgain();
void retry();
void quit();
void invalid();

int a = 1;
int dif{};

int main() {
	difficulty();

	return 0;
}

// Allows the user to select difficulty
void difficulty() {

	std::cout << "Select difficulty: " << std::endl << std::endl;
	std::cout << "e: easy" << std::endl;
	std::cout << "m: medium" << std::endl;
	std::cout << "h: hard" << std::endl << std::endl;

	char input = _getch();
	std::cout << input << std::endl << std::endl;

	switch (input)
	{
	case 'E': case 'e':
		easy();
		break;
	case 'M': case 'm':
		medium();
		break;
	case 'H': case 'h':
		hard();
		break;

	default:
		system("cls");
		invalid();
		difficulty();
		break;
	}
}

// Creates a random number between an 1 and 5 and allows the user to guess
void easy() {

	system("cls");
	dif = 1;

	int iSecret = 2;
	int iGuess{};

	/*int iSecret{};
	int iGuess{};

	std::srand(std::time(nullptr));

	iSecret = rand() % 5 + 1;*/
	
	std::cout << "Guess a number between 1 and 5!" << std::endl << std::endl;
	std::cin >> iGuess;
	if (iGuess == iSecret)
	{
		system("cls");
		correct();
		tryAgain();
	}
	else if (iGuess > iSecret)
	{
		system("cls");
		tooHigh();
		tryAgain();
	}
	else if (iGuess < iSecret)
	{
		system("cls");
		tooLow();
		tryAgain();
	}
	else
	{
		quit();
	}

}

// Creates a random number between an 1 and 10 and allows the user to guess
void medium() {

	system("cls");
	dif = 2;

	int iSecret = 8;
	int iGuess{};

	/*int iSecret{};
	int iGuess{};

	std::srand(std::time(nullptr));

	iSecret = rand() % 10 + 1;*/

	std::cout << "Guess a number between 1 and 10!" << std::endl << std::endl;
	std::cin >> iGuess;
	if (iGuess == iSecret)
	{
		system("cls");
		correct();
		tryAgain();
	}
	else if (iGuess > iSecret)
	{
		system("cls");
		tooHigh();
		tryAgain();
	}
	else if (iGuess < iSecret)
	{
		system("cls");
		tooLow();
		tryAgain();
	}
	else
	{
		quit();
	}

}

// Creates a random number between an 1 and 30 and allows the user to guess
void hard() {

	system("cls");
	dif = 3;

	int iSecret = 19;
	int iGuess{};

	/*int iSecret{};
	int iGuess{};

	std::srand(std::time(nullptr));

	iSecret = rand() % 30 + 1;*/

	std::cout << "Guess a number between 1 and 30!" << std::endl << std::endl;
	std::cin >> iGuess;
	if (iGuess == iSecret)
	{
		system("cls");
		correct();
		tryAgain();
	}
	else if (iGuess > iSecret)
	{
		system("cls");
		tooHigh();
		tryAgain();
	}
	else if (iGuess < iSecret)
	{
		system("cls");
		tooLow();
		tryAgain();
	}
	else 
	{
		quit();
	}

}

// The user guessed the right number
void correct() {
	std::cout << "You guessed the right number!" << std::endl;
	if (a==1)
	{
		std::cout << "It took " << a << " try" << std::endl << std::endl;
	}
	else 
	{
		std::cout << "It took " << a << " tries" << std::endl << std::endl;
	}

	resetCounter();
}

// The user guessed a higher number
void tooHigh() {
	std::cout << "Your guess was too high" << std::endl << std::endl;
	counterUp();
}

// The user guessed a lower number
void tooLow() {
	std::cout << "Your guess was too low" << std::endl << std::endl;
	counterUp();
}

// The input is invalid
void invalid() {
	std::cout << "Invalid input" << std::endl << std::endl;
}

// Makes the counter go up
void counterUp() {
	a = a++;
}

// Resets the counter
void resetCounter() {
	a = 1;
}

// Asks the user if they want to try again
void tryAgain() {
	std::cout << std::endl << "Try again?" << std::endl << std::endl;
	std::cout << "y: Yes" << std::endl << "n: No" << std::endl << std::endl;
	char confirm = _getch();
	std::cout << confirm << std::endl << std::endl;

	switch (confirm)
	{
	case 'Y': case 'y':
		retry();
		break;
	case 'N': case 'n':
		quit();
		break;
	default:
		system("cls");
		invalid();
		tryAgain();
		break;
	}
}

// launches the program again while maintaining the difficulty
void retry() {
	if (dif == 1)
	{
		easy();
	}
	else if (dif == 2) 
	{
		medium();
	}
	else if (dif == 3) 
	{
		hard();
	}
}

// Quits the program
void quit() {
	system("cls");
	exit(0);
}