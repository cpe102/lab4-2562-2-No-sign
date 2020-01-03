#include <iostream>
using namespace std;
int y,z=2;
int findDivisor(int x)
{
	
	
	while(z<=x){
		if(x%z==0){
		return z;
		}
		else{
		z++;
		}
	}
	
}
int main()
{
    cout<<"Input";
	cin>>y;
	
	cout<<findDivisor(y);
	
	
	return 0;
	
	
	
	
}
