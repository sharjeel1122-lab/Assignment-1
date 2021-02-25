#include<iostream>
using namespace std;
int main()
{ 
float pri1,pri2,pri3,pri4,pri5,sum,dis,total;
cout<<"Enter the price of first item"<<endl;
cin>>pri1;
cout<<"Enter the price of second item"<<endl;
cin>>pri2;
cout<<"Enter the price of third item"<<endl;
cin>>pri3;
cout<<"Enter the price of fourth item"<<endl;
cin>>pri4;
cout<<"Enter the price of fifth item"<<endl;
cin>>pri5;
sum=pri1+pri2+pri3+pri4+pri5;
cout<<endl<<"Total of five items is= "<<sum<<endl<<endl;
dis=sum*20/100;
cout<<"20% discount is= "<<dis<<endl;
total=sum-dis;
cout<<"The total price after 20% discount is= "<<total;
return 0;
}



// Algorithm of Program:
// Step 1: Start
// Step 2: Create variables 
// Step 3: Ask user for prices of five items
// Step 4: Sum of all price 
// Step 5: Assign to sum variable
// Step 6: Find 20% discount
// Step 7: Assign to dis variable
// Step 8: Now subtract total price with dis variable value
// Step 9: Assign Value to total variable
// Step 10: Display the final price of items
// Step 11: End
