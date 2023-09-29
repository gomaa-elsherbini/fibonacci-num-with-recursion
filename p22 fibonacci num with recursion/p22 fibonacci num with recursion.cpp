#include <iostream>
#include <iomanip>
using namespace std;



void fibonacciSeriesOfNum( int num)
{
	static int fib = 1;
	static int x = 0;
	static int y = 1;

	cout << fib << "    ";
	
	fib = x + y;
	x = y;
	y = fib;
	
	if (num > 1)
	{
		fibonacciSeriesOfNum((num - 1) );
	}

	cout << endl;
}

int main()
{

	fibonacciSeriesOfNum( 10);


	system("pause>0");

	return 0;
}



