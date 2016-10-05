#include <iostream>
using namespace std;

//PROGRAM: TemperatureConverter
//AUTHOR: Tyler Timmins
//COURSE: ITSE 1307 2002
//DESCRIPTION: Prompts user to enter a tempature in Fahrenheit
//				then converts that to Celsius.

int main()
{
	//Declare variables
	double dFahrenheit;
	double dCelsius;

	//Promput user for input
	cout << "Enter the Fahrenheit: ";
	cin >> dFahrenheit;

	//Calculate
	dCelsius = (5.0 / 9.0) * (dFahrenheit - 32);

	//Display output
	cout << "The tempature in Celsius is: " << dCelsius << endl;

	return 0;
}