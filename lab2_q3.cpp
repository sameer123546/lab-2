#include <iostream>
using namespace std;

/*C++ program to enter temperature in Fahrenheit and convert it into Celsius.*/

int main()
{ 
  double cel=0,fah=0;
  cout<<"Hello there...!"<<endl;
  cout<<"PROGRAM TO CONVERT TEMPERATURE IN FAHRENHEIT TO CELCIUS \n \n";
  cout<<"Enter the temperature in degree fahrenheit: ";
  cin>>fah;
  cel=(fah-32)*((double)5/9);
  cout<<"\n \nThe temperature in degree Celcius is: "<<cel;
  return 0;
}
