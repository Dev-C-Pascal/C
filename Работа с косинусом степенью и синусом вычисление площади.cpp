// Номер 1
#include <iostream>
#include <math.h>
using namespace std;
int main()

{
	double a,b,c,x,y,z,s;
	cout << "napishi x:";
	cin >> x;
	cout << "napishi y:";
	cin >> y;
		cout << "napishi z:";
	cin >> z;
	a=2*cos(x-2/3.);
	b=1/2.+pow(sin(y),2);
	c=1+(pow(z,2)/(3-pow(z,2)/5));
	s=a/b*c;
	cout << "Resultat s=" <<s<< endl;
	return 0;
}
