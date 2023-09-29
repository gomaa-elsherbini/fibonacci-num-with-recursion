#include <iostream>
#include <iomanip>
using namespace std;



void fibonacciSeriesOfNum( int num, int x, int y)
{
	int fib = 1;
	
	fib = x + y;
	x = y;
	y = fib;

	cout << fib << "    ";
	
	if (num > 1)
		fibonacciSeriesOfNum(num - 1, x, y);

	cout << endl;
}

int main()
{

	fibonacciSeriesOfNum(10, 1, 0);


	system("pause>0");

	return 0;
}



