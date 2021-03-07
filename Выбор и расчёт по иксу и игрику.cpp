#include <iostream> 
#include <math.h> 
using namespace std; 
int main() 
{ 
 double x,y,f,a,b; 
  int l,k; 
 cout << "Vvedite x "; cin >> x; 
 cout << "Vvedite y "; cin >> y; 
cout<<"Vberite f: 1-sh(x),2-x^2,3-e^x";
cin>>k;
	switch(k) 
	{
	case 1:f=sinh(x); break;
	case 2: f=pow(x,2); break;
	case 3: f=exp(x); break;
	default: cout <<"Ne vuibrana funkciya";return 1;
	}
   a=x/y; 
   if (a<0) 
	   b=pow((pow(f,2)),3);
		   else
			   if (a>0) b=log((f/y))+a;
			      else
					  b=pow((abs(sin (y))),(1/3));

    cout << "RESULT = " << b << endl;      
return 0;  
}

