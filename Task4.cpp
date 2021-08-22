/*
Task 4
Name: Muhammad Sharjeel
Roll Number: BSEF20A012
Section: Afternoon
*/

#include <iostream>

using namespace std;

int main()
{
	int length, width, area1, area2;
	cout << "Enter length and width of first rectangle : ";
	cin >> length;
	cin >> width;
	area1 = length * width;
	cout << "area1 is " << area1 << endl;
	cout << "Enter length and width of second rectangle : ";
	cin >> length;
	cin >> width;
	area2 = length * width;
	cout << "area2 is " << area2 << endl;
	if (area1 > area2)
		cout << "First rectangle has greater area " << area1 << endl;
	if (area2 > area1)
		cout << "Second rectangle has greater area " << area2 << endl;
	if (area1 == area2)
		cout << "Both the areas are same " << endl;
	return 0;
}