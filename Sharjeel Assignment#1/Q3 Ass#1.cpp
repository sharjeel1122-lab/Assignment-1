#include<iostream>
using namespace std;
int main()
{
	float temp,fahren,cel;
	cout<<"1. Check Celsius to Fahrenheit"<<endl;
	cout<<"Enter temperature in Celsius"<<endl;
	cin>>cel;
	fahren=9/5*cel+32;
	cout<<"Celsius to Fahrenheit= "<<fahren<<endl<<endl;	
	cout<<"2. Check Fahrenheit to Celsius"<<endl;
	cout<<"Enter temperature in Fahrenheit"<<endl;
	cin>>fahren;
	cel=(fahren-32)*5/9;
	cout<<"Fahrenheit to Celsius= "<<cel;
	return 0;
}



// Algorithm of Program:
// Step 1: Start
// Step 2: Create variables 
// Step 3: Ask the user for Temperature
// Step 4: Store the temperature
// Step 5: Apply formula
// Step 6: Display Temperature in Celsius and Fahrenheit
// Step 7: End
