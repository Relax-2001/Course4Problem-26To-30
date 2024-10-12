
#include <iostream>

using namespace std;

// #26

int ReadNumber()
{
	int Number = 0;
	cout << "Enter number \n";
	cin >> Number;
	return Number;
}

void PrintNumbersFrom1ToN_USingWhile(int Number)
{
	cout << "Using  while loop \n";

	int Counter = 0;

	while (Counter < Number)
	{
		Counter++;
		cout << Counter << "\n";
	}

}

void PrintNumberFrom1ToN_UsingDoWhile(int Number)
{

	cout << "Using do while loop \n";

	int Counter = 0;

	do
	{
		Counter++;
		cout << Counter << "\n";

	} while (Counter < Number);

}

void PrintNumberFrom1ToN_UsingFor(int Number)
{
	cout << "Using for loop\n";

	for (int i = 1; i <= Number; i++)
	{
		cout << i << "\n";
	}

}

// #27
void PrintNumberFromNTo1_UsingWhile(int Number)
{
	cout << "Using while loop\n";
	int Counter = Number + 1;

	while (Counter > 1)
	{
		Counter--;
		cout << Counter << "\n";
	}

}

void PrintNumberFromNTo1_UsingDoWhile(int Number)
{
	cout << "Using Do while\n";
	int Counter = Number + 1;

	do
	{
		Counter--;
		cout << Counter << "\n";
	} while (Counter > 1);

}

void PrintNumberFromNTo1_UsingFor(int Number)
{
	cout << "Using for loop\n";

	for (int i = Number; i >= 1; i--)
	{
		cout << i << "\n";
	}
}

// #28
enum enOddOrEven { Odd = 1, Even = 2 };

enOddOrEven CheckNumberOddOrEven(int Number)
{
	if (Number % 2 != 0)
		return enOddOrEven::Odd;
	else
		return enOddOrEven::Even;
}

int PrintSumOfOddNumbersFrom1ToN_UsingWhile(int Number)
{
	cout << "Using While loop\n";

	int Counter = 0, Sum = 0;

	while (Counter < Number)
	{
		Counter++;

		if (CheckNumberOddOrEven(Counter) == enOddOrEven::Odd)
		{
			Sum += Counter;
		}
	}

	return Sum;
}

int PrintSumOfOddNumbersFrom1ToN_UsingDoWhile(int Number)
{
	cout << "Using do while\n";

	int Counter = 0, Sum = 0;

	do
	{
		Counter++;

		if (CheckNumberOddOrEven(Counter) == enOddOrEven::Odd)
		{
			Sum += Counter;
		}

	} while (Counter < Number);

	return Sum;
}

int PrintSumOfOddNumbersFrom1ToN_UsingFor(int Number)
{

	cout << "Using for loop\n";

	int Sum = 0;

	for (int i = 1; i <= Number; i++)
	{
		if (CheckNumberOddOrEven(i) == enOddOrEven::Odd)
		{
			Sum += i;
		}
	}

	return Sum;
}

// Derived problem form #28
enum enChoseSumOption { OddSum = 1, EvenSum = 2, AllSum = 3 };

enChoseSumOption ReadOptin()
{
	enChoseSumOption Option;
	int c = 0;

	cout << "Chose an option to sum numbers from 1 to n\n";
	cout << "(1) Odd sum\n";
	cout << "(2) Even sum\n";
	cout << "(3) All sum\n";

	cin >> c;

	Option = (enChoseSumOption)c;

	return Option;
}

int PrintSumOfEvenNumbersFrom1ToN_UsingFor(int Number)
{
	cout << "Sum of even numbers using for\n";

	int Sum = 0;

	for (int i = 1; i <= Number; i++)
	{

		if (CheckNumberOddOrEven(i) == enOddOrEven::Even)
		{
			Sum += i;
		}
	}

	return Sum;

}

int PrintSumOfAllNumbers_UsingFor(int Number)
{

	cout << "Sum of all numbers using for loop\n";

	int Sum = 0;

	for (int i = 1; i <= Number; i++)
	{
		Sum += i;
	}

	return Sum;
}

void PrintSumOfNumbersFrom1ToNByUserChoice(enChoseSumOption Option, int Number)
{

	cout << "Sum of numbers from 1 to N by user choice\n";

	switch (Option)
	{
	case enChoseSumOption::OddSum:
		cout << "Sum odd numbers\n";
		cout << PrintSumOfOddNumbersFrom1ToN_UsingFor(Number);
		break;

	case enChoseSumOption::EvenSum:
		cout << "Sum even numbers\n";
		cout << PrintSumOfEvenNumbersFrom1ToN_UsingFor(Number);
		break;

	case enChoseSumOption::AllSum:
		cout << "Sum all Numbers\n";
		cout << PrintSumOfAllNumbers_UsingFor(Number);
		break;

	default:
		cout << " Not a valid choice \n";
		break;

	}
}

// #29
int SumEvenNumbersFrom1ToN_UsingWhile(int Number)
{
	cout << "Using while loop\n";

	int Counter = 0, Sum = 0;

	while (Counter < Number)
	{
		Counter++;

		if (CheckNumberOddOrEven(Counter) == enOddOrEven::Even)
		{
			Sum += Counter;
		}

	}

	return Sum;
}

int SumEvenNumbersFrom1ToN_UsingDoWhile(int Number)
{
	cout << "Using do while\n";

	int Counter = 0, Sum = 0;

	do
	{
		Counter++;

		if (CheckNumberOddOrEven(Counter) == enOddOrEven::Even)
		{
			Sum += Counter;
		}

	} while (Counter < Number);

	return Sum;
}

// #30
int ReadPositiveNumber(string Message)

{
	int Number;

	do
	{
		cout << Message << "\n";
		cin >> Number;

	} while (Number < 1);

	return Number;
}

int GetFactorial(int Number)
{

	int Factorial = 1;

	for (int i = Number; i >= 1; i--)
	{
		Factorial *= i;
	}

	return Factorial;
}

int main()
{
	// #26
	int Number = ReadNumber();

	/*PrintNumbersFrom1ToN_USingWhile(Number);
	PrintNumberFrom1ToN_UsingDoWhile(Number);
	PrintNumberFrom1ToN_UsingFor(Number);*/

	// #27
	/*PrintNumberFromNTo1_UsingWhile(Number);
	PrintNumberFromNTo1_UsingDoWhile(Number);
	PrintNumberFromNTo1_UsingFor(Number);*/

	// #28
	/*cout << PrintSumOfOddNumbersFrom1ToN_UsingWhile(Number) << "\n";
	cout << PrintSumOfOddNumbersFrom1ToN_UsingDoWhile(Number) << "\n";
	cout << PrintSumOfOddNumbersFrom1ToN_UsingFor(Number) << "\n";*/

	// Derived problem form #28
	 //PrintSumOfNumbersFrom1ToNByUserChoice(ReadOptin(), Number);

	// #29
	/*cout << SumEvenNumbersFrom1ToN_UsingWhile(Number) << "\n";
	cout << SumEvenNumbersFrom1ToN_UsingDoWhile(Number) << "\n";
	cout << PrintSumOfEvenNumbersFrom1ToN_UsingFor(Number) << "\n";*/

	// #30
	cout << GetFactorial(ReadPositiveNumber("Enter a positive number\n")) << "\n";




	return 0;
}
