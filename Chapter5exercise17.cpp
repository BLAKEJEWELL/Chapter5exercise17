/*
File name: chapter5exercise17.cpp
programmer: Blake Jewell
Date: 04/25
Requirements: write a program that generates 2 numbers to be added
together, then waits for the user to enter an anwser. the program
should then tell the user if they are correct or not.
*/

#include <iostream>
#include <iomanip>
#include <random>
#include <cstdlib>

int random();
void addition();
void subraction();
void multiplication();
void division();
void checking_answer(int, int);
int menu();

using namespace std;

int main()
{
	int choice = menu();
	do 
	{
		
		switch (choice)
		{
		case 1:
			addition();
			break;
		case 2:
			subraction();
			break;
		case 3:
			multiplication();
			break;
		case 4:
			division();
			break;
			
		}
		int choice = menu();
	} while (choice <1 && choice > 4);
	return 0;

}
int random() //This function generates random numbers
{
	random_device math;                              //Random engine
	uniform_int_distribution<int> number(100, 999);  //Random distributor

	int number1 = number(math);                      //defining random intergers
	return number1;
}
void addition() //This function takes in numbers, adds them together, and displays this info for the user
{
	int num1 = random();
	int num2 = random();

	cout << "Add these 2 numbers together. Then type in your answer and hit the Enter key" << endl;
	cout << "\n";

	cout << setw(10) << num1 << endl;
	cout << setw(7) << "+" << num2 << endl;

	int answer = num1 + num2;
	int useranswer;
	cin >> useranswer;
	
	checking_answer(answer, useranswer);

}
void subraction()
{
	int num1 = random();
	int num2 = random();

	cout << "Subtract these two numbers. Then type in your answer and hit the Enter key" << endl;
	cout << "\n";

	cout << setw(10) << num1 << endl;
	cout << setw(7) << "-" << num2 << endl;

	int answer = num1 - num2;
	int useranswer;
	cin >> useranswer;

	checking_answer(answer, useranswer);
}
void multiplication()
{
	int num1 = random();
	int num2 = random();

	cout << "Multiply these 2 numbers together. Then type in your answer and hit the Enter key" << endl;
	cout << "\n";

	cout << setw(10) << num1 << endl;
	cout << setw(7) << "x" << num2 << endl;

	int answer = num1 * num2;
	int useranswer;
	cin >> useranswer;

	checking_answer(answer, useranswer);
}
void division()
{
	int num1 = random();
	int num2 = random();

	cout << "Divide these two numbers. Then type in your answer and hit the Enter key" << endl;
	cout << "\n";

	cout << setw(10) << num1 << endl;
	cout << setw(7) << "÷" << num2 << endl;

	int answer = num1 / num2;
	int useranswer;
	cin >> useranswer;

	checking_answer(answer, useranswer);
}
void checking_answer(int answer, int useranswer) //This function lets the user know if they are right or wrong
{
	if (useranswer == answer)
	{
		cout << "Correct!" << endl;
	}
	else
	{
		cout << "Incorrect. Answer is "<<answer << endl;
	}
}
int menu()
{
	int selection;
	cout << "PLEASE SELECT ONE OF THE FOLLOWING MENU OPTIONS (1-5)" << endl;
	cout << "**********************" << endl;
	cout << "(1) Addition" << endl;
	cout << "(2) Subtraction" << endl;
	cout << "(3) Multiplication" << endl;
	cout << "(4) Division" << endl;
	cout << "(5) Exit " << endl;
	cin >> selection;
	while (selection < 1 || selection > 5)
	{
		cout << "Invalid selection. Please enter one of the options listed above (1-5) and press ENTER." << endl;
		cin >> selection;

	}
	if (selection == 5)
	{
		exit(0);
	}
	return selection;
}


