#include <iostream>
#include <array>

int main()
{
	using namespace std;
	array<double, 3>grade  = { 0 };
	cout << "plese enter your first grade: "; cin >> grade[0];
	cout << "plese enter your second grade: "; cin >> grade[1];
	cout << "plese enter your third grade: "; cin >> grade[2];
	cout << "average " << (grade[0] + grade[1] + grade[2]) / 3;
}