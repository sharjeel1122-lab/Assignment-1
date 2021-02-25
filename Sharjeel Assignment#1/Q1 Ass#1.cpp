#include<iostream>
using namespace std;
int main()
{
	float num1,num2,multi,div,add,sub;
	cout<<"Enter the tow numbers"<<endl;
	cin>>num1>>num2;
	add=num1+num2;
	sub=num1-num2;
	multi=num1*num2;
	div=num1/num2;
	cout<<"Sum= "<<add<<endl;
	cout<<"Subtraction= "<<sub<<endl;
	cout<<"Multiplication= "<<multi<<endl;
	cout<<"Division= "<<div;	
	return 0;
}

// Algorithm of Program:
// Step 1: Start
// Step 2: Create variables 
// Step 3: Ask the user for values
// Step 4: Store the two values
// Step 5: Add values and assign to add variable
// Step 6: Subtract values and assign to sub variable
// Step 7: Multiply values and assign to multi variable
// Step 8: Divide values and assign to div variable
// Step 9: Print the values of add,sub,multi and div variables
// Step 10: End
