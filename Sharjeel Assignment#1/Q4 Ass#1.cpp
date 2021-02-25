#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float num,power,res;
	cout<<"Enter the number"<<endl;
	cin>>num;
	cout<<"Enter the power"<<endl;
	cin>>power;
	res=pow(num, power);
	cout<<num<<"^"<<power<<"= "<<res;
	return 0;
}



// Algorithm of Program:
// Step 1: Start
// Step 2: Create variables 
// Step 3: Ask user for number
// Step 4: Ask user for power
// Step 5: Apply power function "pow"
// Step 6: Assign to res variable
// Step 7: Print the value
// Step 8: End
