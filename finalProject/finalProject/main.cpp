#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

bool yesno = true;
int userChoice, depositChoice, itemDepositNumber, itemWithdrawalNumber, withdrawalChoice;
string username, password;
string usernameAttempt, passwordAttempt;
string itemDeposit, itemWithdrawal;
double userBalanceMoney, moneyDeposit, moneyWithdrawal;
string userBalanceItems;
int userBankChoice;

int account();

int logoff()
{
	cout << "Goodbye" << endl;

	system("pause");
	return 0;
}

int withdrawal()
{
	cout << "What would you like to withdrawal? [1] Money or [2] Items" << endl;
	cin >> withdrawalChoice;

	if (withdrawalChoice == 1)
	{
		cout << "How much money would you like to withdrawal?" << endl;
		cout << "$" << endl;
		cin >> moneyWithdrawal;

		userBalanceMoney = userBalanceMoney - moneyWithdrawal;
	}

	else if (withdrawalChoice == 2)
	{
		cout << "Which item would you like to withdrawal?" << endl;
		cin >> itemWithdrawal;

		cout << "How many would you like to withdrawal?" << endl;
		cin >> itemWithdrawalNumber;
	}

	cout << "Thank you for your withdrawal" << endl;

	account();

	return 0;
}

int deposit()
{
	cout << "What would you like to deposit? [1] Money or [2] Items" << endl;
	cin >> depositChoice;

	if (depositChoice == 1)
	{
		cout << "How much money would you like to deposit?" << endl;
		cout << "$" << endl;
		cin >> moneyDeposit;

		userBalanceMoney = userBalanceMoney + moneyDeposit;
	}

	else if (depositChoice == 2)
	{
		cout << "Which item would you like to deposit?" << endl;
		cin >> itemDeposit;

		cout << "How many would you like to deposit?" << endl;
		cin >> itemDepositNumber;
	}

	cout << "Thank you for your deposit" << endl;

	account();

	return 0;
}

int account()
{
	cout << fixed << showpoint;
	cout << setprecision(2);

	cout << "Your current balance is $" << userBalanceMoney << " and " << userBalanceItems << " in your item storage" << endl;
	cout << "What would you like to do? [1] Deposit, [2] Withdrawal, [3] Log Off" << endl;
	cin >> userBankChoice;

	if (userBankChoice == 1)
	{
		deposit();
	}

	else if (userBankChoice == 2)
	{
		withdrawal();
	}

	else if (userBankChoice == 3)
	{
		logoff();
	}

	return 0;
}

int signIn()
{
	cout << "Username: ";
	cin >> usernameAttempt;
	cout << "Password: ";
	cin >> passwordAttempt;

	if (usernameAttempt == username && passwordAttempt == password)
	{
		account();
	}

	else
	{
		cout << "Something was wrong. Please try again" << endl;
		signIn();
	}

	return 0;
}

int accountCreate()
{
	cout << "Please create a username: ";
	cin >> username;
	cout << "Please create a password: ";
	cin >> password;

	cout << "Account created. Please Log in" << endl;

	signIn();

	return 0;
}

int main()
{
	int userSignIn, userCreate;

	cout << "Welcome to the bank" << endl;
	cout << "Do you have an accout? [1]Yes or [2] No" << endl;
	cin >> userChoice;

	if (userChoice == 1)
	{
		cout << "Would you like to sign in? [1] Yes or [2] No" << endl;
		cin >> userSignIn;

		if (userSignIn == 1)
		{
			signIn();
		}

		else if (userSignIn == 2)
		{
			main();
		}
	}

	else if (userChoice == 2)
	{
		cout << "Would you like to create an account? [1] Yes or [2] No" << endl;
		cin >> userCreate;

		if (userCreate == 1)
		{
			accountCreate();
		}

		else if (userCreate == 2)
		{
			main();
		}
	}
}