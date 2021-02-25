#include<iostream>
using namespace std;
int main()
{
	long int age,hour,min,sec;
	cout<<"Enter your age"<<endl;
	cin>>age;
	hour=age*24*365;
	min=age*24*365*60;
	sec=age*365*24*60*60;
	cout<<"Hours= "<<hour<<endl<<"Minutes= "<<min<<endl<<"Seconds= "<<sec;	
	
	return 0;
}



// Algorithm of Program:
// Step 1: Start
// Step 2: Create variables 
// Step 3: Ask the user for age
// Step 4: Store the age 
// Step 5: Multiply age with 24 and 365 assign to hour
// Step 6: Multiply age with 24, 365 and 60 assign to min
// Step 7: Multiply age with 24, 365, 60 and 60 assign to sec
// Step 8: Print the values of hour,min, and sec variables
// Step 9: End
