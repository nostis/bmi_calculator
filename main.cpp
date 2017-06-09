#include <iostream>
#include <conio.h>

int main()
{

	double mass;
	double growth;
	double bmi;

	std::cout << "Enter your mass: " << std::endl;
	std::cin >> mass;
	std::cout << "Enter your growth: " << std::endl;
	std::cin >> growth;

	bmi = mass / (growth * growth); //to designate bmi
	bmi *= 10000; //to show e.g. 22.50 not 0.0002250
	std::cout.precision(4); //to show e.g. 22.50 not 22.50323

	std::cout << "Your BMI is : " << bmi << std::endl;


	getch();

	return 0;
}