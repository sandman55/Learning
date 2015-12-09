// GuessingGame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdlib.h>
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	int number=rand()%100; 
	int guess =- 1;
	int trycount = 0;
	while(guess != number && trycount<8)
	{
	
		cout << "Please enter a guess: ";
		cin >> guess;

		if(guess < number)
		   cout<<"Too low"<<endl;
		if(guess > number)
		   cout<<"Too high"<<endl;
		trycount++;
	}
	
	if(guess==number)
		cout<<"You guessed the number" << endl;
	else
		cout<<"Sorry, the number was: "<< number;

	system("pause");

	return 0;
}
