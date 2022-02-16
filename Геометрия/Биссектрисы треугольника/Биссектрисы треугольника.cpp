#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
int main()
{
    long double a, b, c;
    cin >> a >> b >> c;

double p = (a+b+c)/2;
double la = (2*(sqrt(b*c*p*(p-a))))/(b+c);
double lb = (2*(sqrt(a*c*p*(p-b))))/(a+c);
double lc = (2*(sqrt(a*b*p*(p-c))))/(a+b);

cout << fixed << setprecision(3) << la << endl;
cout << fixed << setprecision(3) << lb << endl;
cout << fixed << setprecision(3) << lc << endl;
    
    return 0;
}