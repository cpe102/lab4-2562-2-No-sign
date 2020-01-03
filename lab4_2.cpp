#include<iostream>

using namespace std;
float x,y,z;

float findDistance(float u,float a,float t){
	return u*t+0.5*a*t*t;
	
	
	
}

int main(){
	cout<<"Input u\n";
	cin>>x;
	cout<<"Input a\n";
	cin>>y;
	cout<<"Input t\n";
	cin>>z;
	cout<<"s ="<<findDistance(x,y,z) ;

  return 0;
}
