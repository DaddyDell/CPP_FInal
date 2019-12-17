// FunctionsWithFiction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Header.h"
#include <iostream>
#include "string"
using namespace::std;


int main()
{
	int sleep = -1; //Sleep tracks our sleep. 1 is less sleep, and 2 is more.
	int productivity = -1; //productivity tracks our productivity level. Anything above 1 is good
	string playerName; //This is the variable storing the player name.
	do
	{
		cout << "\n\n\n\n\n\n\nWelcome to 'To Work or Not to Work'!\n";
		cout << "The Interactive game in which you\n ";
		cout << "choose your own destiny in a life like world.\n\n\n\n";
		cout << "What is your name, player?\n";
		cout << "My name is: ";
		cin >> playerName;
		cout << "Hello " << playerName << "! ";
		system("pause");
		cout << "\n\n\n\nThe Story starts here, " << playerName << ". It is 7pm, and your shift\n";
		cout << "For work starts in 7 hours.\n";
		cout << "What do you choose to do?\n";
		cout << "Your Options are:\n";
		cout << "1: Stay Up and Game\n";
		cout << "2: Stay Up and Finish Homework\n";
		cout << "3: Go to Sleep\n";
		cout << "(Select a number!)\nMy Choice:";
		cin >> sleep; //Get the first input

		cout << "\n\n\n\n\n\nIt is now 2am, with your alarm clock ringing\n";
		cout << "louder than that of a war drum.\n";
		cout << "What are you going to do, " << playerName << "?\n";
		cout << "Your Options are:\n";
		cout << "1: Go back Sleep\n";
		cout << "2: Wake up (And get homework done)\n";
		cout << "3: Wake up (And get ready for work)\n";
		cout << "(Select a number!)\nMy Choice:";
		cin >> productivity; //Get the second input
	} while (productivity == -1 && sleep == -1);//We do not want to continue if either of the vars are not chosen.
	if (productivity == 3)
	{//You Chose to go to work
		if (sleep == 1)
		{//Did not get enough Sleep
			NoSleepWork();
		}
		else if (sleep == 2)
		{//Did homework instead of sleep
			NoSleepExtraHomework();
		}
		else if (sleep == 3)
		{//Got all the sleep
			SleepWork();
		}	
	}
	else if (productivity == 2)
	{//Wake up and get Homework Done
		if (sleep == 1)
		{//Did not get enough Sleep
			NoSleepHomework();
		}
		else if (sleep == 2)
		{//Did homework instead of sleep
			NoSleepExtraExtraHomework();
		}
		else if (sleep == 3)
		{//Got all the sleep
			SleepHomework();
		}
	}
	else if (productivity == 1)
	{//Sleep in
		if (sleep == 1)
		{// Did not get enough sleep
			NoSleepNoWork();
		}
		else if (sleep == 2)
		{//Did homework instead of sleep
			NoSleepHomeworkExtra();
		}
		else if (sleep == 3)
		{//Got up with the alarm
			SleepNoWork();
		}
	}
	cout << "Take what you've learned from this game, " << playerName << endl;
	cout << "and apply these lessons to your real life." << endl;
	cout << "There is something to learn from anything, " << playerName << "\n\n\n\n\n\n\n\n\n\n";
	
	/*Debug Arena
	cout << "And the results are in!\n";
	cout << "Sleep: " << sleep << endl;
	cout << "Productivity: " << productivity << endl;
	*/
}