Start
   DECLARE INTEGER number
   DISPLAY "Enter a number:"
   READ number
   IF number > 0 THEN
      DISPLAY "The number is positive."
   ELSE IF number < 0 THEN
      DISPLAY "The number is negative."
   ELSE
      DISPLAY "The number is zero."   
End

#include <iostream>
using namespace std;
//Aeliya Haider
int main()
{
	//This code Explain Positive, Negative and zero
	int number;
	cout<<"Enter any number"<<endl;
	cin>>number;
	
	if(number > 0)
	{
		cout<<"This is positive number"<<endl;
	}
	 else if(number < 0)
	 {
	 	cout<<"This is negative number"<<endl;
	 }
	 else 
	 {
	 	cout<<"This is zero";
	 }
}

