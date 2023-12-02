#include <iostream>

using namespace std;

main()  {
	
	float x,y,z,a,b,c,d,g,f,t;
	cout<<"please enter x:";
	cin>>x;
	cout<<"please enter y:";
	cin>>y;
	cout<<"please enter z:";
	cin>>z;
	a=x-y;
	b=x+z;
	c=a*b;
	d=x+y+z;
	g=d*d;
	f=g+1;
	
	t=c/f;
	cout<<"result is:"<<t;

}