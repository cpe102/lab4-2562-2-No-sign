#include <iostream>
#include <cmath>
using namespace std;
float e=2.71828;
float x,y;



int main()
{
	cout<<"Enter x\n";
	cin>>x;
	y=(3*x*x*x)+(2*e)+(pow(2,2*x+1))+sqrt((x*x)+1);
	cout<<"Result y ="<<y;
	return 0;
}
