/*
File name: chapter5exercise17.cpp
programmer: Blake Jewell
Date: 04/25
Requirements: write a program that generates 2 numbers to be added
together, then waits for the user to hit enter, and displays the answer
*/

#include <iostream>
#include <iomanip>
#include <random>
#include <cstdlib>

int random();
void addition(int, int);
char choice_();

using namespace std;

int main()
{
	char choice;
	do
	{
		int number1 = random();
		int number2 = random();
		addition(number1, number2);
		choice = choice_();
	} while (choice == 'y' || choice == 'Y');

}
int random() //This function generates random numbers
{
	random_device math;                              //Random engine
	uniform_int_distribution<int> number(100, 999);  //Random distributor

	int number1 = number(math);                      //defining random intergers
	return number1;
}
void addition(int num1, int num2) //This function takes in numbers, adds them together, and displays this info for the user
{

	cout << "Add these 2 numbers together and hit the Enter key when you want to see the answer!" << endl;
	cout << "\n";

	cout << setw(10) << num1 << endl;
	cout << setw(7) << "+" << num2 << endl;

	int answer = num1 + num2;
	cin.get();
	cin.ignore();
	cout << setw(10) << answer << endl;

}
char choice_() //This function asks the user to exit or continue the program
{
	char question;
	cout << "Would you like to do another equation? (Y/N)" << endl;
	cin >> question;
	while (question != 'Y' && question != 'y' && question != 'N' && question != 'n')
	{
		cout << "Invalid choice. Please enter either (Y), for yes, or (N), for no." << endl;
		cin >> question;
	}
	if (question == 'N' || question == 'n')
	{
		cout << "Goodbye" << endl;
		exit(0);
	}
	return question;

}


