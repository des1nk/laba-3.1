#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main()
{
	float A, x;
	cout << "A=";
	cin >> A;
	A = A * A;
	x = A * A;
	A = x * x;
	cout << "----\nA=" << A;
}