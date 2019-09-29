#include <iostream>
#include <math.h>
#include <iostream>
using namespace std;
int main()
{
	float A, x, y;
	cout << "A=";
	cin >> A;
	x = A * A;
	y = A * x;
	A = x * y;
	x = A * A;
	A = A * x;
	cout << "----\nA=" << A;
}