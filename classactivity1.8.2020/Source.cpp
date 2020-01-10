// Wesley Cottrill
// This is my own work
// In class exercise

#include <iostream>
#include <conio.h>
using namespace std;
//int main() {
//	/*float kilogram, pound;
//	cout << "enter pound";
//	cin >> pound;
//	kilogram = pound * 0.454;
//	cout << pound << "pound=" << kilogram << "Kg";*/
//
//	
//
//	return 0;
//}

//double hexagonArea(double s)
//{
//	return ((3 * sqrt(3) *
//		(s * s)) / 2);
//}

//int main()
//{
//	float side, area;
//	cout << "enter side";
//	cin >> side;
//	area = ((3 * sqrt(3) *
//		(side * side)) / 2);
//	cout << side << "side=" << area << "area";
//
//	return 0;
//}


int main() {


	int a, b, big;
	cout << "Please enter 2 digits sir/madam: ";
	cin >> a >> b;
	if (a > b)
	{
		big = a;
	}
	else
	{
		big = b;
	}
	cout << "The biggest number of the two is:"<<big;

	return 0;

}