#include <cmath>
#include <iostream>
using namespace std;

/*C++ program to find power of a number.*/

int main()
{ 
  double base=0, exp=0, power=0;
  cout<<"Hello there...!"<<endl;
  cout<<"PROGRAM TO POWER OF A GIVEN NUMBER \n \n";
  cout<<"Enter the base number: ";
  cin>>base;
  cout<<"Enter the exponent number: ";
  cin>>exp;
  power=pow(base,exp);
  cout<<"\n \n"<<base<<" raised to the power "<<exp<<" gives the result as "<<power;
  return 0;
}
